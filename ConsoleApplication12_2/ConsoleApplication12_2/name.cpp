#include<iostream>
#include"person.h"
#include<string>
#include<cstring>
person::person(const std::string &ln, const char *fn )
{
	lname = ln;
	strcpy_s(fname, fn);
}
person::~person()
{

}
void person::show() const
{
	std::cout << "the name of the person(informal):" << std::endl;
	std::cout << fname<<'\t'<<lname << std::endl;
}
void person::formalshow() const
{
	std::cout << "the name of the person(formal):" << std::endl;
	std::cout << lname << '\t' << fname << std::endl;
}