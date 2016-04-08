#include<iostream>
#include<cstring>
using namespace std;
template<typename T>
T maxn(T arr[], int n);

template <> char* maxn(char* arr[], int n);

int main()
{
	int arr1[] = { 2, 34, 62, 7, 12, 4 };
	double arr2[] = { 2.34, 56.45, 67.1, 89.0 };
	cout << "��������Ϊ�� " << maxn(arr1,sizeof(arr1)/sizeof(arr1[0]))<< endl;
	cout << "���ĸ�����Ϊ�� " << maxn(arr2, sizeof(arr2)/sizeof(arr2[0])) << endl;
	char * arr[] = { "aaaa", "bbbbbb", "cc", "ffffffffff", "kkkk", "sss" };
	cout << "��󳤶��ַ����ĵ�ַΪ�� " << (void*)maxn(arr, sizeof(arr) / sizeof(arr[0])) << endl;
	cout << "��󳤶��ַ���Ϊ�� " << maxn(arr, sizeof(arr) / sizeof(arr[0])) << endl;
	
}

template<typename T>
T maxn(T arr[], int n)
{
	T max = arr[0];
	for (int i = 1; i < n; i++)
	{
		if (arr[i]>max)
			max = arr[i];
	}
	return max;
}
template <> char* maxn(char* ar[], int n)
{
	char *max_length = ar[0];
	int i;
	for (i = 1; i < n; i++)
	{
		if (strlen(ar[i])>strlen(max_length))
			max_length = ar[i];
	}
	return max_length;
}