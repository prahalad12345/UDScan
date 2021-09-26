
#ifndef _OCRTRANSFORM_H
#define _OCRTRANSFORM_H
#include "ocrhandler.h"
#include "ocroutput.h"
#include "ocrinput.h"
/*
    linked list created for functions
*/
class OCRTransform{
    public:
        OCRHandler* edgedetection;
        
        void init();
        OCROutput* transform(OCRInput* data);
        void cleanup();
};

#endif