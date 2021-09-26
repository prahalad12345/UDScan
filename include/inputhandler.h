#ifndef _INPUTHANDLER_H
#define _INPUTHANDLER_H

#include "ocrinput.h"
#include "ocrdata.h"

/*
    header file that creates an OCRInput data based on the string path
    converts OCRInput type to OCRData type
*/
class OCRinputhandler{
    public:
        OCRInput* factory(string path);
        OCRData* transform(OCRInput* inputdata);
};

#endif