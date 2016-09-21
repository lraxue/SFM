//****************************************
// Created by FeiXue
//
// feixue@pku.edu.cn
//
// 2016-9-21
//****************************************

#include "Detector.h"

Detector::Detector(cv::Mat& _img)
{
	if (!_img.empty()){
		img = _img.clone();
	}
	else return;
}

Detector::~Detector()
{

}

cv::Mat Detector::getDescriptor()
{
	return descriptor;
}

std::vector<cv::KeyPoint> Detector::getKeyPoint()
{
	return keypoints;
}

