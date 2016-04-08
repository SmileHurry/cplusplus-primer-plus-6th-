#ifndef MYTIME3_H_
#define MYTIME3_H_

#include<iostream>

class Time
{
private:
	int hours;
	int minutes;
public:
	Time();
	Time(int h, int m = 0);
	void AddMin(int m);
	void AddHr(int h);
	void Reset(int h = 0, int m = 0);
	friend Time operator + (const Time &t1, const Time &t2);//注：这几句友元函数后面不能加const，因为：友元函数为非成员函数，而非成员函数不允许使用类型限定符；
	friend Time operator - (const Time &t1, const Time &t2);
	friend Time operator * (double m, const Time &t);
	friend std::ostream & operator<<(std::ostream &os, const Time &t);
};

#endif;