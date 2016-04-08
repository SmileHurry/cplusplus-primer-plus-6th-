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
		cout << "第 " << ps[i] << " 月的销售额为：" << xiaoshou[i] << endl;
	}
	cout << "这一年的销售总额为：" << sum << endl;
	cin.get();
	cin.get();
	return 0;
}