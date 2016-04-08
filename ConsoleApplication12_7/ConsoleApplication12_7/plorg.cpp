#include<iostream>
#include"plorg.h"
#include<cstring>
plorg::plorg(char *p,int n)
{
	strcpy_s(mingcheng , p);
	CI = n;

}
plorg::~plorg()
{

}
void plorg::reset_CI(int m)
{
	CI = m;
}
void plorg::show() const
{
	std::cout << mingcheng << std::endl;
	std::cout << CI << std::endl;
}