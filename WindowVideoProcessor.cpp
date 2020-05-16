#include "WindowVideoProcessor.h"
#include "opencv2/imgproc.hpp"
#include "QtWidgets/qtextbrowser.h"
#include "QtWidgets/qscrollbar.h"

double imshow_cvMat_onQLabel(const cv::Mat &img, QLabel *label) {

	int w_img = img.cols;
	int h_img = img.rows;
	int w_lbl = label->width();
	int h_lbl = label->height();

	double scale_factor = std::min(static_cast<double>(w_lbl) / w_img, static_cast<double>(h_lbl) / h_img);

	cv::Mat img_resized;

	cv::resize(img, img_resized, cv::Size(), scale_factor, scale_factor);

	w_img = img_resized.cols;
	h_img = img_resized.rows;

	cv::Mat img_rgb;
	cv::cvtColor(img_resized, img_rgb, cv::COLOR_BGR2RGB);
	label->setPixmap(QPixmap::fromImage(QImage(img_rgb.data, img_rgb.cols, img_rgb.rows, img_rgb.step, QImage::Format_RGB888)));

	return scale_factor;
}

WindowVideoProcessor::WindowVideoProcessor(VideoProcessor_threadController * vp_threadCtrl, QWidget * parent)
	:QMainWindow(parent)
{
	m_ui.setupUi(this);
	m_ui.target_printg->setReadOnly(true);

	// ==================== worker process to GUI ====================
	connect(vp_threadCtrl->get_worker(), &VideoProcessor::update_frameNumber, [this](size_t number) {
		m_ui.lbl_frameNumber->setText(QString::number(number));
	});
	connect(vp_threadCtrl->get_worker(), &VideoProcessor::update_imgVis, [this](unsigned char* ptr_imgData, int width, int height) {
		imshow_cvMat_onQLabel(cv::Mat(height, width, CV_8UC3, ptr_imgData), m_ui.lbl_imgVis);
	});
	connect(vp_threadCtrl->get_worker(), &VideoProcessor::update_videoInfo, [this](int width_frame, int height_frame, size_t nframesApprox, QString fpath_vid) {
		m_ui.lbl_frameSize->setText(QString("%1 x %2").arg(width_frame).arg(height_frame));
		m_ui.lbl_fpathVid->setText(fpath_vid);
		m_ui.lbl_approxNframes->setText(QString::number(nframesApprox));
	});
	connect(vp_threadCtrl->get_worker(), &VideoProcessor::printg, this, [this](QString str) {
		m_ui.target_printg->appendPlainText(str);
	}, Qt::BlockingQueuedConnection);

	//// =================== GUI to worker process ===============================
	connect(m_ui.btn_pause, &QPushButton::clicked, vp_threadCtrl->get_worker(), &VideoProcessor::pause_video);
	connect(m_ui.btn_resume, &QPushButton::clicked, vp_threadCtrl->get_worker(), &VideoProcessor::resume_video);
	
}
