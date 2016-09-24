//****************************************
// Created by FeiXue
//
// feixue@pku.edu.cn
//
// 2016-9-24
//****************************************

#ifndef STEREOVIEW_H__
#define STEREOVIEW_H__

#include "MonoView.h"

class StereoView : public MonoView
{
public:
	StereoView(cv::Mat&, cv::Mat& _K = cv::Mat());
	~StereoView();

public:
	void findFundamentalMat();
	void triangulate();

	cv::Mat getR() const;
	cv::Mat getT() const;
	cv::Mat getF() const;

private:
	std::vector<cv::KeyPoint> matchedKeyPoints;

private:
	cv::Mat F;
	cv::Mat R;
	cv::Mat T;

};
#endif