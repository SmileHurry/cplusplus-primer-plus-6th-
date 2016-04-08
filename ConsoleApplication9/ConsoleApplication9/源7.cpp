#include<iostream>

const int max = 5;
double * fill_array(double *begin, double *end);
void show_array(const double *begin, const double *end);
void revalue(double *begin, double *end,double n);

int main()
{
	using namespace std;
	double properties[max];
	double *end_array = fill_array(properties, properties + max);
	cout << "数组的内容为：" << endl;
	show_array(properties, end_array);
	if (properties != end_array)
	{
		cout << "enter revaluation factor:";
		double factor;
		while (!(cin >> factor))
		{
			cin.clear();
			while (cin.get() != '\n')
				continue;
			cout << "输入错误，请再输入一个数字：";
		}
		revalue(properties, end_array, factor);
		cout << "修改后数组的内容为：" << endl;
		show_array(properties, end_array);
	}
	return 0;
}

double * fill_array(double *begin, double *end)
{
	using namespace std;
	double *middle = begin;
	for (int i=0; middle < end; i++,middle++)
	{
		cout << "enter value " << i + 1 << ":";
		if (!(cin >> (*middle)))
		{
			cin.clear();
			while (cin.get() != '\n')
				continue;
			cout << "输入了字符，输入错误；" << endl;
			break;
		}
		else if (*middle < 0)
		{
			cout << "输入的数字小于0，输入错误；" << endl;
			break;
		}
	}
	return middle;
}

void show_array(const double *begin, const double *end)
{
	using namespace std;
	for (; begin != end; begin++)
	{
		cout << *begin << '\t';
	}
	cout << endl;
}

void revalue(double *begin, double *end, double n)
{
	for (; begin != end; begin++)
	{
		*begin = (*begin)*n;
	}
}