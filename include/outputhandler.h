#ifndef _OCROUTPUTHANDLER_H
#define _OCROUTPUTHANDLER_H
#include "ocroutput.h"
#include "ocrdata.h"

/*
    OCRDdata -> OCROutput datatype
*/
class OCROutputhandler{
    public:
        OCROutput* transform(OCRData* ocrdata);
};

#endif