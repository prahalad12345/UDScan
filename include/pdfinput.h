#ifndef _PDFINPUT_H
#define _PDFINPUT_H

#include "create.h"

class  Pdfinput: public OCRcreate{
    public:
        OCRInput* creation(string path) override;
};

#endif
