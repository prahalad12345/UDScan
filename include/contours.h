#ifndef _CONTOURS_H
#define _CONTOURS_H
#include "ocrhandler.h"

/*
   header file for the contour detection
*/
class Contourdetector : public OCRHandler{
   public:
      void transform(OCRData* ocrdata) override;
};

#endif