#ifndef _OCRINPUT_H
#define _OCRINPUT_H
#include <string>
#include <tesseract/baseapi.h>
#include <opencv2/opencv.hpp>
#include <opencv2/core.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgcodecs.hpp>
#include <iostream>
#include<vector>
#include <math.h>

using namespace std;
using namespace cv;

class OCRInput{
    public:
        vector<Mat> images;
};

#endif