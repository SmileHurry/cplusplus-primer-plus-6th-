#include<iostream>

int main()
{
	using namespace std;
	cout << "Enter number of rows:"; 
	int num;
	cin >> num;
	for (int i = 0; i < num; i++)
	{
		for (int j = 0; j < num - (i + 1); j++)
			cout << ".";
		for (int k = num - (i + 1); k < num; k++)
			cout << "*";
		cout << endl;
	}
	cin.get();
	cin.get();
	return 0;
}