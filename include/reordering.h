#include <string>
#include<tesseract/baseapi.h>
#include <opencv2/opencv.hpp>
#include <opencv2/core.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgcodecs.hpp>
#include <iostream>
#include <vector>

using namespace cv;
using namespace std;

class Reordering{
   public:
      void orderPoints(vector<Point> inputs, vector<Point> &ordered);
 };