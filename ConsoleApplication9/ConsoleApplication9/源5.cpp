#include<iostream>

using namespace std;
long long int jiecheng(int n);
int main()
{
	cout << "������һ���׳�����";
	int m;
	while (cin >> m)
	{
		cout << m << " != " << jiecheng(m) << endl;
		cout << "������һ���׳�����";
	}
	if (!cin)
	{
		cin.clear();
		while (cin.get() != '\n')
			continue;
		cout << "�������"<<endl;
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