#ifndef STONEWT_H_
#define STONEWT_H_

class stonewt
{
private:
	enum{Lbs_per_stn=14};
	int stone;
	double pds_left;
	double pounds;
public:
	stonewt(double lbs);
	stonewt(int stn, double lbs);
	stonewt();
	~stonewt();
	friend bool operator>(const stonewt &s1, const stonewt &s2);
	friend bool operator<(const stonewt &s1, const stonewt &s2);
	friend bool operator==(const stonewt &s1, const stonewt &s2);
	friend bool operator>=(const stonewt &s1, const stonewt &s2);
	friend bool operator<=(const stonewt &s1, const stonewt &s2);
	friend bool operator!=(const stonewt &s1, const stonewt &s2);
	stonewt & operator=(const stonewt &st);
	friend std::ostream & operator<<(std::ostream & os, const stonewt &s2);
};

#endif