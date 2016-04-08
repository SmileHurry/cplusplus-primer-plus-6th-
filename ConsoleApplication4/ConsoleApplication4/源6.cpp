#include<iostream>

using namespace std;
double zhuanhuan(double);

int main()
{
	cout << "Enter the number of light years:";
	double n;
	cin >> n;
	double guangnian = zhuanhuan(n);
	cout << n << " light years = " << guangnian << " astronomical units." << endl;
	cin.get();
	cin.get();
	return 0;
}

double zhuanhuan(double m)
{
	return m * 63240;
}