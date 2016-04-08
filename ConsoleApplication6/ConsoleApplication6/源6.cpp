#include<iostream>;

const int size = 20;

struct CandyBar
{
	char pingpai[size];
	double zhongliang;
	int kaluli;
};

int main()
{
	using namespace std;
	CandyBar s[3] =
	{
		{ "Mocha Munch", 2.3, 350 },
		{ "Mocha Munch1", 2.4, 351 },
		{ "Mocha Munch2", 2.5, 352 },
	};
	for (int i = 0; i < 3; i++)
	{
		cout << s[i].pingpai << endl;
		cout << s[i].zhongliang << endl;
		cout << s[i].kaluli << endl;
	}
	cin.get();
	return 0;
}