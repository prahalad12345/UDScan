#include "orientation.h"

/*
    this function obtains the initial and final positions of the points in the image
    using warp perspective to convert the images view to obtain only the image and remove the external background
*/
void Orientation::transform(OCRData *ocrdata){

    for(int i=0;i<(int)(ocrdata->images.size());i++){
        Mat modification = findHomography(ocrdata->newapprox[i], ocrdata->dst[i]);
        warpPerspective(ocrdata->resultimage[i], ocrdata->resultimage[i], modification, Size(ocrdata->x[i], ocrdata->y[i]));
    }
}
