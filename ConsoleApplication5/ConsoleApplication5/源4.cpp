#include<iostream>

const int changshu1 = 24;
const int changshu2 = 60;
const int changshu3 = 60;

int main()
{
	using namespace std;
	cout << "Enter the number of seconds:_____\b\b\b\b\b";
	long miaoshu;
	cin >> miaoshu;
	int miao = miaoshu%changshu3;
	int fen = miaoshu / changshu3%changshu2;
	int shi = miaoshu / changshu3 / changshu2%changshu1;
	int tian = miaoshu / changshu3 / changshu2 / changshu1;
	cout << miaoshu << " seconds = " << tian << " days, " << shi << " hours, " << fen << " minutes, " << miao << " seconds";
	cin.get();
	cin.get();
	return 0;
}