#include<iostream>

int main()
{
	using namespace std;
	cout << "Enter the world's population:______\b\b\b\b\b\b";
	long long people;
	cin >> people;
	cout << "Enter the population of the US:______\b\b\b\b\b\b";
	long long us;
	cin >> us;
	cout << "The population of the US is " << double(us) / people*100 << "% of the world population.";
	cin.get();
	cin.get();
	return 0;
}