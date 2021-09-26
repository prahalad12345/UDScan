#ifndef _STREAMINPUT_H
#define _STREAMINPUT_H

#include "create.h"
/*
    header file deals with creation of stream input file
*/

class  Streaminput: public OCRcreate{
    public:
        OCRInput* creation(string path) override;
};

#endif