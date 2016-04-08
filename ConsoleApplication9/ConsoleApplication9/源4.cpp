#include<iostream>
double probability(double, double, double, double);
int main()
{
	using namespace std;
	double total1, total2, choice1, choice2;
	cout << "请分别输入total1，choice1，total2，choice2:";
	while(cin>>total1>>choice1>>total2>>choice2&&choice1<=total1&&choice2<=total2)
	{
		cout << "获胜概率为：" << probability(total1, choice1, total2, choice2) << endl;
		cout << "请分别输入total1，choice1，total2，choice2:";
	}
	cout << "bye\n";
	return 0;
}

double probability(double t1, double c1, double t2, double c2)
{
	double result1 = 1.0;
	double result2 = 1.0;
	for (; c1 > 0; t1--, c1--)
	{
		result1 = result1*t1 / c1;
	}
	for (; c2 > 0; t2--, c2--)
	{
		result2 = result2*t2 / c2;
	}
	return 1/(result1*result2);
}