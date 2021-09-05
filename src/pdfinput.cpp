#include "pdfinput.h"
#include "utility.h"
#include <string>

OCRInput* Pdfinput::creation(string path){
    OCRInput* input = new OCRInput();
    //string patth="./example.pdf";
    string scython="python3 ./src/pdf2img.py ";
    scython.append(path);
    int sys1=system(scython.c_str()); 
    if(sys1==-1){
        cout<<"failure"<<endl;
    } 
    vector<string> imagename;
    std::string pathh = "./page/";
    int count=0;
    Utility::getFileNames(pathh,imagename);
    for(int i=0;i<(int)imagename.size();i++){
        Mat image=imread(imagename[i]);
        input->images.push_back(image);
    }
    //cout<<count<<endl;
    string newpath="rm "+pathh+"*";
    int sys2=system(newpath.c_str());
    if(sys2==-1){
        cout<<"failure"<<endl;
    } 
    return input;
}