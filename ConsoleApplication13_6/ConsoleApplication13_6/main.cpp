#include<iostream>
#include"stonewt.h"

int main()
{
	using namespace std;
	stonewt st[6] = { stonewt(100), stonewt(56.34), stonewt(12, 24.33) };
	//��仰�к�������Ԫ������δ�ṩ����ֵ��ʼ������˺�����Ԫ�ص���Ĭ�ϵĹ��캯��stonewt();
	int pounds;
	for (int i = 3; i < 6; i++)
	{
		cout << "please input pounds: ";
		cin >> pounds;
		st[i] = stonewt(pounds);
	}
	int i_max = 0;
	int i_min = 0;
	int count = 0;
	stonewt st_11(11, 0);
	stonewt st_max = st[0];
	stonewt st_min = st[0];
	for (int i = 0; i < 6; i++)
	{
		if (st[i] >= st_11)
			count++;
		if (st[i]>st_max)
			st_max = st[i];
		if (st[i] < st_min)
			st_min = st[i];
	}
	cout << "����11Ӣʯ��Ԫ�������У� " << count << endl;
	cout << "����Ԫ�أ�" << st_max << endl;
	cout << "��С��Ԫ�أ�" << st_min << endl;
}