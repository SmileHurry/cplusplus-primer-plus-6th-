#include<iostream>
#include<cstring>
#include"golf.h"

void setgolf(golf & g, const char * name, int hc)
{
	strcpy(g.fullname,name);
	g.handicap = hc;
}
int setgolf(golf & g)
{
	using namespace std;
	cout << "请输入姓名：";
	if (cin.get(g.fullname, Len))
	{
		cout << "请输入等级：";
		cin >> g.handicap;
		cin.get();
		return 1;
	}
	else
		cin.clear();
		return 0;
}
void handicap(golf & g, int hc)
{
	g.handicap = hc;
}
void showgolf(const golf & g)
{
	using namespace std;
	cout << g.fullname <<"\t\t"<<g.handicap << endl;
}
