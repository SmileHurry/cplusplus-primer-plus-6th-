#include<iostream>
#include"sale.h"

//using SALES::Sales;
//using SALES::setSales;
//using SALES::showSales;

namespace SALES
{
	sales::sales()
	{
		setSales();
	}
	sales::sales(const double ar[], int n)
	{
		if (n > QUARTERS)
			n = QUARTERS;
		double sum = 0;
		shell.max = ar[0];
		shell.min = ar[0];
		for (int i = 0; i < n; i++)
		{
			shell.sales[i] = ar[i];
			sum += shell.sales[i];
			if (shell.sales[i]>shell.max)
				shell.max = shell.sales[i];
			if (shell.sales[i] <shell.min)
				shell.min = shell.sales[i];
		}
		shell.average = sum / n;
		for (int i = n; i < QUARTERS; i++)
			shell.sales[i] = 0.0;
	}
	sales::~sales()
	{

	}
	void sales::setSales()
	{
		std::cout << "please input sales:" << std::endl;
		double m;
		for (int i = 0; i < QUARTERS; i++)
		{
			std::cout << "sales" << "[" << i << "]" << "=";
			std::cin >> m;
			shell.sales[i] = m;
		}
		double sum = 0;
		shell.max = shell.sales[0];
		shell.min = shell.sales[0];
		for (int i = 0; i < QUARTERS; i++)
		{
			sum += shell.sales[i];
			if (shell.sales[i]>shell.max)
				shell.max = shell.sales[i];
			if (shell.sales[i] <shell.min)
				shell.min = shell.sales[i];
		}
		shell.average = sum / QUARTERS;
	}
	void sales::showSales() const
	{
		int n = int(sizeof(shell.sales) / sizeof(shell.sales[0]));
		std::cout << "the output of sales:" << std::endl;
		for (int i = 0; i < n; i++)
		{
			std::cout << "sales" << "[" << i << "]" << "=" << shell.sales[i] << std::endl;
		}
		std::cout << "the average:" << shell.average << std::endl;
		std::cout << "the max:" << shell.max << std::endl;
		std::cout << "the min:" << shell.min << std::endl;
	}
}

