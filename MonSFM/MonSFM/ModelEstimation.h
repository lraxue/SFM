//****************************************
// Created by FeiXue
//
// feixue@pku.edu.cn
//
// 2016-9-24
//****************************************

#ifndef MODELESTIMATION_H__
#define MODELESTIMATION_H__

#include "opencv2/highgui/highgui.hpp"

class ModelEstimation
{
public:
	ModelEstimation();
	~ModelEstimation();

public:
	virtual void estimate() = 0;
	virtual void errorEstimation() = 0;


};
#endif