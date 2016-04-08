#include"Cow.h"
#include<iostream>
#include<cstring>

Cow::Cow()
{
	strcpy(name, "no name");
	hobby = new char[1];
	hobby[0] = '\0';
	//hobby = nullptr;
	weight = 0.0;
}
Cow::Cow(const char *nm, const char *ho, double wt)
{
	if (strlen(nm)<20)
		std::strcpy(name, nm);
	else
	{
		std::strncpy(name, nm, 20);
		name[19] = '\0';
	}
	hobby=new char[std::strlen(ho)+1];
	std::strcpy(hobby, ho);
	weight = wt;
}
Cow::Cow(const Cow &c)
{
	std::strcpy(name, c.name);
	hobby = new char[std::strlen(c.hobby) + 1];
	std::strcpy(hobby, c.hobby);
	weight = c.weight;
}
Cow::~Cow()
{
	//std::cout << (*this).name << std::endl;
	delete[] hobby;
}
Cow & Cow::operator=(const Cow &c)
{
	if (this == &c)
		return *this;
	delete[] hobby;
	std::strcpy(name, c.name);
	hobby = new char[std::strlen(c.hobby + 1)];
	std::strcpy(hobby, c.hobby);
	weight = c.weight;
}
void Cow::ShowCow() const
{
	std::cout << "the name of the cow is:" << name << std::endl;
	std::cout << "the hobby of the cow is:" << hobby << std::endl;
	std::cout << "the weight of the cow is:" << weight << std::endl;
}