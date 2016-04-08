#include<iostream>
#include"plorg.h"

int main()
{
	using namespace std;
	plorg p1;
	p1.show();
	p1.reset_CI(10);
	p1.show();
	cout << "---------------------------\n";
	plorg p2("zhangqi", 30);
	p2.show();
	p2.reset_CI(20);
	p2.show();
	return 0;
}