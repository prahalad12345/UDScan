#ifndef _IMAGEINPUT_H
#define _IMAGEINPUT_H

#include "create.h"

class  Imageinput: public OCRcreate{
    public:
        OCRInput* creation(string path) override;
};

#endif
