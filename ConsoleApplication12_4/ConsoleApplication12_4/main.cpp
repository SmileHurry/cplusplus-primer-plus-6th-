#include<iostream>
#include"sale.h"

int main()
{
	using namespace SALES;
	sales ps;
	std::cout << "-------------------------------------\n";
	std::cout << "setSales interactively version:\n";
	ps.showSales();
	std::cout << "-------------------------------------\n";
	std::cout << "please input the length of array:";
	int n;
	std::cin >> n;
	double *arr = new double[n];
	std::cout << "please input the terms of array:\n";
	for (int i = 0; i < n; i++)
	{
		std::cout << "arr" << "[" << i << "]" << "=";
		std::cin >> arr[i];
	}
	sales ps1(arr, n);
	std::cout << "not setSales interactively version:\n";
	ps1.showSales();
	return 0;
}