#include "VideoProcessor.h"
#include "WindowVideoProcessor.h"
#include <QtCore/qdebug.h>

int main(int argc, char** argv)
{    
	QApplication qapp(argc, argv);
	
	auto vp = new VideoProcessor();
	//auto vp = new VideoProcessorNone();
	VideoProcessor_threadController kq_threadCtrl(vp, "F:/Datasets/someVid.avi");
	WindowVideoProcessor win(&kq_threadCtrl);
	win.show();

	qapp.exec();
	qDebug() << "end of program";
	std::cin.get();
}


