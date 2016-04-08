#include<iostream>
#include<array>

const int size = 101;

int main()
{
	using namespace std;
	array<long double, size>ai = {};
	ai[1] = ai[0] = 1;
	for (int i = 2; i < size; i++)
	{
		ai[i] = ai[i - 1] * i;
	}
	for (int i = 0; i < size; i++)
	{
		cout << i << "!=" << ai[i] << endl;
	}
	cin.get();
	return 0;

}