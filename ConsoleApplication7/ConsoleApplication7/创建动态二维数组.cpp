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
	//-----------创建动态二维数组---------------------//
	double **data = new double*[m];
	for (int i = 0; i < m; i++)
	{
		data[i] = new double[n];
	}
	//------------初始化动态二维数组------------------//
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			data[i][j] = i*n + j;
		}
	}
	//------------打印动态二维数组---------------------//
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << data[i][j] << '\t';
		}
		cout << endl;
	}
	//-----------------释放指针------------------------//
	for (int i = 0; i < m; i++)
	{
		delete [] data[i];
	}
	delete [] data;
	cin.get();
	cin.get();
	return 0;
}