#include<iostream>
#include<string>

int main()
{
	using namespace std;
	string name, dessert;
	cout << "Enter your name:" << endl;
	getline(cin, name);
	cout << "Enter your favorite dessert:" << endl;
	getline(cin, dessert);
	cout << "I have some delicious " << dessert;
	cout << " for you," << name << "." << endl;
	cin.get();
	cin.get();
	return 0;
}