#include<iostream>
using namespace std;
const int size = 20;
void dayin(char *ps, int n );
int main()
{
	cout << "请输入一个字符串：";
	char str[size];
	cin.getline(str, size);
	int n;
	cout << "请输入一个数字n：";
	cin >> n;
	dayin(str, n);
}
void dayin(char *ps, int n )
{ 
	if (n == 0)
	{
		//cout << n << endl;(这句跟下距的注释只是为了理解递归的过程）
		return;
	}
	else
		cout << ps << endl;
	dayin(ps, n - 1);
	//cout << n << endl;
}
