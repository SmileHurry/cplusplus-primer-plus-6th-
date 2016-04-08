#include<iostream>
#include"string2.h"
#include<cctype>

int String::num_strings = 0;

String::String()
{
	len = 4;
	str = new char[1];
	str[0] = '\0';
	num_strings++;
}
String::String(const char *s)
{
	len = std::strlen(s);
	str = new char[len + 1];
	std::strcpy(str, s);
	num_strings++;
}
String::String(const String &st)
{
	len = st.len;
	str = new char[len + 1];
	std::strcpy(str, st.str);
	num_strings++;
}
String::~String()
{
	delete[] str;
}
String & String::operator=(const String &st)
{
	if (this == &st)
		return *this;
	delete[] str;
	len = st.len;
	str = new char[len + 1];
	std::strcpy(str, st.str);
	return *this;
}
String & String::operator=(const char *s)
{
	delete[] str;
	len = std::strlen(s);
	str = new char[len + 1];
	std::strcpy(str, s);
	return *this;
}
char & String::operator[](int i)
{
	return str[i];
}
const char & String::operator[](int i) const
{
	return str[i];
}
bool operator<(const String &st1, const String &st2)
{
	return (std::strcmp(st1.str, st2.str) < 0);
}
bool operator>(const String &st1, const String &st2)
{
	return st2 < st1;
}
bool operator==(const String &st1, const String &st2)
{
	return (std::strcmp(st1.str, st2.str) == 0);
}
std::ostream & operator<<(std::ostream &os, const String &st)
{
	os << st.str;
	return os;
}
std::istream & operator>>(std::istream &is, String &st)
{
	char temp[String::CINLIM];
	while (!is.get(temp, String::CINLIM))
	{
		std::cout << "empty line!!!,please input again!:";
		is.clear();
		is.get();
	}
	st = temp;
	while (is.get() != '\n')
		continue;
	return is;
}
int String::HowMany()
{
	return num_strings;
}


//added functions'defination:
String & String::operator+(const String st)
{
	std::strcat(str, st.str);
	len +=st.len;
	return *this;
}
String operator+(char *s, const String &st)
{
	char *temp = new char[std::strlen(s) + st.len + 1];
	std::strcpy(temp, s);
	std::strcat(temp, st.str);
	return temp;
}
String & String::stringup()
{
	for (int i = 0; i < len; i++)
	{
		str[i] = toupper(str[i]);
	}
	return *this;
}
String & String::stringlow()
{
	for (int i = 0; i < len; i++)
	{
		str[i] = tolower(str[i]);
	}
	return *this;
}
int String::has(const char c)
{
	int num = 0;
	for (int i = 0; i < len; i++)
	{
		if (str[i] == c)
			num++;
	}
	return num;
}