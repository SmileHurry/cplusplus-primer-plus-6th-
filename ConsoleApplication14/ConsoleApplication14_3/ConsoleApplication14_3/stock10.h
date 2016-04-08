#ifndef STOCK10_H_
#define STOCK10_H_
#include<iostream>
class stock
{
private:
	char *company;
	long shares;
	double share_val;
	double total_val;
	void set_tot(){ total_val = shares*share_val; }
public:
	stock();
	stock(const char *s, long n = 0, double pr = 0.0);
	~stock();
	void buy(long num, double price);
	void sell(long num, double price);
	void update(double price);

	//add function protypes
	stock(const stock &st);
	stock & operator=(const stock & st);
	stock & operator=(const char *s);
	friend std::ostream & operator<<(std::ostream &os, const stock &st);
};
#endif 