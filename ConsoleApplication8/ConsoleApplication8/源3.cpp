#include<iostream>
void showmenu();
using namespace std;

int main()
{
	showmenu();
	char choice;
	cout << "please enter a c, p, t or g:";
	cin >> choice;
	while (choice != 'f'&&choice != 'F')
	{
		switch (choice)
		{
			case 'c':
			case 'C':cout << "a maple is a carnivore\n"; 
					 break;
			case 'p':
			case 'P':cout << "a maple is a pianist\n";
					 break;
			case 't':
			case 'T':cout << "a maple is a tree\n";
					 break;
			case 'g':
			case 'G':cout << "a maple is a game\n";
					 break;
			default:cout << "please enter a c, p, t or g:";
		}
		cin >> choice;
	}
	return 0;
}

void showmenu()
{
	cout<< "please enter one of the following choices:\n"
		<< "c)carnivore               p)pianist\n"
		<< "t)tree                    g)game\n"
		<< "f\n";
}