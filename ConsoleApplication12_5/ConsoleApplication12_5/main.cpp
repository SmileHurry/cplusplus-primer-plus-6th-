#include<iostream>
#include<cctype>
#include"stack.h"
int main()
{
	using namespace std;
	stack st;
	char ch;
	Item po;
	cout << "please enter:A/a for push\t  B/b for pop \t  Q/q for qiut:";
	while (cin >> ch&&ch != 'q'&&toupper(ch) !='Q')
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
			cout << "enter a po to add:" << endl;
			cout << "enter the fullname:";
			cin.getline(po.fullname, size);
			cout << "enter the payment:";
			cin >> po.payment;
			if (st.isfull())
				cout << "stack already full\n";
			else
				st.push(po);
			break;
		case 'B':
		case 'b':
			if (st.isempty())
				cout << "stack already empty\n";
			else
			{
				st.pop(po);
			}
			break;
		default:
			break;
		}
	cout << "please enter A/a for push\t  B/b for pop \t  Q/q for qiut:";
	}
	cout << "bye!\n";
	return 0;
}