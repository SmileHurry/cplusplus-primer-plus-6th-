#include<iostream>

const int size = 10;

int main()
{
	using namespace std;
	double shuzhu[size];
	cout << "���������ݣ�" << endl;
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
	cout << "�� " << i << " �����ݵ�ƽ��ֵΪ��" << average << endl;
	cout << "�������� " << count << " �����ִ���ƽ��ֵ��" << average << endl;
	return 0;
}