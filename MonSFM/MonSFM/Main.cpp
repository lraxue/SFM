//****************************************
// Creted by Fei Xue
//
// feixue@pku.edu.cn
//
// 2016-9-21
//****************************************

#include <opencv2/core/core.hpp>
#include <opencv2/features2d/features2d.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/legacy/legacy.hpp>

#include <iostream>
#include <vector>

using namespace cv;
using namespace std;

int main()
{
	Mat m1 = imread("e://lena.jpg");
	Mat m2 = imread("e://lena.jpg");

	if (m1.empty() || m2.empty()) {
		cout << "open file error." << endl;
	}

	ORB orb;
	vector<KeyPoint> keyPoints1, keyPoints2;
	Mat descriptor1, descriptor2;

	orb(m1, Mat(), keyPoints1, descriptor1);
	orb(m2, Mat(), keyPoints2, descriptor2);

	BruteForceMatcher<HammingLUT> matcher;
	vector<DMatch> matches;

	matcher.match(descriptor1, descriptor2, matches);

	double max_dist = 0;
	double min_dist = 100000;

	for (int i = 0; i < descriptor1.rows; ++i)
	{
		double dist = matches[i].distance;
		if (dist < min_dist) min_dist = dist;
		if (dist > max_dist) max_dist = dist;
	}

	cout << "max distance: " << max_dist << endl;
	cout << "min distance: " << min_dist << endl;

	vector<DMatch> goodMatches;
	for (int i = 0; i < descriptor1.rows; ++i)
	{
		if (matches[i].distance < 0.6 * max_dist)
			goodMatches.push_back(matches[i]);
	}

	Mat mMatches;
	drawMatches(m1, keyPoints1, m2, keyPoints2, goodMatches, mMatches, Scalar::all(-1),
		DrawMatchesFlags::DRAW_RICH_KEYPOINTS);

	imshow("matches", mMatches);
	waitKey(0);

	return 0;


}

