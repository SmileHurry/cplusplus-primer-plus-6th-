#ifndef CLASSIC_H_
#define CLASSIC_H_

#include"Cd.h"
class classic:public Cd
{
private:
	char zuopin[100];
public:
	classic(char *zp, char *s1, char *s2, int n, double x);
	classic(char *zp, const Cd &d);
	classic();
	virtual void Report() const;
	//classic & operator=(const classic &c);
};

#endif