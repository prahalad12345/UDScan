
#include "ocrreader.h"
/*
    this function uses OCR Tesseract API to extract text from the image
    
*/

void OCRreader::transform(OCRData *ocrdata){
    for(int i=0;i<(int)(ocrdata->images.size());i++){
        string resultantstring="";
        tesseract::TessBaseAPI *ocr= new tesseract::TessBaseAPI();
        ocr->Init(NULL,"eng",tesseract::OEM_LSTM_ONLY);
        ocr->SetPageSegMode(tesseract::PSM_AUTO);

        Mat grayimage;
        cvtColor(ocrdata->resultimage[0],grayimage,COLOR_BGR2GRAY);
        threshold(grayimage,grayimage,180,255,THRESH_BINARY);
        
        ocr->SetImage(grayimage.data,grayimage.cols,grayimage.rows,3,grayimage.step);
        resultantstring=string(ocr->GetUTF8Text());
        ocrdata->result.push_back(resultantstring);
        ocr->End();
    }
}