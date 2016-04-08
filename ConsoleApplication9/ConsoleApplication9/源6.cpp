#include<iostream>
const int length = 10;
int Fill_array(double ar[], int size);
void Show_array(const double ar[], int size);
void Reverse_array(double *begin, double *end);

int main()
{
	using namespace std;
	double array1[length];
	int true_size=Fill_array(array1, length);
	cout << "����������ǣ�" << endl;
	Show_array(array1, true_size);
	cout << "��ת������������ǣ�" << endl;
	Reverse_array(array1, array1 + true_size - 1);
	Show_array(array1, true_size);
	cout << "�ٴη�ת������������ǣ�" << endl;
	Reverse_array(array1+1, array1 + true_size - 2);
	Show_array(array1, true_size);
	return 0;
}

int Fill_array(double ar[], int size)
{
	using namespace std;
	int i;
	double temp;
	for ( i = 0; i < size; i++)
	{
		cout << "value " << i + 1 << " ��";
		if (!(cin >> temp))
		{
			cin.clear();
			while (cin.get() != '\n')
				continue;
			cout << "����Ϊ�ַ����������\n";
			break;
		}
		else
			ar[i] = temp;
	}
	return i;
}
void Show_array(const double ar[], int size)
{
	using namespace std;
	for (int i = 0; i < size; i++)
	{
		cout << ar[i] << '\t';
	}
	cout << endl;
}
void Reverse_array(double *begin, double *end)
{
	using namespace std;
	double temp;
	for (; begin < end; end--, begin++)
	{
		temp = *begin;
		*begin = *end;
		*end = temp;
	}

}