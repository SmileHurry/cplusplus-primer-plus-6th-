#include<iostream>
void myfunction1();
void myfunction2();

int main()
{
	using namespace std;
	myfunction1();
	myfunction1();
	myfunction2();
	myfunction2();
	cin.get();
	return 0;
}

void myfunction1()
{
	using namespace std;
	cout << "Three blind mice" << endl;
}

void myfunction2()
{
	using namespace std;
	cout << "See how they run" << endl;
}