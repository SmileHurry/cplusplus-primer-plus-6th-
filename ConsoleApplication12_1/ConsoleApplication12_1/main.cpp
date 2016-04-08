#include<iostream>
#include"bank.h"

const int size1 = 3;
int main()
{
	bank banks[size1] = {
		bank("zhangqi", "420071", 123),
		bank("xiekun", "420072", 234),
		bank("dangchenlang", "420073", 345)
	};
	std::cout << "cash holding:" << std::endl;
	for (int i = 0; i < size1; i++)
	{
		banks[i].show();
	}
	std::cout << "-------------------------------" << std::endl;
	std::cout << "cash deposit:" << std::endl;
	double money;
	for (int i = 0; i < size1; i++)
	{
		std::cout << "how much do you want to deposit:";
		std::cin >> money;
		banks[i].deposit(money);
		banks[i].show();
	}
	std::cout << "-------------------------------" << std::endl;
	std::cout << "cash withdraw:" << std::endl;
	for (int i = 0; i < size1; i++)
	{
		std::cout << "how much do you want to withdraw:";
		std::cin >> money;
		banks[i].withdraw(money);
		banks[i].show();
	}
	return 0;
}