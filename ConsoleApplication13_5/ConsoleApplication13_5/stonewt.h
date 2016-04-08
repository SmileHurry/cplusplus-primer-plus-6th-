#ifndef STONEWT_H_
#define STONEWT_H_

class stonewt
{
public:
	enum STATE{STN,LBS};
private:
	enum{lbs_per_stn=14};
	int stone;
	double pds_left;
	double pounds;
	STATE state;
public:
	stonewt();
	stonewt(double lbs, STATE s= LBS);
	stonewt(int stn,double lbs, STATE s = STN);
	~stonewt();
	void turn_stn(){ state = STN; }
	void turn_lbs(){ state = LBS; }

	stonewt operator + (const stonewt &b) const;
	stonewt operator - (const stonewt &b) const;
	stonewt operator * (double n) const;
	friend  std::ostream & operator << (std::ostream &os, const stonewt &t);
};

#endif