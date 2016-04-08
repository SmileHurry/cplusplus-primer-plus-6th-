#include<iostream>
#include"abcdma.h"

const int number = 4;

int main()
{
	using namespace std;
	abcDMA *p_client[number];
	char temp[40];
	int r;
	char kind;
	char col[40];
	char sty[40];
	for (int i = 0; i < number; i++)
	{
		cout << "enter label:";
		cin.getline(temp, 40);
		cout << "enter rating:";
		cin >> r;
		cout << "enter 1 for baseDMA or "
			<< "2 for lacksDMA or "
			<< "3 for hasDMA: ";
		while (cin >> kind && (kind != '1'&&kind != '2'&&kind != '3'))
			cout << "enter either 1 or 2 or 3: ";
		while (cin.get() != '\n')
			continue;
		if (kind == '1')
			p_client[i] = new baseDMA(temp, r);
		else if (kind == '2')
		{
			cout << "enter color: ";
			cin.getline(col, 40);
			p_client[i] = new lacksDMA(col, temp, r);
		}
		else
		{
			cout << "enter style: ";
			cin.getline(sty, 40);
			p_client[i] = new hasDMA(sty, temp, r);
		}
	}
	cout << "---------------------------------------------------------\n";
	for (int i = 0; i < number; i++)
	{
		p_client[i]->view();
		cout << endl;
	}
	for (int i = 0; i < number; i++)
	{
		delete p_client[i];
	}
	cout << "Done.\n";
	return 0;
}