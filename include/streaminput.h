#ifndef _STREAMINPUT_H
#define _STREAMINPUT_H

#include "create.h"


class  Streaminput: public OCRcreate{
    public:
        OCRInput* creation(string path) override;
};

#endif