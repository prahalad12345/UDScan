#include "imageinput.h"

/*
    the creation function is called when the input file is an image
*/
OCRInput* Imageinput::creation(string path){
    OCRInput* input = new OCRInput();
    Mat img=imread(path);
    input->images.push_back(img);
    return input;
}