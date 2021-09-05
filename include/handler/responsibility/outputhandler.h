#ifndef _OCROUTPUTHANDLER_H
#define _OCROUTPUTHANDLER_H
#include "ocroutput.h"
#include "ocrdata.h"

class OCROutputhandler{
    public:
        OCROutput* transform(OCRData* ocrdata);
};

#endif