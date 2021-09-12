
#include "ocrhandler.h"
#include "ocrtransform.h"
#include "inputhandler.h"

int main(){
    
    string path = "/home/prahalad/Downloads/20210905_175306.jpg";
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
