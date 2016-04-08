#include<iostream>

const int size = 10;

int main()
{
	using namespace std;
	double shuzhu[size];
	cout << "请输入数据：" << endl;
	int i = 0;
	double sum = 0.0;
	while (i < size&&cin >> shuzhu[i])
	{
		sum += shuzhu[i];
		i++;
	}
	double average=0;
	if (i!=0)
	average = sum / i;

	int count = 0;
	for (int j = 0; j < i; j++)
	{
		cout << shuzhu[j] << '\t';
		if (shuzhu[j]>average)
			count++;
	}
	cout << "这 " << i << " 个数据的平均值为：" << average << endl;
	cout << "数组中有 " << count << " 个数字大于平均值：" << average << endl;
	return 0;
}