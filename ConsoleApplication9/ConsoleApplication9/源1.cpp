#include<iostream>

double tiaohe(double m, double n);
int main()
{
	using namespace std;
	double x, y;
	cout << "请输入两个数：";
	while (cin >> x&&cin >> y&&x != 0 && y != 0)
	{
		double t = tiaohe(x, y);
		cout << x << "和" << y << "的调和平均数为：" << t << endl;
		cout << "请输入两个数：";
	}
}

double tiaohe(double m, double n)
{
	return 2.0*m*n / (m + n);
}