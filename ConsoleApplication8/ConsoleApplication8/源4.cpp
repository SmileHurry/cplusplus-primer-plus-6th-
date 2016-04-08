#include<iostream>

using namespace std;
const int size = 20;
const int strsize = 40;
void showmenu();

int main()
{
	struct bop{
		char fullname[strsize];
		char title[strsize];
		char bopname[strsize];
		int preference;
	};
	bop *ps = new bop[size];
	cout << "please input the number of persion"<<"(less than "<<size<<"):";
	int persion;
	cin >> persion;
	cin.get();//这句很重要
	for (int i = 0; i < persion; i++)
	{
		cout << "bop " << i+1 << ":" << endl;
		cin.getline(ps[i].fullname,strsize);
		cin.getline(ps[i].title,strsize);
		cin.getline(ps[i].bopname,strsize);
		(cin >> ps[i].preference).get();//这句很重要
	}
	showmenu();
	cout << "Enter your choice:";
	char ch;
	while (cin>>ch && ch != 'q')
	{
		switch (ch)
		{
		case 'a':
			for (int i = 0; i < persion; i++)
			{
				cout << ps[i].fullname <<endl;
			}; break;
		case 'b':
			for (int i = 0; i < persion; i++)
			{
				cout << ps[i].title<< endl;
			}; break;
		case 'c':
			for (int i = 0; i < persion; i++)
			{
				cout << ps[i].bopname << endl;
			}; break;
		case 'd':
			for (int i = 0; i < persion; i++)
			{
				if (ps[i].preference == 0)
					cout << ps[i].fullname << endl;
				else if (ps[i].preference == 1)
					cout << ps[i].title << endl;
				else if (ps[i].preference == 2)
					cout << ps[i].bopname << endl;
			}; break;
		}
	cout << "Next choice:";
	}
	//if (cin.fail() == true)
	//	cout << "please input a char!!!\n";
	if (ch == 'q')
		cout << "Bye!\n";
	delete [] ps;
	return 0;
}

void showmenu()
{
	cout << "Benevolent Order of Programmers Report\n"
		<< "a.display by name          b.display by title\n"
		<< "c.display by bopname       d.display by preference\n"
		<< "q.quit\n";
}