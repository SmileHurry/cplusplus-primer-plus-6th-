#include<iostream>

int main()
{
	using namespace std;
	cout << "请输入你的年龄：" << endl;
	int age;
	cin >> age;
	cout << "你的年龄包含：" << age * 12 << "个月" << endl;
	cin.get();
	cin.get();
	return 0;
}