//****************************************
// Created by FeiXue @All copyright reserved
//
// feixue@pku.edu.cn
//
// 2016-9-21
//****************************************

#ifndef DETECTOR_H__
#define DETECTOR_H__

#include "opencv2/highgui/highgui.hpp"
#include "opencv2/legacy/legacy.hpp"

class Detector
{
public:
	Detector(cv::Mat&);
	~Detector();

public:
	virtual cv::Mat getDescriptor();
	virtual std::vector<cv::KeyPoint> getKeyPoint();

public:
	virtual void detect() = 0;

protected:
	cv::Mat img;
	std::vector<cv::KeyPoint> keypoints;
	cv::Mat descriptor;
};
#endif