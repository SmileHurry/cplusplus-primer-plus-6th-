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
    Move ps3=ps1.add(ps2);//ps1�������add��������ps2��Ϊ���������ص�return Move(x + m.x, y + m.y)��û�ж�ps1��x��y���޸ģ����ǽ���ֱ����m.x��m.y����󴫸�Move������ps3�����˳�ʼ����
	ps1.showmove();//ps1��������ʾ2��3
	ps3.showmove();//��ps3����ʾ5��7
	std::cout << "----------------\n";
	ps3.reset();
	ps3.showmove();
	return 0;
}