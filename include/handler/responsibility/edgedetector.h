#ifndef _EDGEDETECTOR_H
#define _EDGEDETECTOR_H

#include "ocrhandler.h"

class Edgedetector : public OCRHandler{
    public:
        void transform(OCRData* ocrdata) override;
};

#endif