#include<iostream>
#include<array>
using namespace std;

int main()
{
	array<double, 3>ai = { 0 };
	for (int i = 0; i < 3; i++)
	{
		cout << "�������" << i+1 << "��40���ܳɼ���";
		cin >> ai[i];
	}
	cout << "�����ˣ�" << ai.size() << "��" << endl;
	cout << "ƽ��ʱ�䣺" << (ai[0] + ai[1] + ai[2]) / 3 << endl;
	cin.get();
	cin.get();
	return 0;
}