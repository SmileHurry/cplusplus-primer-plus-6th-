#include<iostream>
const int size = 20;

struct pisa
{
	char gongsi[size];
	double zhijing;
	double zhongliang;
};

int main()
{
	using namespace std;
	pisa *ps=new pisa;
	cout << "what's the diameter of pisa:";
	cin >> ps->zhijing;
	cin.get();
	cout << "what's the name of pisa company:";
	cin.getline(ps->gongsi, size);
	cout << "what's the weight of pisa:";
	cin >> ps->zhongliang;
	cout << "company:" << ps->gongsi << endl;
	cout << "diameter:" << ps->zhijing << "inches" << endl;
	cout << "weight:" << ps->zhongliang << "ounches" << endl;
	delete ps;
	cin.get();
	cin.get();
	return 0;
}