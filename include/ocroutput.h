#ifndef _OCROUTPUT_H
#define _OCROUTPUT_H
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

class OCROutput{
    public:
        vector<Mat> resultimage;
        vector<string> resultstring;
};

#endif