#include<iostream>
#include<string>
//const int size = 20;
using namespace std;
struct CandyBar
{
    string pingpai;
	double zhongliang;
	int kaluli;
};

int main()
{
	CandyBar *snack = new CandyBar[3];
	snack[0].pingpai = "A";
	snack[0].zhongliang = 1.0;
	snack[0].kaluli = 2;

	snack[1].pingpai = "B";
	snack[1].zhongliang = 1.1;
	snack[1].kaluli = 3;

	snack[2].pingpai = "C";
	snack[2].zhongliang = 1.2;
	snack[2].kaluli = 4;

	for (int i=0; i < 3; i++)
	{
		cout << "Ʒ�ƣ�" << snack[i].pingpai << endl;
		cout << "������" << snack[i].zhongliang << endl;
		cout << "��·�" << snack[i].kaluli << endl;
	}
	cin.get();
	return 0;

}