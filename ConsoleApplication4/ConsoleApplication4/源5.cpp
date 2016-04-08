#include<iostream>
using namespace std;
double change(double);

int main()
{
	cout << "please enter a Celsius value£º";
	double temper;
	cin >> temper;
	double huashi;
	huashi = change(temper);
	cout << temper << " degrees Celsius is " << huashi << " degrees Fahrenheit." << endl;
	cin.get();
	cin.get();
	return 0;
}

double change(double n)
{
	return 1.8*n + 32.0;
}