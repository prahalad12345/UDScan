#ifndef _INPUTHANDLER_H
#define _INPUTHANDLER_H

#include "ocrinput.h"
#include "ocrdata.h"

class OCRinputhandler{
    public:
        OCRInput* factory(string path);
        OCRData* transform(OCRInput* inputdata);
};

#endif