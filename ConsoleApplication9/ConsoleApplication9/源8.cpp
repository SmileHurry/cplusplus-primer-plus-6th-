#include<iostream>
#include<string>

const int season = 4;
const char *snames[season] = { "spring", "summer", "fall", "winter" };
struct ex{
	double expense1[season];
};
void fill(double da[]);
void show(double pa[]);
void fill1(ex *ps);
void show1(const ex *ps1);

int main()
{
	using namespace std;
	double expense[season];
	struct ex exp1;
	fill(expense);
	show(expense);

	fill1(&exp1);
	show1(&exp1);
	return 0;
}

void fill(double da[])
{
	using namespace std;
	for (int i = 0; i < season; i++)
	{
		cout << "Enter " << snames[i] << " expenses: ";
		cin >> da[i];
	}
}

void show(double pa[])
{
	using namespace std;
	double total = 0.0;
	cout << "\nEXPENSES\n";
	for (int i = 0; i < season; i++)
	{
		cout << snames[i] << ": $" << pa[i] << endl;
		total += pa[i];
	}
	cout << "total expenses: $" << total << endl;
}

void fill1(ex *ps)
{
	using namespace std;
	for (int i = 0; i < season; i++)
	{
		cout << "Enter " << snames[i] << " expenses: ";
		cin >> ps->expense1[i];
	}

}

void show1(const ex *ps1)
{
	using namespace std;
	double total = 0.0;
	cout << "\nEXPENSES\n";
	for (int i = 0; i < season; i++)
	{
		cout << snames[i] << ": $" << ps1->expense1[i] << endl;
		total += ps1->expense1[i];
	}
	cout << "total expenses: $" << total << endl;
}