#include<iostream>
#include"abcdma.h"
#include<cstring>

abcDMA::abcDMA(const char *l, int r)
{
	label = new char[std::strlen(l) + 1];
	std::strcpy(label, l);
	rating = r;
}
abcDMA::abcDMA(const abcDMA & rs)
{
	label = new char[std::strlen(rs.label) + 1];
	std::strcpy(label, rs.label);
	rating = rs.rating;
}
abcDMA::~abcDMA()
{
	delete[] label;
}
void abcDMA::view() const
{
	std::cout << *this;
}
abcDMA & abcDMA::operator=(const abcDMA &rs)
{
	if (this == &rs)
		return *this;
	else
	{
		delete[] label;
		label = new char[std::strlen(rs.label) + 1];
		std::strcpy(label, rs.label);
		rating = rs.rating;
		return *this;
	}
}
std::ostream & operator<<(std::ostream &os, const abcDMA &rs)
{
	os << "label is:" << rs.label << std::endl;
	os << "rating is:" << rs.rating << std::endl;
	return os;
}
//-------------------------------------------------------------------------//
void baseDMA::view() const
{
	std::cout << *this;
}
baseDMA & baseDMA::operator=(const baseDMA &rs)
{
	if (this == &rs)
		return *this;
	else
	{
		abcDMA::operator=(rs);
		return *this;
	}
}
std::ostream & operator<<(std::ostream &os, const baseDMA &rs)
{
	os << (const abcDMA &)rs;
	return os;
}
//--------------------------------------------------------------------------//
lacksDMA::lacksDMA(const char *c, const char *l, int r) :abcDMA(l,r)
{
	std::strncpy(color, c, COL_LEN-1);
	color[COL_LEN-1] = '\0';
}
lacksDMA::lacksDMA(const char *c, const abcDMA & rs) : abcDMA(rs)
{
	std::strncpy(color, c, COL_LEN-1);
	color[COL_LEN-1] = '\0';
}
void lacksDMA::view() const
{
	std::cout << *this;
}
lacksDMA & lacksDMA::operator=(const lacksDMA &rs)
{
	if (this == &rs)
		return *this;
	else
	{
		abcDMA::operator=(rs);
		std::strcpy(color, rs.color);
		return *this;
	}
}
std::ostream & operator<<(std::ostream &os, const lacksDMA &rs)
{
	os << (const abcDMA &)rs;
	os << "color is:" << rs.color << std::endl;
	return os;
}
//---------------------------------------------------------------------------//
hasDMA::hasDMA(const char *s, const char *l, int r) :abcDMA(l,r)
{
	style = new char[std::strlen(s) + 1];
	std::strcpy(style, s);
}
hasDMA::hasDMA(const char *s, const abcDMA &rs) : abcDMA(rs)
{
	style = new char[std::strlen(s) + 1];
	std::strcpy(style, s);
}
hasDMA::hasDMA(const hasDMA &hs) : abcDMA(hs)
{
	style = new char[std::strlen(hs.style) + 1];
	std::strcpy(style, hs.style);
}
hasDMA & hasDMA::operator=(const hasDMA &rs)
{
	if (this == &rs)
		return *this;
	else
	{
		abcDMA::operator=(rs);
		delete[] style;
		style = new char[std::strlen(rs.style) + 1];
		std::strcpy(style, rs.style);
		return *this;
	}
}
std::ostream & operator<<(std::ostream &os, const hasDMA &rs)
{
	os << (const abcDMA &)rs;
	os << "style is:" << rs.style << std::endl;
	return os;
}
void hasDMA::view() const
{
	std::cout << *this;
}
hasDMA::~hasDMA()
{
	delete[] style;
}