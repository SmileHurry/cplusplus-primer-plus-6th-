#include<iostream>
#include<cmath>
int main()
{
	using namespace std;
	int year;
	double sum1, sum2;
	sum1=sum2= 100.0;
	for (year = 0; sum1 <=sum2;year++)
	{
		cout << "Cleo��Daphne��" << year << "���Ͷ�ʼ�ֵ�ֱ�Ϊ��" << sum1 << " , " << sum2 << endl;
		sum1 = sum1 + sum1*0.05;
		sum2 = sum2 + 10;
	}
	cout << "����" << year << "���" << "Cleo��Ͷ�ʼ�ֵ���ܳ���Daphne��Ͷ�ʼ�ֵ��"<<endl;
	cout << "��ʱ��Cleo��Ͷ�ʼ�ֵΪ" << sum1 << "����Daphne��Ͷ�ʼ�ֵΪ" << sum2 << endl;
	cin.get();
	return 0;
	
}