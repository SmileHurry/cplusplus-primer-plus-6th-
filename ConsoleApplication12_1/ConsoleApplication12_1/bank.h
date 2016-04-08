#ifndef BANK_H_
#define BANK_H_

class bank
{
private:
	static const int size = 40;
	char name[size];
	char acctnum[size];
	double balance;
public:
	bank(const char *client, const char *num, double bal = 1.0);
	void show() const;
	void deposit(double cash);
	void withdraw(double cash);
};
#endif