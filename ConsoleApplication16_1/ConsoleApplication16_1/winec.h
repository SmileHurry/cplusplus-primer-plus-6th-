#ifndef WINEC_H_
#define WINEC_H_

#include<iostream>
#include<string>
#include<valarray>

class Wine
{
private:
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
	};//��Աģ�壨Pairģ��������Wine��ĳ�Ա��
	typedef std::valarray<int> ArrayInt;
	typedef Pair<ArrayInt, ArrayInt> PairArray;
	std::string wine_name;
	PairArray pa;
	int year_num;
public:
	Wine();
	Wine(const char *l, int y, const int yr[], const int bot[]);
	Wine(const char *l, int y);
	void GetBottles();
	std::string & Label(){ return wine_name; }
	int sum();
	void Show();
};

#endif