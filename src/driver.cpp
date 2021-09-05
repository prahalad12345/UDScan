
#include "ocrhandler.h"
#include "ocrtransform.h"
#include "inputhandler.h"

int main(){
    ///home/prahalad/program/CV1/lesson7/program/documentscanner/0.jpg
    string path = "/home/prahalad/Downloads/20210905_175306.jpg";
    OCRinputhandler* driving=new OCRinputhandler();
    OCRInput* input=driving->factory(path);
    OCRTransform* transformer=new OCRTransform();
    transformer->init();
    OCROutput* output=transformer->transform(input);
    imshow("ocrresult",output->resultimage[0]);
    //cout<<output->resultstring[0]<<endl;
    cout<<output->resultimage.size()<<endl;
    /*
    Mat imgray,grayy;
    Mat imclone=im.clone();
    Contourdetector cont;
    Edgedetector edge;
    double mw,mh;
    cvtColor(im,imgray,COLOR_BGR2GRAY);
    grayy=imgray.clone();
    Mat edges=edge.edgedetector(&im,&imgray);
    vector<Point2f> newapprox,dst;
    imshow("imgray",imgray);
    imshow("edges",edges);
    Mat clone=im.clone();
    cont.contourplotting(&im,&clone,edges,dst,newapprox,&mw,&mh);
    imshow("im",clone);
    Mat result;
    cout<<newapprox[0]<<endl;
    Orientation orient;
    orient.imagepotraitview(&result,im,dst,newapprox,mw,mh);
    cout<<result.size()<<endl;
    resize(result,result,Size(500,500*result.size().height/result.size().width));
    imshow("result",result);
    OCRreader ocr;
    string indoc=ocr.ocrtext(result);
    cout<<indoc<<endl;
    */
    waitKey(0);
    destroyAllWindows();
    return 0;
}