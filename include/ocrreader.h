#ifndef _OCRREADER_H
#define _OCRREADER_H
#include "ocrhandler.h"

class OCRreader : public OCRHandler{
    public:
        void transform(OCRData *ocrdata) override;
};
#endif