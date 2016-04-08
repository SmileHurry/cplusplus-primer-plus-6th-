#include<iostream>
#include"Cow.h"

int main()
{
	using std::cout;
	using std::cin;
	using std::endl;
	Cow cow1;
	cow1.ShowCow();
	cout << "------------------------------------\n";
	Cow cow2("abcd", "mengniuhobby", 23.4);
	cow2.ShowCow();
	cout << "------------------------------------\n";
	Cow cow3 = Cow("abcdefghijklmnopqrstuvwxyz", "yilihobby", 25.6);
	cow3.ShowCow();
	cout << "------------------------------------\n";
	Cow cow4 = cow3;
	cow4.ShowCow();
	cout << "------------------------------------\n";
	cow3 = cow2;
	cow3.ShowCow();
	cout << "end of main()\n";
	return 0;
}