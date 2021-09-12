#include "inputhandler.h"
#include "create.h"
#include "imageinput.h"
#include "streaminput.h"
#include "pdfinput.h"
extern "C" {
    #include "MegaMimes.h"
}

OCRInput* OCRinputhandler::factory(string path){
    char* pathh;
    pathh=&path[0];
    string mimetype=getMegaMimeType(pathh) ;
    OCRInput* input=new OCRInput();
    OCRcreate* images; 
    cout<<mimetype<<endl;
    if(mimetype=="image/jpeg" || mimetype=="image/png"){
        images=new Imageinput();
        input=images->creation(path);
    }
    else if(mimetype=="video/msvideo" || mimetype=="video/mp4"){
        images=new Streaminput();
        input=images->creation(path);
    }
    else if(mimetype=="application/pdf"){
        images=new Pdfinput();
        input=images->creation(path);
    }
    return input;
}

OCRData* OCRinputhandler::transform(OCRInput* inputdata){
    OCRData* ocrdata=new OCRData();
    ocrdata->images=inputdata->images;
    return ocrdata;
}

