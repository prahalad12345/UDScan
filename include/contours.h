#ifndef _CONTOURS_H
#define _CONTOURS_H
#include "ocrhandler.h"

class Contourdetector : public OCRHandler{
   public:
      void transform(OCRData* ocrdata) override;
};

#endif