#ifndef WINEC_H_
#define WINEC_H_

#include<iostream>
#include<string>
#include<valarray>
typedef std::valarray<int> ArrayInt;
template <typename T1, typename T2>
class Pair
{
private:
	T1 a;
	T2 b;
public:
	T1 first() const{ return a; }
	T2 second() const{ return b; }
	Pair(const T1 &aval, const T2 &bval) :a(aval), b(bval){}
	Pair(){};
};//成员模板（Pair模板用作了Wine类的成员）
class Wine:private std::string,private Pair<ArrayInt,ArrayInt>
{
private:
	int year_num;
public:
	Wine();
	Wine(const char *l, int y, const int yr[], const int bot[]);
	Wine(const char *l, int y);
	Wine(const std::string & s, int y, Pair<ArrayInt, ArrayInt> &pa);
	void GetBottles();
	const std::string & Label(){ return (const std::string &)*this; }
	int sum();
	void Show();
};

#endif