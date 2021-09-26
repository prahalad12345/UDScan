#include "outputhandler.h"

/*
    converting OCRData to OCROutput 
*/
OCROutput* OCROutputhandler::transform(OCRData* ocrdata){
    OCROutput* ocroutput=new OCROutput();
    ocroutput->resultimage=ocrdata->resultimage;
    ocroutput->resultstring=ocrdata->result;
    return ocroutput;
}
