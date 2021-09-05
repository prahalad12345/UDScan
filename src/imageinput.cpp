#include "imageinput.h"

OCRInput* Imageinput::creation(string path){
    OCRInput* input = new OCRInput();
    Mat img=imread(path);
    input->images.push_back(img);
    return input;
}