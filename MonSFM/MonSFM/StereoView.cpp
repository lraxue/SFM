//****************************************
// Created by FeiXue
//
// feixue@pku.edu.cn
//
// 2016-9-24
//****************************************

#include "StereoView.h"

StereoView::StereoView(cv::Mat& _img, cv::Mat& _K /* = cv::Mat() */) :MonoView(_img, _K)
{

}

StereoView::~StereoView()
{

}

cv::Mat StereoView::getR() const
{
	return R;
}

cv::Mat StereoView::getT() const
{
	return T;
}

cv::Mat StereoView::getF() const
{
	return F;
}

void StereoView::findFundamentalMat()
{

}

void StereoView::triangulate()
{

}
