#include<iostream>

const int year = 3;
const int month = 12;

int main()
{
	using namespace std;
	const char *ps[month] = {
		"January", "February", "March", "April", "May", "June",
		"July", "August", "September", "October", "November", "December"
	};
	int xiaoshou[year][month];
	int sum[year] = { 0, 0, 0 };
	int total = 0;
	for (int i = 0; i < year;i++)
	{
		cout << "请输入第 " << i + 1 << " 年每月的销售额：" << endl;
		for (int j = 0; j < month; j++)
		{
			cout << ps[j] << ":";
			cin >> xiaoshou[i][j];
			sum[i] += xiaoshou[i][j];
		}
		total += sum[i];
	}
	for (int i = 0; i < year; i++)
	{
		cout << "第 " << i << " 年的销售额为：" << sum[i] << endl;
	}
	cout << year << "年的销售总额为：" << total << endl;
	cin.get();
	cin.get();
	return 0;
}