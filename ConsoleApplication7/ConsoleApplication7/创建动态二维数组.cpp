#include<iostream>

int main()
{
	using namespace std;
	cout << "please input m:";
	int m;
	cin >> m;
	cout << "please input n:";
	int n;
	cin >> n;
	//-----------������̬��ά����---------------------//
	double **data = new double*[m];
	for (int i = 0; i < m; i++)
	{
		data[i] = new double[n];
	}
	//------------��ʼ����̬��ά����------------------//
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			data[i][j] = i*n + j;
		}
	}
	//------------��ӡ��̬��ά����---------------------//
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << data[i][j] << '\t';
		}
		cout << endl;
	}
	//-----------------�ͷ�ָ��------------------------//
	for (int i = 0; i < m; i++)
	{
		delete [] data[i];
	}
	delete [] data;
	cin.get();
	cin.get();
	return 0;
}