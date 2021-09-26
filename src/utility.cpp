#include "utility.h"
/*
  consist of all the utility function necessary 
  1.compare x coordinates
  2.compare y coordinate
  3.compare distance between the coordinate
  4.finding the distance between two points
  5.comparing contours
  6.extract filenames in a specific folder
*/

bool Utility::Comparexcords(Point p1,Point p2){
    return (p1.x < p2.x);
}

bool Utility::Compareycords(Point p1,Point p2){
    return (p1.y < p2.y);
}

bool Utility::Comparedistcords(pair<Point, Point> p1,pair<Point, Point> p2){
    return (norm(p1.first - p1.second) < norm(p2.first - p2.second));
}

double Utility::_distance(Point p1,Point p2){
    return sqrt(((p1.x - p2.x) * (p1.x - p2.x)) +((p1.y - p2.y) * (p1.y - p2.y)));
}


bool Utility::comparecontours( std::vector<cv::Point> contour1, std::vector<cv::Point> contour2 ) {
    /*comparing the two contours used in sorting contour*/
    double i = fabs( contourArea(cv::Mat(contour1)) );
    double j = fabs( contourArea(cv::Mat(contour2)) );
    return ( i > j );
} 

void Utility::getFileNames(string dirName, vector<string> &imageFnames)
{
  DIR *dir;
  struct dirent *ent;
  int count = 0;

  //image extensions to be found
  string imgExt = "png";

  vector<string> files;

  if ((dir = opendir (dirName.c_str())) != NULL)
  {
    while ((ent = readdir (dir)) != NULL)
    {
      // Avoiding dummy names which are read by default
      if(strcmp(ent->d_name,".") == 0 | strcmp(ent->d_name, "..") == 0)
      {
        continue;
      }
      string temp_name = ent->d_name;
      files.push_back(temp_name);
    }

    // Sort file names
    std::sort(files.begin(),files.end());
    for(int it=0;it<(int)files.size();it++)
    {
      string path = dirName;
      string fname = files[it];

      path.append(fname);
      imageFnames.push_back(path);
      cout<<path<<endl;
 
    }
    closedir (dir);
  }
}
