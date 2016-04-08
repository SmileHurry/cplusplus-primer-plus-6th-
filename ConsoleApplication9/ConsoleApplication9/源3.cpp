#include<iostream>
using namespace std;
struct box
{
	char maker[40];
	float height;
	float width;
	float length;
	float volume;
};
void xianshi1(box b);
void xianshi2(const box *b);

int main()
{
	box b1 = {"abcdefg",10.01,10.02,10.03,10.4};
	xianshi1(b1);
	xianshi2(&b1);

}

void xianshi1(box b)
{
	cout << "按值传递显示每个成员：" << endl;
	cout << b.maker << endl;
	cout << b.height << endl;
	cout << b.width << endl;
	cout << b.volume << endl;
}

void xianshi2(const box *b)
{
	cout << "按地址传递显示每个成员：" << endl;
	cout << b->maker << endl;
	cout << b->height << endl;
	cout << b->width << endl;
	cout << b->volume << endl;
}