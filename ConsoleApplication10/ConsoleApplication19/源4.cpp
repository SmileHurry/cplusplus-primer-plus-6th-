#include<iostream>
using namespace std;
#include<cstring>
struct stringy{
	char * str;
	int ct;
};
void set(stringy & b1, char *ps);
void show(const stringy & b2, int n = 1);
void show(const char[], int n=1);

int main()
{
	stringy beany;
	char testing[] = "Reality isn't what it used to be.";
	set(beany, testing);
	show(beany);
	show(beany, 2);
	testing[0] = 'D';
	testing[1] = 'u';
	show(testing);
	show(testing, 3);
	show("Done!");
	return 0;
}
void set(stringy & b1, char *ps)
{
	b1.str = new char[strlen(ps)+1];
	strcpy(b1.str, ps);
	b1.ct = (int)strlen(ps);
}
void show(const stringy & b2, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << b2.str << endl;
		cout << b2.ct << endl;
	}
}
void show(const char ch[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout <<ch<< endl;
	}
}