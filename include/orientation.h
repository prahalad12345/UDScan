#ifndef _ORIENTATION_H
#define _ORIENTATION_H
#include "ocrhandler.h"

/*
    deals with orientation of the image removes unnecessary background from the image
*/
 class Orientation : public OCRHandler{
    public:
        void transform(OCRData* ocrdata) override;
};
#endif