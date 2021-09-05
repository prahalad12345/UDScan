#include "orientation.h"
/*
int main(){
	Mat img=imread("scanned-form.jpg");
	imshow("image",img);
	waitKey(0);
}*/

void Orientation::transform(OCRData *ocrdata){
    /*
        after obtaining the document coordinates and the final coordinate of the document using warp perspective to convert the images view to obtain only the image and remove the external background
    */
    for(int i=0;i<(int)(ocrdata->images.size());i++){
        Mat modification = findHomography(ocrdata->newapprox[i], ocrdata->dst[i]);
        warpPerspective(ocrdata->resultimage[i], ocrdata->resultimage[i], modification, Size(ocrdata->x[i], ocrdata->y[i]));
    }
}