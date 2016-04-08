#include<iostream>
#include<string>

int main()
{
	using namespace std;
	string ming;
	cout << "Enter your first name:";
	getline(cin, ming);
	string xing;
	cout << "Enter your last name:";
	getline(cin, xing);
	xing += ", ";
	xing += ming;
	cout << "Here's the information in a single string: " << xing << endl;
	cin.get();
	cin.get();
	return 0;
}