#include<iostream>
#include"Move.h"

Move::Move(double a, double b)
{
	x = a;
	y = b;
}
Move::~Move()
{

}
void Move::showmove() const
{
	std::cout << "x=" << x << std::endl;
	std::cout << "y=" << y << std::endl;
}
Move Move::add(const Move &m) const
{
	return Move(x + m.x, y + m.y);//ע�⣺��仰��û�жԵ��ö����x��y���޸ġ�
}
void Move::reset(double a, double b)
{
	x = a;
	y = b;
}