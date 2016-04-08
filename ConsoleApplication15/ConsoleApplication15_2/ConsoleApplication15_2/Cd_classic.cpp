#include<iostream>
#include<cstring>
#include"classic.h"

Cd::Cd(char *s1, char *s2, int n, double x)
{
	performers = new char[std::strlen(s1) + 1];
	std::strcpy(performers, s1);
	label = new char[std::strlen(s2) + 1];
	std::strcpy(label, s2);
	selections = n;
	playtime = x;
}
Cd::Cd(const Cd &d)
{
	performers = new char[std::strlen(d.performers) + 1];
	std::strcpy(performers, d.performers);
	label = new char[std::strlen(d.label) + 1];
	std::strcpy(label, d.label);
	selections = d.selections;
	playtime = d.playtime;
}
Cd::Cd()
{
	performers = new char[1];
	performers[0]= '\0';
	label = new char[1];
	label[0]= '\0';
	selections = 0;
	playtime = 0.0;
}
classic::classic(char *zp, char *s1, char *s2, int n, double x) :Cd(s1, s2, n, x)
{
	zuopin = new char[std::strlen(zp) + 1];
	std::strcpy(zuopin, zp);
}
classic::classic(char *zp, const Cd &d) : Cd(d)
{
	zuopin = new char[std::strlen(zp) + 1];
	std::strcpy(zuopin, zp);
}
classic::classic() : Cd()
{
	zuopin = new char[1];
	zuopin[0] = '\0';
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


Cd & Cd::operator=(const Cd &d)
{
	if (this == &d)
		return *this;
	else
	{
		delete[] performers;
		performers = new char[std::strlen(d.performers) + 1];
		std::strcpy(performers, d.performers);
		delete[] label;
		label = new char[std::strlen(d.label) + 1];
		std::strcpy(label, d.label);
		selections = d.selections;
		playtime = d.playtime;
		return *this;
	}

}
classic & classic::operator=(const classic &c)
{
	if (this == &c)
		return *this;
	else
	{
		Cd::operator=(c);
		delete[] zuopin;
		zuopin = new char[strlen(c.zuopin) + 1];
		std::strcpy(zuopin, c.zuopin);
		return *this;
	}
}
classic::classic(const classic & st) :Cd(st)
{
	zuopin = new char[std::strlen(st.zuopin) + 1];
	strcpy(zuopin, st.zuopin);
}
Cd::~Cd()
{
	delete[] performers;
	delete[] label;
}
classic::~classic()
{
	delete[] zuopin;
}


