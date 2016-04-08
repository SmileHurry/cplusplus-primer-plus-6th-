#include<iostream>
#include<array>
using namespace std;

int main()
{
	array<double, 3>ai = { 0 };
	for (int i = 0; i < 3; i++)
	{
		cout << "请输入第" << i+1 << "次40米跑成绩：";
		cin >> ai[i];
	}
	cout << "共跑了：" << ai.size() << "次" << endl;
	cout << "平均时间：" << (ai[0] + ai[1] + ai[2]) / 3 << endl;
	cin.get();
	cin.get();
	return 0;
}