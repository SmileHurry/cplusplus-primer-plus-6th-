#include<iostream>

const int year = 12;

int main()
{
	using namespace std;
	const char *ps[year] = {
		"January", "February", "March", "April", "May", "June",
		"July", "August", "September", "October", "November", "December"
	};
	cout << "please input " << year << " values." << endl;
	int xiaoshou[year];
	int sum = 0;
	for (int i = 0; i < year; i++)
	{
		cout << ps[i] << ":";
		cin >> xiaoshou[i];
		sum += xiaoshou[i];
	}
	for (int i = 0; i < year; i++)
	{
		cout << "�� " << ps[i] << " �µ����۶�Ϊ��" << xiaoshou[i] << endl;
	}
	cout << "��һ��������ܶ�Ϊ��" << sum << endl;
	cin.get();
	cin.get();
	return 0;
}