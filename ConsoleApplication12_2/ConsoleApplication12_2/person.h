#ifndef PERSON_H_
#define PERSON_H_

#include<iostream>
#include<string>
class person
{
private:
	static const int LIMIT = 25;
	std::string lname;
	char fname[LIMIT];
public:
	person(){ lname = ""; fname[0] = '\0'; }
	person(const std::string &ln, const char *fn = "heyyou");
	~person();
	void show() const;
	void formalshow() const;
};

#endif