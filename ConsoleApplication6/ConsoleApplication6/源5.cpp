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
	cout << "品牌：" << snack.pingpai << endl;
	cout << "重量：" << snack.zhongliang << endl;
	cout << "卡路里：" << snack.kaluli << endl;
	cin.get();
	cin.get();
	return 0;
}
