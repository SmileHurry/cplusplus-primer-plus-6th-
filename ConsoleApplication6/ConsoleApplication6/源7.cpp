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
	pisa pzz;
	cout << "what's the name of pisa company:";
	cin.getline(pzz.gongsi, size);
	cout << "what's the diameter of pisa:";
	cin >> pzz.zhijing;
	cout << "what's the weight of pisa:";
	cin >> pzz.zhongliang;
	cout << "company:" << pzz.gongsi << endl;
	cout << "diameter:" << pzz.zhijing << "inches" << endl;
	cout << "weight:" << pzz.zhongliang << "ounches" << endl;
	cin.get();
	cin.get();
	return 0;
}