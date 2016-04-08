#include<iostream>
#include"stonewt.h"

stonewt::stonewt()
{
	stone = 0;
	pounds = pds_left = 0.0;
}
stonewt::stonewt(double lbs, STATE s)
{
	state = s;
	stone = int(lbs) / lbs_per_stn;
	pds_left = int(lbs) % lbs_per_stn + (lbs - int(lbs));
	pounds = lbs;
}
stonewt::stonewt(int stn,double lbs, STATE s)
{
	state = s;
	if (lbs > lbs_per_stn)
	{
		stone = stn + int(lbs) / lbs_per_stn;
		pds_left = int(lbs) % lbs_per_stn + (lbs - int(lbs));
		pounds = stone*lbs_per_stn + pds_left;
	}
	else
	{
		stone = stn;
		pds_left = lbs;
		pounds = stn*lbs_per_stn + lbs;
	}
}
stonewt::~stonewt()
{

}
stonewt stonewt::operator + (const stonewt &b) const
{
	if (state == LBS)
		return stonewt(pounds + b.pounds, LBS);
	else
		return stonewt(stone + b.stone, pds_left + b.pds_left, STN);
}
stonewt stonewt::operator - (const stonewt &b) const
{
	if (state == LBS)
		return stonewt(pounds - b.pounds);
	else
		return stonewt(stone - b.stone, pds_left - b.pds_left, STN);
}
stonewt stonewt::operator * (double n) const
{
	if (state == LBS)
		return stonewt(n*pounds, LBS);
	else
		return stonewt(stone*n, pds_left*n, STN);
}
std::ostream & operator << (std::ostream &os, const stonewt &t)
{
	if (t.state == stonewt::STN)
		os << t.stone << " stone," << t.pds_left << " pounds\n";
	else
		os << t.pounds << " pounds\n";
	return os;
}