#include<iostream>
#include"stonewt.h"
using std::cout;
void display(const stonewt &st, int n);
int main()
{
	stonewt incognito = 275;
	stonewt wolfe(285.7);
	stonewt taft(21, 10);
	cout << "the celebrity weighted:\n";
	cout << incognito;
	cout << wolfe;
	cout << taft;
	cout << "-------------------------\n";
	cout << wolfe + taft;
	cout << wolfe - taft;
	cout << wolfe*2;
	cout << "-------------------------\n";
	cout << taft + wolfe;
	cout << taft - wolfe;
	cout << wolfe * 2;
	cout << "-------------------------\n";
	incognito.turn_stn();
	cout << incognito;
	wolfe.turn_stn();
	cout << wolfe;
	taft.turn_lbs();
	cout << taft;

	return 0;
}