#include<iostream>

double tiaohe(double m, double n);
int main()
{
	using namespace std;
	double x, y;
	cout << "��������������";
	while (cin >> x&&cin >> y&&x != 0 && y != 0)
	{
		double t = tiaohe(x, y);
		cout << x << "��" << y << "�ĵ���ƽ����Ϊ��" << t << endl;
		cout << "��������������";
	}
}

double tiaohe(double m, double n)
{
	return 2.0*m*n / (m + n);
}