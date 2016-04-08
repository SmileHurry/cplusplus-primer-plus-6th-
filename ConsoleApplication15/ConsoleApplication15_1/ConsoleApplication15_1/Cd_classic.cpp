#include<iostream>
#include<cstring>
#include"classic.h"

Cd::Cd(char *s1, char *s2, int n, double x)
{
	std::strncpy(performers, s1, 49);
	performers[49] = '\0';
	std::strncpy(label, s2, 19);
	label[19] = '\0';
	selections = n;
	playtime = x;
}
Cd::Cd(const Cd &d)
{
	std::strcpy(performers, d.performers);
	std::strcpy(label, d.label);
	selections = d.selections;
	playtime = d.playtime;
}
Cd::Cd()
{
	std::strcpy(performers, "no name");
	std::strcpy(label, "no label");
	selections = 0;
	playtime = 0.0;
}
classic::classic(char *zp, char *s1, char *s2, int n, double x) :Cd(s1, s2, n, x)
{
	std::strncpy(zuopin, zp, 99);
	zuopin[99] = '\0';
}
classic::classic(char *zp, const Cd &d) : Cd(d)
{
	std::strncpy(zuopin, zp, 99);
	zuopin[99] = '\0';
}
classic::classic() : Cd()
{
	std::strcpy(zuopin, "no zuopin");
}
void Cd::Report() const
{
	std::cout << "The performer are:" << performers << std::endl;
	std::cout << "The label is:" << label << std::endl;
	std::cout << "The selections is:" << selections << std::endl;
	std::cout << "The playertime is:" << playtime << std::endl;
}
void classic::Report() const
{
	Cd::Report();
	std::cout << "The zuopin is:" << zuopin << std::endl;
}

//以下两个函数要不要都无所谓，因为基类构造函数并没有初始化指针成员，派生类够到函数也没有初始化指针成员。
//classic & classic::operator=(const classic &c)
//{
//	Cd::operator=(c);
//	std::strcpy(zuopin, c.zuopin);
//	return *this;
//}
//Cd & Cd::operator=(const Cd &d)
//{
//	std::strcpy(performers, d.performers);
//	std::strcpy(label, d.label);
//	selections = d.selections;
//	playtime = d.playtime;
//	return *this;
//}
