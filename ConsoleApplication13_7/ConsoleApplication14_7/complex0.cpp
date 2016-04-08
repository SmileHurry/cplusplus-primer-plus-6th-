#include<iostream>
#include"complex0.h"

complex::complex()
{
	a = 0.0;
	b = 0.0;
}
complex::complex(double m, double n)
{
	a = m;
	b = n;
}
complex::~complex()
{

}
complex operator+(const complex &st1, const complex &st2)
{
	return complex(st1.a + st2.a, st1.b + st2.b);
}
complex operator-(const complex &st1, const complex &st2)
{
	return complex(st1.a - st2.a, st1.b - st2.b);
}
complex operator*(const complex &st1, const complex &st2)
{
	return complex(st1.a*st2.a - st1.b*st2.b, st1.a*st2.b + st1.b*st2.a);
}
complex operator*(double m, const complex &st2)
{
	return complex(m*st2.a, m*st2.b);
}
complex complex::operator~() const
{
	return complex(a, -b);
}
std::ostream & operator<<(std::ostream &os, const complex & st)
{
	os << "( " << st.a << " , " << st.b << complex::c << " )";
	return os;
}
std::istream & operator>>(std::istream &is, complex & st)
{
	std::cout << "real: ";
	is >> st.a;
	if (is)
	{
		std::cout << "imaginary: ";
		is >> st.b;
	}
	return is;
}