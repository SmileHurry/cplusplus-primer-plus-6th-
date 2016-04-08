#include<iostream>
#include<cstring>
#include"golf10.h"

golf10::golf10()
{
	setgolf();
}
golf10::golf10(const char * name, int hc)
{
	strcpy_s(player.fullname, name);
	player.handicap = hc;
}
golf10::~golf10()
{

}
int golf10::setgolf()
{
	using namespace std;
	cout << "请输入姓名：";
	if (cin.get(player.fullname, Len))
	{
		cout << "请输入等级：";
		cin >> player.handicap;
		cin.get();
		return 1;
	}
	else
		cin.clear();
	return 0;
}
void golf10::handicap(int hc)
{
	player.handicap = hc;
}
void golf10::showgolf() const
{
	using namespace std;
	cout << player.fullname << "\t\t" << player.handicap << endl;
}
void golf10::showgolf_fullname() const
{
	using namespace std;
	cout << player.fullname;
}