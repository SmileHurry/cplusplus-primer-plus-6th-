#include<iostream>
#include"bank.h"
#include<cstring>
bank::bank(const char *client, const char *num, double bal)
{
	strcpy(name,client);
	strcpy(acctnum, num);
	balance = bal;
}
void bank::show() const
{
	std::cout << "name , account , cash:\n";
	std::cout << name << std::endl;
	std::cout << acctnum << std::endl;
	std::cout << balance << std::endl;
}
void bank::deposit(double cash)
{
	balance += cash;
}
void bank::withdraw(double cash)
{
	balance -= cash;
}