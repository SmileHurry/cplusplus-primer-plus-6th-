#include<iostream>
const int max = 10;
int shuru(double ar[], int limit);
void xianshi(const double ar[], int n);
void pingjun(const double ar[], int n);
using namespace std;
int main()
{
	double golf[max];
	int count = shuru(golf, max);
	xianshi(golf, count);
	pingjun(golf, count);
}

int shuru(double ar[], int limit)
{
	double temp;
	int count = 0;
	int i;
	for (i = 0; i < limit; i++)
	{
		cout << "enter value #" << (i + 1) << ":";
		cin >> temp;
		if (!cin)
		{
			cin.clear();
			while (cin.get() != '\n')
				continue;
			cout << "输入错误。" << endl;
			break;
		}
		else if (temp < 0)
			break;
		else
			ar[i] = temp;
	}
	return i;
}

void xianshi(const double ar[], int n)
{
	cout << "所有的golf成绩为：";
	for (int i = 0; i < n; i++)
	{
		cout << ar[i] << '\t';
	}
	cout << endl;
}

void pingjun(const double ar[], int n)
{
	double temp = 0;
	for (int i = 0; i < n; i++)
	{
		temp += ar[i];
	}
	cout << "平均成绩为：" << temp / n << endl;
}

