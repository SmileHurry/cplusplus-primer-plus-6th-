#include<iostream>
using namespace std;
//const int size = 40;
struct candybar{
	char *pinpai;
	double zhongliang;
	int reliang;
};
void fill(candybar & t, char *ps = "Millennium Munch", double weight = 2.85, int n = 350);
void display(const candybar & t);
int main()
{
	candybar cb;
	fill(cb);
	display(cb);
}

void fill(candybar &t, char *ps , double weight , int n )
{
	t.pinpai= ps;
	t.zhongliang = weight;
	t.reliang = n;
}
void display(const candybar & t)
{
	cout << "结构的内容为：" << endl;
	cout << t.pinpai<<endl;
	cout << t.zhongliang<<endl;
	cout << t.reliang<<endl;
}
