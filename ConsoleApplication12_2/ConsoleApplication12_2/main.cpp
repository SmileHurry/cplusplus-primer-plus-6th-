#include<iostream>
#include"person.h"
int main()
{
	using namespace std;
	person one;
	person two("Smythecraft");
	person three("Dimwiddy", "Sam");
	one.show();
	one.formalshow();
	cout <<"------------------------------"<< endl;
	two.show();
	two.formalshow();
	cout << "------------------------------" << endl;
	three.show();
	three.formalshow();
	cout << endl;
	return 0;
}