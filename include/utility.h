#include <string>
#include<tesseract/baseapi.h>
#include <opencv2/opencv.hpp>
#include <opencv2/core.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgcodecs.hpp>
#include <iostream>
#include<vector>
extern "C"{
        #include <dirent.h>
}
using namespace cv;
using namespace std;

class Utility{
     public:
        static bool Comparexcords(Point p1,Point p2);
        static bool Compareycords(Point p1,Point p2);
        static bool Comparedistcords(pair<Point, Point> p1,pair<Point, Point> p2);
        static double _distance(Point p1,Point p2);
        static bool comparecontours(std::vector<cv::Point> contour1, std::vector<cv::Point> contour2);
        static void getFileNames(string dirName, vector<string> &imageFnames);
};