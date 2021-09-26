#ifndef _PDFINPUT_H
#define _PDFINPUT_H

#include "create.h"
/*
    header file deals with creation of pdf input file
*/

class  Pdfinput: public OCRcreate{
    public:
        OCRInput* creation(string path) override;
};

#endif
