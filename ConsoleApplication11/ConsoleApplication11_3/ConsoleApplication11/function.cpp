#include<iostream>
#include"sale.h"
//using SALES::QUARTERS;
//using SALES::Sales;
//using SALES::setSales;
//using SALES::showSales;
namespace SALES
{
	void setSales(Sales & s, const double ar[], int n)
	{
		if (n > QUARTERS)
			n = QUARTERS;
		double sum = 0;
		s.max = ar[0];
		s.min = ar[0];
		for (int i = 0; i < n; i++)
		{
			s.sales[i] = ar[i];
			sum += s.sales[i];
			if (s.sales[i]>s.max)
				s.max = s.sales[i];
			if (s.sales[i] <s.min)
				s.min = s.sales[i];
		}
		s.average = sum / n;
		for (int i = n; i < QUARTERS; i++)
			s.sales[i] = 0.0;
	}
	void setSales(Sales & s)
	{
		std::cout << "please input sales:" << std::endl;
		double m;
		for (int i = 0; i < QUARTERS; i++)
		{
			std::cout << "sales" << "[" << i << "]" << "=";
			std::cin >> m;
			s.sales[i] = m;
		}
		double sum = 0;
		s.max = s.sales[0];
		s.min = s.sales[0];
		for (int i = 0; i < QUARTERS; i++)
		{
			sum += s.sales[i];
			if (s.sales[i]>s.max)
				s.max = s.sales[i];
			if (s.sales[i] <s.min)
				s.min = s.sales[i];
		}
		s.average = sum / QUARTERS;
	}
	void showSales(const Sales & s)
	{
		int n = int(sizeof(s.sales) / sizeof(s.sales[0]));
		std::cout << "the output of sales:" << std::endl;
		for (int i = 0; i < n; i++)
		{
			std::cout << "sales" << "[" << i << "]" << "=" << s.sales[i] << std::endl;
		}
		std::cout << "the average:" << s.average << std::endl;
		std::cout << "the max:" << s.max << std::endl;
		std::cout << "the min:" << s.min << std::endl;
	}
}

