#include<iostream>

const double changshu1 = 60;
const double changshu2 = 60;

int main()
{
	using namespace std;
	cout << "Enter a latitude in degree, minutes, and seconds:" << endl;
	cout << "First, enter the degree:__\b\b";
	int degree;
	cin >> degree;
	cout << "Next, enter the minutes of arc:__\b\b";
	int arc;
	cin >> arc;
	cout << "Fanally, enter the seconds of arc:__\b\b";
	int second;
	cin >> second;
	cout << degree << " degrees, " << arc << " minutes, " << second << " seconds " << "= " << double(degree + (arc + (second / changshu1)) / changshu2) << " degrees";
	cin.get();
	cin.get();
	return 0;
}