
#include "ocrhandler.h"
#include "ocrtransform.h"
#include "inputhandler.h"

/*
    driver program 
*/
int main(){
    string path = "../bill.jpg";
    OCRinputhandler* driving=new OCRinputhandler();
    OCRInput* input=driving->factory(path);
    OCRTransform* transformer=new OCRTransform();
    transformer->init();
    OCROutput* output=transformer->transform(input);
    imshow("ocrresult",output->resultimage[0]);//showing the first image obtained
    waitKey(0);
    destroyAllWindows();
    return 0;
}
