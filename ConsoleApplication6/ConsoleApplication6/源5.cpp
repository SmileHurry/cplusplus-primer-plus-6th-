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
	CandyBar  snack = { "Mocha Munch", 2.3, 350 };
	cout << "Ʒ�ƣ�" << snack.pingpai << endl;
	cout << "������" << snack.zhongliang << endl;
	cout << "��·�" << snack.kaluli << endl;
	cin.get();
	cin.get();
	return 0;
}
