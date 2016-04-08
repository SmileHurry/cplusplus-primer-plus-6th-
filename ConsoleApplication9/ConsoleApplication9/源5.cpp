#include<iostream>

using namespace std;
long long int jiecheng(int n);
int main()
{
	cout << "请输入一个阶乘数：";
	int m;
	while (cin >> m)
	{
		cout << m << " != " << jiecheng(m) << endl;
		cout << "请输入一个阶乘数：";
	}
	if (!cin)
	{
		cin.clear();
		while (cin.get() != '\n')
			continue;
		cout << "输入错误"<<endl;
	}
	return 0;
}
long long int jiecheng(int n)
{
	long long int m = 1;
	if (n == 0 || n == 1)
		return m;
	else
		return n*jiecheng(n - 1);
}