//****************************************
// Created by FeiXue
//
// feixue@pku.edu.cn
//
// 2016-9-21
//****************************************

#include "ORBDetector.h"

ORBDetector::ORBDetector(cv::Mat& _img, int _thre) : Detector(_img)
{
	if (_thre <= 0)
		thre = 20;
	else {
		thre = _thre;
	}
}

ORBDetector::~ORBDetector()
{

}

void ORBDetector::detect()
{
	cv::ORB orb;
	orb(img, cv::Mat(), keypoints, descriptor);   // detect orb features and extract descriptors
}

