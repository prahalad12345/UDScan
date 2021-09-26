#ifndef _OCRHANDLER_H
#define _OCRHANDLER_H
#include "ocrdata.h"

/*
    header file deals with the pointer to the linked list containing the functions to be implemented
*/

class OCRHandler{
    protected:
        OCRHandler *nexthandler;
    public:
        void setnexthandler(OCRHandler* nexthandler);
        OCRHandler* getNextHandler();
        virtual void transform(OCRData* ocrdata)=0;
};

#endif