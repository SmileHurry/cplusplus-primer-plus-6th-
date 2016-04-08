#include<iostream>
#include<cmath>

const int changshu1 = 12;
const double changshu2 = 0.0254;
const double changshu3 = 2.2;

int main()
{
	using namespace std;
	cout << "请输入你的身高" << endl;
	cout << "请输入你身高的英尺:_\b";
	int feet;
	cin >> feet;
	cout << "请输入你身高的英寸:_\b";
	int inch;
	cin >> inch;
	cout << "请输入你的体重(磅）:_\b";
	int weight;
	cin >> weight;
	double mi = (feet*changshu1 + inch)*0.0254;
	double qianke = weight / 2.2;
	double BMI = qianke / pow(mi,2);
	cout << "你的BMI指数为： " << BMI << endl;
	cin.get();
	cin.get();
	return 0;
}