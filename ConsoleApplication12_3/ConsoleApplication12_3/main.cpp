#include<iostream>
#include"golf10.h"
int main()
{
	using namespace std;
	cout << "������golf�ṹ����Ŀ��";
	int n;
	cin >> n;
	cin.get();
	golf10 *ann = new golf10[n];

	golf10 andy("Ann Birdfree", 24);
	for (int j = 0; j < n; j++)
	{
		ann[j].showgolf();
	}
	for (int j = 0; j < n; j++)
	{
		cout << "������ ";
		ann[j].showgolf_fullname();
		cout<< " �µĵȼ���";
		int dengji;
		cin >> dengji;
		ann[j].handicap(dengji);
	}
	for (int j = 0; j < n; j++)
	{
		ann[j].showgolf();
	}
	andy.showgolf();
	cout << "Bye��\n";
	delete[] ann;
	return 0;
}