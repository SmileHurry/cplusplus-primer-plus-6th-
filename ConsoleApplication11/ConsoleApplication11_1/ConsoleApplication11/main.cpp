#include<iostream>
#include"golf.h"
int main()
{
	using namespace std;
	cout << "请输入golf结构的数目：";
	int n;
	cin >> n;
	cin.get();
	golf *ann = new golf [n];
	golf andy;
	int i = 0;
	while (i < n)
	{
		int m=setgolf(ann[i]);
		if (m == 0)
			break;
		i++;
	}
	setgolf(andy, "Ann Birdfree", 24);
	for (int j = 0; j < i; j++)
	{
		showgolf(ann[j]);
	}
	for (int j = 0; j < i; j++)
	{
		cout << "请输入 "<<ann[j].fullname<<" 新的等级：";
		int dengji;
		cin >> dengji;
		handicap(ann[j], dengji);
	}
	for (int j = 0; j < i; j++)
	{
		showgolf(ann[j]);
	}
	showgolf(andy);
	cout << "Bye！\n";
	delete[] ann;
	return 0;
}