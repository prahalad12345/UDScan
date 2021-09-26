#ifndef _IMAGEINPUT_H
#define _IMAGEINPUT_H

#include "create.h"

/*
    header file deals with creation of image input file
*/
class  Imageinput: public OCRcreate{
    public:
        OCRInput* creation(string path) override;
};

#endif
