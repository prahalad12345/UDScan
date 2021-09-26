#include "ocrhandler.h"

/*
   setnexthandler adds another pointer next to the present pointer
   getnexthandler extracts the pointer after the present pointer
*/
void OCRHandler::setnexthandler(OCRHandler *nexthandler){
    this->nexthandler = nexthandler; 
}

OCRHandler *OCRHandler::getNextHandler(){
    return this->nexthandler;
}