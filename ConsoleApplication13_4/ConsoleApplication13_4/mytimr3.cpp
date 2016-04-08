#include"mytime3.h"

Time::Time()
{
	hours = minutes = 0;
}
Time::Time(int h, int m)
{
	hours = h;
	minutes = m;
}
void Time::AddMin(int m)
{
	minutes += m;
	hours += minutes / 60;
	minutes %= 60;
}
void Time::AddHr(int h)
{
	hours += h;
}
void Time::Reset(int h , int m)
{
	hours = h;
	minutes = m;
}
Time operator + (const Time &t1, const Time &t2)
{
	Time sum;
	sum.minutes = t1.minutes + t2.minutes;
	sum.hours = t1.hours + t2.hours + sum.minutes / 60;
	sum.minutes = sum.minutes % 60;
	return sum;
}
Time operator - (const Time &t1, const Time &t2)
{
	Time diff;
	int T1, T2;
	T1 = t1.hours * 60 + t1.minutes;
	T2 = t2.hours * 60 + t2.minutes;
	diff.hours = (T1 - T2) / 60;
	diff.minutes = (T1 - T2) % 60;
	return diff;
}
Time operator * (double m, const Time &t)
{
	Time multiply;
	long totalminutes = t.hours *60* m + t.minutes *m;
	multiply.hours = totalminutes / 60;
	multiply.minutes = totalminutes % 60;
	return multiply;
}
std::ostream & operator<<(std::ostream &os, const Time &t)
{
	os << t.hours << " hours, " << t.minutes << " minutes";
	return os;
}