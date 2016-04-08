#include<iostream>

int main()
{
	using namespace std;
	int a;
	int count = 0;
	cout << "请输入一个数：";
	cin >> a;
	while (a != 0)
	{
		count += a;
		cout << "输入的累计和为："<<count<<endl;
		cout << "请输入一个数：";
		cin >> a;
	}
	cout << "输入结束" << endl;
	cin.get();
	cin.get();
	return 0;
}