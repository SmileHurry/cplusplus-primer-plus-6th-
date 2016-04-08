#include"poker.h"
#include<string>
#include<iostream>
#include<cstdlib>
void person::show() const
{
	data();
}
void person::data() const
{
	std::cout << "fullname is: " << firstname << " " << lastname << std::endl;
}
//----------------------------------//
double gunslinger::draw()
{
	return rand() % 60 + 1;
}
void gunslinger::show() const
{
	person::show();
	data();
}
void gunslinger::data() const
{
	std::cout << "kehen is : " << keihen;
}
//---------------------------------//
void pokerplayer::show() const
{
	data();
}
void pokerplayer::data() const
{
	person::data();
}
//---------------------------------//
double baddude::gdraw()
{
	return rand() % 60 + 1;
}
double baddude::cdraw()
{
	return rand() % 52 + 1;
}
void baddude::show() const
{
	//person::show();
	data();
}
void baddude::data() const
{
	gunslinger::data();
	pokerplayer::data();
}