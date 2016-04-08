#include<iostream>
using namespace std;
#include "classic.h"
void Bravo(const Cd &disk);
void Bravo1(const Cd disk);

int main()
{
	Cd c1("Beatles", "Capitol", 14, 35.5);
	classic c2 = classic("PIano Sonata in B flat, Fantasia in C", "Alfred Brendel", "Philips", 2, 57.17);

	Cd *pcd = &c1;
	cout << "--------------using object diretly:-----------------------------\n";
	c1.Report();
	c2.Report();

	cout << "--------------using type cd * pointer to objects:------------------\n";
	pcd->Report();
	pcd = &c2;
	pcd->Report();

	cout << "--------------calling a function with a Cd reference argument:---------\n";
	Bravo(c1);
	Bravo(c2);

	cout << "--------------calling a function with a Cd value argument:---------\n";
	Bravo1(c1);
	Bravo1(c2);//此时是按值传递，派生类将自动向上强制转换，将派生类中的基类部分复制给基类

	cout << "----------------Testing assignment:------------------\n";
	classic copy;
	copy.Report();
	copy = c2;
	copy.Report();

	return 0;
}

void Bravo(const Cd & disk)
{
	disk.Report();
}
void Bravo1(const Cd disk)
{
	disk.Report();
}