#include<iostream>
void myfunction1();
void myfunction2();

int main()
{
	using namespace std;
	function1();
	function1();
	function2();
	function2();
	cin.get();
	return 0;
}

void function1()
{
	using namespace std;
	cout << "Three blind mice" << endl;
}

void function2()
{
	using namespace std;
	cout << "See how they run" << endl;
}