
#include "ocrtransform.h"
#include "edgedetector.h"
#include "orientation.h"
#include "ocrreader.h"
#include "contours.h"
#include "ocrinput.h"
#include "outputhandler.h"
#include "inputhandler.h"
//#pragma once


void OCRTransform::init(){
    edgedetection=new Edgedetector();
    OCRHandler* contourdetection=new Contourdetector();
    edgedetection->setnexthandler(contourdetection);
    OCRHandler* orientation=new Orientation();
    contourdetection->setnexthandler(orientation);
    OCRHandler* ocrreader=new OCRreader();
    orientation->setnexthandler(ocrreader);
    ocrreader->setnexthandler(nullptr);
}
OCROutput* OCRTransform::transform(OCRInput *input){
    OCRinputhandler* chandler=new OCRinputhandler();
    OCRData *ocrdata=chandler->transform(input);

    OCRHandler* handler=edgedetection;
    while(handler!=nullptr){
        handler->transform(ocrdata);
        handler=handler->getNextHandler();
    }
    OCROutputhandler *handlerr=new OCROutputhandler();
    return handlerr->transform(ocrdata);

}

void OCRTransform::cleanup(){
    
}
