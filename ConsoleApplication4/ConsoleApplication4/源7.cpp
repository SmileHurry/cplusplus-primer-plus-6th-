#include<iostream>

using namespace std;
void shijian(int,int);
int main()
{
	cout << "please input hours:";
	int h;
	cin >> h;
	cout << "please input minutes:";
	int m;
	cin >> m;
	cout << "-----------------------------------" << endl;
	shijian(h, m);
	cin.get();
	cin.get();
	return 0;
}
void shijian(int i, int j)
{
	cout << "Enter the number of hours: " << i << endl;
	cout << "Enter the number of minutes: " << j << endl;
	cout << "Time: " << i << ":" << j;
}