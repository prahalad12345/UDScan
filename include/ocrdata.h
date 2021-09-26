#ifndef OCRDATA_H
#define OCRDATA_H
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

/*
    just another data type
*/
class OCRData{
    public:
        vector<Mat> images;
        vector<Mat> imclone;
        vector<Mat> canny;
        vector< vector<Point2f> > dst;
        vector< vector<Point2f> > newapprox;
        vector<double> x;
        vector<double> y;
        vector<string> result;
        vector<Mat> resultimage;
};
#endif