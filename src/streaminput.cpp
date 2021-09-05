#include "streaminput.h"
#include "utility.h"
#include <string>


OCRInput* Streaminput::creation(string path){
    OCRInput* input = new OCRInput();

    string scython="python3 ./src/imagebreak.py ";
    scython.append(path);

    int sys1=system(scython.c_str()); 
    if(sys1==-1){
        cout<<"failure"<<endl;
    } 
    vector<string> imagename;
    std::string pathh = "./page/";
    //cout<<imagename.size()<<endl;
    Utility::getFileNames(pathh,imagename);
    for(int i=0;i<(int)imagename.size();i++){
        Mat image=imread(imagename[i]);
        input->images.push_back(image);
        //cout<<image.size()<<endl;
    }
    //cout<<input->images.size();
    string newpath="rm "+pathh+"*";
    int sys2=system(newpath.c_str());
    if(sys2==-1){
        cout<<"failure"<<endl;
    } 
    return input;
}