#include<iostream>

int main()
{
	using namespace std;
	cout << "����������������"<<endl;
	int a, b;
	cin >> a >> b;
	int sum = 0;
	for (int k = a; k <= b; k++)
	{
		sum = sum + k;
	}
	cout << "sum= " << sum << endl;
	cin.get();
	cin.get();
	return 0;
}