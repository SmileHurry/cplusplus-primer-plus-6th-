#include<iostream>

int main()
{
	using namespace std;
	cout << "please input your salary£º";
	double shouru;
	double suodeshui;
	while (cin >> shouru&&shouru >= 0)
	{
		if (shouru < 5000)
			suodeshui = shouru;
		else if (shouru >= 5001 && shouru < 15000)
			suodeshui = (shouru - 5000)*0.1;
		else if (shouru >= 15001 && shouru < 35000)
			suodeshui = 10000 * 0.1 + (shouru - 15000)*0.15;
		else
			suodeshui = 10000 * 0.1 + 20000 * 0.15 + (shouru - 35000)*0.2;
		cout << "the tax is:" << suodeshui << endl;
		cout << "please input your salary£º";
	}
	//cout << "the tax is:" << suodeshui << endl;
	return 0;
}