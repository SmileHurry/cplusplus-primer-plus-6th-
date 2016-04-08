#include<iostream>
#include"Move.h"
int main()
{
	Move ps;
	ps.showmove();
	std::cout << "----------------\n";
	Move ps1(2, 3);
	ps1.showmove();
	std::cout << "----------------\n";
	Move ps2(3, 4);
	ps2.showmove();
	std::cout << "----------------\n";
    Move ps3=ps1.add(ps2);//ps1对象调用add函数，将ps2作为参数，返回的return Move(x + m.x, y + m.y)并没有对ps1的x、y做修改，而是将其分别加了m.x、m.y，最后传给Move函数对ps3进行了初始化。
	ps1.showmove();//ps1将还是显示2，3
	ps3.showmove();//而ps3将显示5，7
	std::cout << "----------------\n";
	ps3.reset();
	ps3.showmove();
	return 0;
}