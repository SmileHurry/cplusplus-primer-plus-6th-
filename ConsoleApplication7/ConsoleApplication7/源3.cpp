#include<iostream>

int main()
{
	using namespace std;
	int a;
	int count = 0;
	cout << "������һ������";
	cin >> a;
	while (a != 0)
	{
		count += a;
		cout << "������ۼƺ�Ϊ��"<<count<<endl;
		cout << "������һ������";
		cin >> a;
	}
	cout << "�������" << endl;
	cin.get();
	cin.get();
	return 0;
}