#include "contours.h"
#include "reordering.h"
#include "utility.h"
/*
int main(){
	Mat img=imread("scanned-form.jpg");
	imshow("image",img);
	waitKey(0);
}*/

void Contourdetector::transform(OCRData* ocrdata){
    for(int i=0;i<(int)(ocrdata->images.size());i++){    
        vector<vector<Point>> contours,finale;
        vector<Point> newappro;
        Reordering obj;
        vector<Vec4i> hierarchy;
        findContours(ocrdata->canny[i],contours,hierarchy,RETR_LIST,CHAIN_APPROX_SIMPLE);
        sort(contours.begin(),contours.end(),Utility::comparecontours);
        
        vector<Point> approx;
        for(int i=0;i<(int)contours.size();i++){
            approxPolyDP(contours[i],approx,arcLength(contours[i],true)*0.02,true);
            if(approx.size()==4){
                finale.push_back(approx);
                break;
            }
        }
        drawContours(ocrdata->imclone[i],finale,-1,Scalar(255,255,0),2);
        circle(ocrdata->imclone[i] ,approx[0],6,Scalar(255,0,0),-1);
        circle(ocrdata->imclone[i] ,approx[1],6,Scalar(255,0,0),-1);
        circle(ocrdata->imclone[i] ,approx[2],6,Scalar(255,0,0),-1);
        circle(ocrdata->imclone[i] ,approx[3],6,Scalar(255,0,0),-1); 
        obj.orderPoints(approx,newappro);
        vector<Point2f> newapproximation;
        newapproximation.push_back(Point2f(newappro[0]));
        newapproximation.push_back(Point2f(newappro[1]));
        newapproximation.push_back(Point2f(newappro[2]));
        newapproximation.push_back(Point2f(newappro[3]));
        ocrdata->newapprox.push_back(newapproximation);
        double wa = Utility::_distance(ocrdata->newapprox[i][2], ocrdata->newapprox[i][3]);
        double wb = Utility::_distance(ocrdata->newapprox[i][1], ocrdata->newapprox[i][0]);
        double mw = max(wa, wb);

        double ha = Utility::_distance(ocrdata->newapprox[i][1], ocrdata->newapprox[i][2]);
        double hb = Utility::_distance(ocrdata->newapprox[i][0], ocrdata->newapprox[i][3]);
        double mh = max(ha, hb);
        vector<Point2f> destin;
        destin.push_back(Point2f(0,0));
        destin.push_back(Point2f(mw-1,0));
        destin.push_back(Point2f(mw-1,mh-1));
        destin.push_back(Point2f(0,mh-1));
        ocrdata->dst.push_back(destin);
        ocrdata->x.push_back(mw);
        ocrdata->y.push_back(mh);
    }
}
