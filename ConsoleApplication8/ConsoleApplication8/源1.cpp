#include<iostream>
#include<cctype>
int main()
{
	using namespace std;
	cout << "please input text:" << endl;
	char ch;
	cin.get(ch);
	while (ch != '@')
	{
		if (!isdigit(ch))
		{
			if (isupper(ch))
				ch=tolower(ch);
			else
				ch=toupper(ch);
			cout << ch;
		}
		cin.get(ch);
	}
	cin.get();
	cin.get();
	return 0;
}