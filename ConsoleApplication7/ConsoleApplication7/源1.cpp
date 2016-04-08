#include<iostream>

int main()
{
	using namespace std;
	cout << "请输入两个整数："<<endl;
	int a, b;
	cin >> a >> b;
	int sum = 0;
	for (int k = a; k <= b; k++)
	{
		sum = sum + k;
	}
	cout << "sum= " << sum << endl;
	cin.get();
	cin.get();
	return 0;
}