#include<iostream>

const int inch_per_feet = 12;

int main()
{
	using namespace std;
	cout << "please input your inches:___\b\b\b";
	int height_inch;
	cin >> height_inch;
	int height_feet = height_inch / inch_per_feet;
	int rm_inch = height_inch%inch_per_feet;
	cout << "your level is:" << height_feet <<" feet,and "<<rm_inch<<" inches."<< endl;
	cin.get();
	cin.get();
	return 0;
}