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
	return Move(x + m.x, y + m.y);//注意：这句话并没有对调用对象的x和y做修改。
}
void Move::reset(double a, double b)
{
	x = a;
	y = b;
}