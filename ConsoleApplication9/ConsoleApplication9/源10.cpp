#include<iostream>
using namespace std;
double add(double x, double y);
double product(double x, double y);
double minus1(double x, double y);
double calculate(double x, double y, double(*pf)(double x, double y));

int main()
{
	double x, y;
	double(*pf[3])(double, double) = { add, product, minus1 };
	cout << "������x,y:";
	while (cin >> x >> y)
	{
		cout << "�Ժ���ָ���ʾ:"<<endl;
		cout << "x + y : " << calculate(x, y, add) << endl;
		cout << "x * y : " << calculate(x, y, product)<<endl;
		cout << "x - y : " << calculate(x, y, minus1)<<endl;
		cout << "�Ժ���ָ�������ʾ:" << endl;
		//cout << sizeof(pf) << endl;(sizeof��pf��Ϊ12���ֽڣ�
		for (int i = 0; i < 3; i++)
		{
			if (i==0)
				cout << "x + y : " << calculate(x, y, pf[i])<<endl;
			else if (i==1)
				cout << "x * y : " << calculate(x, y, pf[i])<<endl;
			else
				cout << "x - y : " << calculate(x, y, pf[i])<<endl;
		}
		cout << "----------------------------------\n";
		cout << "������x,y:";
	}
	return 0;
}

double add(double x, double y)
{
	return x + y;
}
double product(double x, double y)
{
	return x * y;
}
double minus1(double x, double y)
{
	return x - y;
}
double calculate(double x, double y, double(*pf)(double x, double y))
{
	return (*pf)(x, y);
}
