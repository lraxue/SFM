//****************************************
// Created by FeiXue
//
// feixue@pku.edu.cn
//
// 2016-9-21
//****************************************

#ifndef MONOVIEW_H__
#define MONOVIEW_H__

#include "opencv2/highgui/highgui.hpp"
#include "opencv2/imgproc/imgproc.hpp"
#include "opencv2/legacy/legacy.hpp"

class MonoView
{
public:
	MonoView(cv::Mat&, cv::Mat& _K = cv::Mat());
	~MonoView();

public:
	void rectify();

private:
	cv::Mat img;
	cv::Mat K;
	cv::Mat rectifiedImg;
	std::vector<cv::KeyPoint> keyPoints;
	cv::Mat descriptor;
};

#endif