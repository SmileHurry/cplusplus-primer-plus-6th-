#include<iostream>
//#include<string>


int main()
{
	using namespace std;
	cout << "Enter number of rows:" << endl;
	const int row = 5;
	//cin >> row;
	char (*p)[row] = new char[row][row];
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < row; j++)
		{
			if (j>=row-(i+1))
			p[i][j] = '*';
			else p[i][j] = '.';
		}
	}

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < row; j++)
		{
			cout << p[i][j];
			if (j ==( row-1))
				cout << endl;
		}
	}
	delete[] p;
	cin.get();
	cin.get();
	return 0;
}