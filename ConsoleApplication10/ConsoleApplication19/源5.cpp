#include<iostream>
using namespace std;
template<typename T>
T max(const T arr[]);
const int size = 5;

int main()
{
	int arr1[size] = { 1, 10, 3, 67, 5 };
	double arr2[size] = { 2.0, 2.45, 4.67, 34.1, 7.8 };
	cout << "最大的整数值：";
	cout << max(arr1) << endl;
	cout << "最大的浮点数：";
	cout << max(arr2) << endl;
	return 0;
}

template<typename T>
T max(const T arr[])
{
	T max = arr[0];
	for (int i = 1; i < size; i++)
	{
		if (arr[i]>max)
			max = arr[i];
	}
	return max;
}