#include "VideoProcessor.h"
#include "QtCore/qcoreapplication.h"
#include "opencv2/objdetect.hpp"
#include "opencv2/highgui.hpp"
#include "opencv2/videoio.hpp"
#include "opencv2/imgproc.hpp"
#include <iostream>

VideoProcessor::VideoProcessor()
{
	m_video_paused = false;
}

VideoProcessor::~VideoProcessor()
{
}

void VideoProcessor::pause_video()
{
	m_video_paused = true;
}

void VideoProcessor::resume_video()
{
	m_video_paused = false;
}

void VideoProcessor::process(QString fpath_vid)
{
	cv::CascadeClassifier face_cascade;
	face_cascade.load("C:/CPP_Libs/OpenCV/opencv-4.1.0-vc14_vc15/etc/haarcascades/haarcascade_frontalface_alt2.xml");
	cv::VideoCapture capture(fpath_vid.toStdString());

	size_t nframesApprox = capture.get(cv::CAP_PROP_FRAME_COUNT);
	int width_frame = capture.get(cv::CAP_PROP_FRAME_WIDTH);
	int height_frame = capture.get(cv::CAP_PROP_FRAME_HEIGHT);

	emit update_videoInfo(
		width_frame,
		height_frame,
		nframesApprox,
		fpath_vid);
	
	size_t frame_counter = 0;
	while (true)
	{
		if (m_video_paused) {
			QThread::msleep(30);
			QCoreApplication::processEvents();
			continue;
		}

		emit printg("----------------------------");
		emit printg(QString("Processing frame %1").arg(frame_counter));

		cv::Mat frame;
		capture >> frame;
		if (frame.empty()) break;
		
		frame_counter++;
		emit update_frameNumber(frame_counter);
		cv::Mat frame_gray;
		cv::cvtColor(frame, frame_gray, cv::COLOR_BGR2GRAY);
		cv::equalizeHist(frame_gray, frame_gray);
		std::vector<cv::Rect> faces;
		face_cascade.detectMultiScale(frame_gray, faces);
		emit printg(QString("# of faces = %1").arg(faces.size()));
		for (size_t i = 0; i < faces.size(); i++)
		{
			cv::Point center(faces[i].x + faces[i].width / 2, faces[i].y + faces[i].height / 2);
			cv::ellipse(frame, center, cv::Size(faces[i].width / 2, faces[i].height / 2), 0, 0, 360, cv::Scalar(255, 0, 255), 4);
			cv::Mat faceROI = frame_gray(faces[i]);
		}
		emit update_imgVis(frame.ptr<unsigned char>(), width_frame, height_frame);
		QCoreApplication::processEvents();
	}
}

void VideoProcessorNone::process(QString fpath_vid) {

	cv::VideoCapture capture(fpath_vid.toStdString());

	size_t nframesApprox = capture.get(cv::CAP_PROP_FRAME_COUNT);
	int width_frame = capture.get(cv::CAP_PROP_FRAME_WIDTH);
	int height_frame = capture.get(cv::CAP_PROP_FRAME_HEIGHT);

	emit update_videoInfo(
		width_frame,
		height_frame,
		nframesApprox,
		fpath_vid);

	size_t frame_counter = 0;
	while (true)
	{
		if (m_video_paused) {
			QThread::msleep(30);
			QCoreApplication::processEvents();
			continue;
		}

		emit printg("----------------------------");
		emit printg(QString("Processing frame %1").arg(frame_counter));

		cv::Mat frame;
		capture >> frame;
		if (frame.empty()) break;

		frame_counter++;
		emit update_frameNumber(frame_counter);
		emit update_imgVis(frame.ptr<unsigned char>(), width_frame, height_frame);
		QCoreApplication::processEvents();
	}
}


VideoProcessor_threadController::VideoProcessor_threadController(VideoProcessor* vp, QString fpath_vid)
{
	m_vp = vp;
	m_vp->moveToThread(&m_workerThread);
	connect(&m_workerThread, &QThread::finished, m_vp, &QObject::deleteLater);
	connect(this, &VideoProcessor_threadController::operate, m_vp, &VideoProcessor::process);
	m_workerThread.start();
	emit operate(fpath_vid);
}

VideoProcessor_threadController::~VideoProcessor_threadController()
{
	m_workerThread.quit();
	m_workerThread.wait();
}

VideoProcessor * VideoProcessor_threadController::get_worker()
{
	return m_vp;
}
