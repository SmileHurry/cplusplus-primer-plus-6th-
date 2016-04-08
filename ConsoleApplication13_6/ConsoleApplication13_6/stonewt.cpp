#include<iostream>
#include"stonewt.h"

stonewt::stonewt(double lbs)
{
	stone = int(lbs) / Lbs_per_stn;
	pds_left = int(lbs) % Lbs_per_stn + lbs - int(lbs);
	pounds = lbs;
}
stonewt::stonewt(int stn, double lbs)
{
	if (lbs > Lbs_per_stn)
	{
		stone = stn + int(lbs) / Lbs_per_stn;
		pds_left = int(lbs) % Lbs_per_stn + (lbs - int(lbs));
		pounds = stone*Lbs_per_stn + pds_left;
	}
	else
	{
		stone = stn;
		pds_left = lbs;
		pounds = stn*Lbs_per_stn + lbs;
	}
}
stonewt::stonewt()
{
	stone = 0;
	pounds = pds_left = 0.0;
}
stonewt::~stonewt()
{

}
bool operator>(const stonewt &s1, const stonewt &s2)
{
	return (s1.pounds > s2.pounds);
}
bool operator<(const stonewt &s1, const stonewt &s2)
{
	return (s2 > s1);
}
bool operator==(const stonewt &s1, const stonewt &s2)
{
	return (s1.pounds == s2.pounds);
}
bool operator>=(const stonewt &s1, const stonewt &s2)
{
	return !(s1 < s2);
}
bool operator<=(const stonewt &s1, const stonewt &s2)
{
	return !(s1 > s2);
}
bool operator!=(const stonewt &s1, const stonewt &s2)
{
	return !(s1 == s2);
}
stonewt & stonewt::operator=(const stonewt &st)
{
	stone = st.stone;
	pds_left = st.pds_left;
	pounds = st.pounds;
	return *this;
}
std::ostream & operator<<(std::ostream & os, const stonewt &s2)
{
	os << s2.pounds << " pounds. " <<"Thus:"<< s2.stone << " stone, " << s2.pds_left << " pounds_left.\n";
	return os;
}