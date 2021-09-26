#include "reordering.h"
#include "utility.h"
/*
	reordering arranges points based on thier position in a specific order so that points dont get mismatched
*/
void Reordering::orderPoints(vector<Point> inpts, vector<Point> &ordered)
{

	sort(inpts.begin(), inpts.end(), Utility::Comparexcords);
	vector<Point> lm(inpts.begin(), inpts.begin()+2);
	vector<Point> rm(inpts.end()-2, inpts.end());

	sort(lm.begin(), lm.end(), Utility::Compareycords);
	Point tl(lm[0]);
	Point bl(lm[1]);
	vector<pair<Point, Point> > tmp;
	for(size_t i = 0; i< rm.size(); i++){
        tmp.push_back(make_pair(tl, rm[i]));
	}

	sort(tmp.begin(), tmp.end(), Utility::Comparedistcords);
	Point tr(tmp[0].second);
	Point br(tmp[1].second);

	ordered.push_back(tl);
	ordered.push_back(tr);
	ordered.push_back(br);
	ordered.push_back(bl);
}

