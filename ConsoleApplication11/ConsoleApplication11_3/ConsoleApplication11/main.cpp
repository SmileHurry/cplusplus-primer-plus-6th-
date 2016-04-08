#include<iostream>
#include"sale.h"

int main()
{
	using namespace SALES;
	Sales *ps = new Sales[2];
	std::cout << "-------------------------------------\n";
	setSales(ps[0]);
	std::cout << "setSales interactively version:\n";
	showSales(ps[0]);
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
	setSales(ps[1], arr, n);
	std::cout << "not setSales interactively version:\n";
	showSales(ps[1]);

	delete[] ps;
	delete[] arr;
	return 0;
}