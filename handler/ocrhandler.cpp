#include "OCRHandler"

void OCRHandler::setnexthandler(OCRHandler *nexthandler){
    this->nexthandler = nexthandler; 
}

OCRHandler *OCRHandler::getNextHandler(){
    return this->nexthandler;
}