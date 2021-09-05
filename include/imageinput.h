#ifndef _IMAGEINPUT_H
#define _IMAGEINPUT_H

#include "create.h"

class  Imageinput: public OCRcreate{
    public:
        OCRInput* creation(string path) override;
};
/*
 g++ -c -g sample.cpp -o sample.o 
^[[Aprahalad@prahalad-desktop:~/devplay/MegaMimes/src$ g++ -o sample sample.o -L . -lmegamimes_1_0_la-MegaMimes
prahalad@prahalad-desktop:~/devplay/MegaMimes/src$ ./sample
*/
#endif