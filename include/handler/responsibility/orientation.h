#ifndef _ORIENTATION_H
#define _ORIENTATION_H
#include "ocrhandler.h"

 class Orientation : public OCRHandler{
    public:
        void transform(OCRData* ocrdata) override;
};
#endif