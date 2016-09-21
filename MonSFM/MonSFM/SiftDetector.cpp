//****************************************
// Created by FeiXue
//
// feixue@pku.edu.cn
//
// 2016-9-21
//****************************************

#include "SiftDetector.h"
#include "opencv2/nonfree/nonfree.hpp"

SIFTDetector::SIFTDetector(cv::Mat& _img, int _thre /* = 400 */) : Detector(_img)
{
	if (_thre > 0)
		thre = _thre;
	else thre = 400;
}

SIFTDetector::~SIFTDetector()
{

}

void SIFTDetector::detect()
{
	cv::SiftFeatureDetector detector(thre);
	detector.detect(img, keypoints);

	cv::SiftDescriptorExtractor extractor;
	extractor.compute(img, keypoints, descriptor);
}