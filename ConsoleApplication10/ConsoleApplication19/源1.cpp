#include<iostream>
using namespace std;
const int size = 20;
void dayin(char *ps, int n );
int main()
{
	cout << "������һ���ַ�����";
	char str[size];
	cin.getline(str, size);
	int n;
	cout << "������һ������n��";
	cin >> n;
	dayin(str, n);
}
void dayin(char *ps, int n )
{ 
	if (n == 0)
	{
		//cout << n << endl;(�����¾��ע��ֻ��Ϊ�����ݹ�Ĺ��̣�
		return;
	}
	else
		cout << ps << endl;
	dayin(ps, n - 1);
	//cout << n << endl;
}
