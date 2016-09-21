//****************************************
// Created by FeiXue
//
// feixue@pku.edu.cn
//
// 2016-9-21
//****************************************


#ifndef SIFT_DETECTOR_H__
#define SIFT_DETECTOR_H__

#include "Detector.h"
#include "opencv2/features2d/features2d.hpp"

class SIFTDetector : public Detector
{
public:
	SIFTDetector(cv::Mat&, int _thre = 400);
	~SIFTDetector();

public:
	void detect();

private:
	int thre;
};


#endif