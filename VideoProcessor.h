#pragma once
#include "QtCore/qobject.h"
#include <QtCore/qthread.h>

class VideoProcessor :
	public QObject
{
	Q_OBJECT
protected:
	bool m_video_paused;
public:
	VideoProcessor();
	~VideoProcessor();

signals:
	void update_videoInfo(int width_frame, int height_frame, size_t nframesApprox, QString fpath_vid);
	void update_frameNumber(size_t num);
	void update_imgVis(unsigned char* ptr_imgData, int width, int height);
	void printg(QString str);
	
public slots:
	virtual void process(QString fpath_vid);
	void pause_video();
	void resume_video();

};

class VideoProcessorNone :
	public VideoProcessor
{
	Q_OBJECT

public slots:
	void process(QString fpath_vid) override;
};


class VideoProcessor_threadController :
	public QObject
{
	Q_OBJECT
private:
		QThread m_workerThread;
		VideoProcessor* m_vp;
public:
	VideoProcessor_threadController(VideoProcessor* vp, QString fpath_vid);
	~VideoProcessor_threadController();
	VideoProcessor* get_worker();
signals:
	void operate(QString fpath_vid);

};