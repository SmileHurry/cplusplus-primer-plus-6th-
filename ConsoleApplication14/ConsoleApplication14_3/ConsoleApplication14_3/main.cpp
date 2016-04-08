#include<iostream>
#include"stock10.h"

int main()
{
	{
		using std::cout;
		cout << "using constructors to create new objects\n";
		stock stock1("Nanosmart", 12, 20.0);
		cout << stock1;
		stock stock2 = stock("Boffo Object", 2, 2.0);
		cout << stock2;

		cout << "Assigning stock1 to stock2:\n";
		stock2 = stock1;
		cout << "Listing stock1 and stock2:\n";
		cout << stock1;
		cout << stock2;

		cout << "using a constructor to reset an object\n";
		stock1 = stock("Nifty Foods", 10, 50.0);
		cout << "Revised stock1:\n";
		cout << stock1;
		stock1 = "mclab";
		cout << "Revised again stock1:\n";
		cout << stock1;
		cout << "done.\n";
	}
	return 0;
}