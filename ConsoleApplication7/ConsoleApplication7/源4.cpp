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
		cout << "Cleo和Daphne第" << year << "年的投资价值分别为：" << sum1 << " , " << sum2 << endl;
		sum1 = sum1 + sum1*0.05;
		sum2 = sum2 + 10;
	}
	cout << "经过" << year << "年后，" << "Cleo的投资价值才能超过Daphne的投资价值。"<<endl;
	cout << "此时，Cleo的投资价值为" << sum1 << "，而Daphne的投资价值为" << sum2 << endl;
	cin.get();
	return 0;
	
}