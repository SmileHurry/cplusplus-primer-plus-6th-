#include<iostream>
#include<cmath>

const int changshu1 = 12;
const double changshu2 = 0.0254;
const double changshu3 = 2.2;

int main()
{
	using namespace std;
	cout << "������������" << endl;
	cout << "����������ߵ�Ӣ��:_\b";
	int feet;
	cin >> feet;
	cout << "����������ߵ�Ӣ��:_\b";
	int inch;
	cin >> inch;
	cout << "�������������(����:_\b";
	int weight;
	cin >> weight;
	double mi = (feet*changshu1 + inch)*0.0254;
	double qianke = weight / 2.2;
	double BMI = qianke / pow(mi,2);
	cout << "���BMIָ��Ϊ�� " << BMI << endl;
	cin.get();
	cin.get();
	return 0;
}