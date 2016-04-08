#include<iostream>

template<typename T>
T sumarray(T arr[],int n);

template<typename T>
T sumarray(T *arr[],int n);
struct debts{
	char name[50];
	double amount;
};
int main()
{
	using namespace std;
	int things[6] = { 13, 31, 103, 301, 310, 130 };
	debts mr_E[3] = { { "Ima Wolfe", 2400.0 },
	{ "Ura Foxe", 1300.0 },
	{ "Iby Stout", 1800.0 } };
	double *pd[3];
	for (int i = 0; i < 3; i++)
	{
		pd[i] = &mr_E[i].amount;
	}
	cout << "Listing MR.E's sum of things: " << sumarray(things, 6) << endl;
	cout << "Listing MR.E's sum of debts: " << sumarray(pd, 3) << endl;

}
template<typename T>
T sumarray(T arr[],int n)
{
	T sum = 0;
	for (int i = 0; i < n; i++)
		sum = sum + arr[i];
	return sum;
}

template<typename T>
T sumarray(T *arr[], int n)
{
	T sum = 0;
	for (int i = 0; i < n; i++)
		sum = sum + *arr[i];
	return sum;
}