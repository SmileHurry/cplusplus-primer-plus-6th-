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
		cout << "������� " << i + 1 << " ��ÿ�µ����۶" << endl;
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
		cout << "�� " << i << " ������۶�Ϊ��" << sum[i] << endl;
	}
	cout << year << "��������ܶ�Ϊ��" << total << endl;
	cin.get();
	cin.get();
	return 0;
}