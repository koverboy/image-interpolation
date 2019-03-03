#include "stdafx.h"
#include "opencv2/imgproc.hpp"
#include "opencv2/highgui.hpp"
#include <opencv/cv.h>

using namespace std;
using namespace cv;

#pragma once

class OriginalPicture
{
public:
	IplImage *image = NULL;
	IplImage *dst = NULL;
	IplImage *dst2 = NULL;
public:
	OriginalPicture(CString str) {
		image = cvLoadImage(CW2A(str), 1);
		dst = cvCreateImage(cvGetSize(image), IPL_DEPTH_16S, image->nChannels);
		dst2 = cvCreateImage(cvGetSize(image), image->depth, image->nChannels);
	}
	~OriginalPicture() {
		cvReleaseImage(&image);
		cvReleaseImage(&dst);
		cvReleaseImage(&dst2);
		cvDestroyAllWindows();
	}
	
	void dolap() {
		assert(image != 0);
		cvLaplace(image, dst);
		cvNamedWindow("cvLaplace", CV_WINDOW_AUTOSIZE);
		cvConvertScale(dst, dst2);
		cvShowImage("cvLaplace", dst2);
	}
};

