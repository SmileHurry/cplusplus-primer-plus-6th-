#include<iostream>
#include"stonewt.h"

int main()
{
	using namespace std;
	stonewt st[6] = { stonewt(100), stonewt(56.34), stonewt(12, 24.33) };
	//这句话中后面三个元素由于未提供给定值初始化，因此后三个元素调用默认的构造函数stonewt();
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
	cout << "大于11英石的元素数量有： " << count << endl;
	cout << "最大的元素：" << st_max << endl;
	cout << "最小的元素：" << st_min << endl;
}