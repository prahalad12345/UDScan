#ifndef _EDGEDETECTOR_H
#define _EDGEDETECTOR_H

#include "ocrhandler.h"

/*
    the header file for edgedetection
*/
class Edgedetector : public OCRHandler{
    public:
        void transform(OCRData* ocrdata) override;
};

#endif