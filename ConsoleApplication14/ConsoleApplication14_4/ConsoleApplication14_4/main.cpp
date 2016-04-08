#include<iostream>
#include"stack.h"
#include<cctype>

int main()
{
	using namespace std;
	stack st;
	char ch;
	unsigned long po;
	cout << "please enter Ato add a purchase order,\n"
		<< "P to process a PO, or Q to quit.\n";
	while (cin >> ch&&toupper(ch) != 'Q')
	{
		while (cin.get() != '\n')
			continue;
		if (!isalpha(ch))
		{
			cout << '\a';
			continue;
		}
		switch (ch)
		{
		case 'A':
		case 'a':
			cout << "enter a PO number to add: ";
			cin >> po;
			if (st.isfull())
				cout << "stack already full\n";
			else
				st.push(po);
			break;
		case 'P':
		case 'p':
			if (st.isempty())
				cout << "stack already empty\n";
			else
			{
				st.pop(po);
				cout << "PO #" << po << " popped\n";
			}
			break;
		}
		cout << "please enter Ato add a purchase order,\n"
			<< "P to process a PO, or Q to quit.\n";
	}
	stack st1;
	st1 = stack(st);
	while (cin >> ch&&toupper(ch) != 'Q')
	{
		while (cin.get() != '\n')
			continue;
		if (!isalpha(ch))
		{
			cout << '\a';
			continue;
		}
		switch (ch)
		{
		case 'A':
		case 'a':
			cout << "enter a PO number to add: ";
			cin >> po;
			if (st1.isfull())
				cout << "stack already full\n";
			else
				st1.push(po);
			break;
		case 'P':
		case 'p':
			if (st1.isempty())
				cout << "stack already empty\n";
			else
			{
				st1.pop(po);
				cout << "PO #" << po << " popped\n";
			}
			break;
		}
		cout << "please enter Ato add a purchase order,\n"
			<< "P to process a PO, or Q to quit.\n";
	}
}