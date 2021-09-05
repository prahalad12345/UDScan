#include "outputhandler.h"

OCROutput* OCROutputhandler::transform(OCRData* ocrdata){
    OCROutput* ocroutput=new OCROutput();
    ocroutput->resultimage=ocrdata->resultimage;
    ocroutput->resultstring=ocrdata->result;
    return ocroutput;
}