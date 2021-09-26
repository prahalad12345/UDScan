#ifndef _CREATE_H
#define _CREATE_H

#include "ocrinput.h"
#include "ocrdata.h"
/*
    an abstract class which consist of fucntion creation which is rewritten in pdfinput,imageinput,streaminput
*/
class OCRcreate{
    public:
        virtual OCRInput* creation(string path)=0;
};

#endif