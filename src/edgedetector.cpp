#include "edgedetector.h"


void Edgedetector::transform(OCRData* ocrdata){
    /*using canny edge detector after gaussian bluring the image
    blurring is used avoid few edge detections and removing the unneccesary*/
    for(int i=0;i<(int)(ocrdata->images.size());i++){
        ocrdata->resultimage.push_back(ocrdata->images[i].clone());
        ocrdata->imclone.push_back(ocrdata->images[i].clone());
        Mat gray;
        cvtColor(ocrdata->images[i],gray,COLOR_BGR2GRAY);
        GaussianBlur(gray,gray,Size(5,5),0,0);
        Mat cannyimage;
        Canny(gray,cannyimage,30,200);
        ocrdata->canny.push_back(cannyimage);
    }
}
