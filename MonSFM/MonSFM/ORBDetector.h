//****************************************
// Created by FeiXue
//
// feixue@pku.edu.cn
//
// 2016-9-21
//****************************************

#ifndef ORBDETECTOR_H__
#define ORBDETECTOR_H__

#include "Detector.h"

class ORBDetector : public Detector
{
public:
	ORBDetector(cv::Mat&, int _thre = 20);
	~ORBDetector();

public:
	void detect();

private:
	int thre;
};

#endif