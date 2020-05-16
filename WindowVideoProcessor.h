#pragma once

#include "ui_WindowVideoProcessor.h"
#include "VideoProcessor.h"

class WindowVideoProcessor : public QMainWindow {
	Q_OBJECT
private:
	Ui_WindowVideoProcessor m_ui;
public:
	WindowVideoProcessor(VideoProcessor_threadController * vp_threadCtrl, QWidget* parent = nullptr);
};