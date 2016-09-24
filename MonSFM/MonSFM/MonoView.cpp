//****************************************
// Created by FeiXue
//
// feixue@pku.edu.cn
//
// 2016-9-24
//****************************************

#include "MonoView.h"
#include <iostream>

using namespace cv;
using namespace std;

MonoView::MonoView(cv::Mat& _img, cv::Mat& _K /* = cv::Mat() */)
{
	if (!_img.empty()) img = _img.clone();
	else {
		cout << "The image is empty in construction of MonoView.";
	}

	if (!_K.empty()) K = _K.empty();
	else {
		K = Mat::eye(Size(4, 4), CV_32FC1);     // default value is E
	}

}

MonoView::~MonoView()
{
	//TODO...

}

void MonoView::rectify()
{

}

