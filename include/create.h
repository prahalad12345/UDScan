#ifndef _CREATE_H
#define _CREATE_H

#include "ocrinput.h"
#include "ocrdata.h"

class OCRcreate{
    public:
        virtual OCRInput* creation(string path)=0;
};

#endif