#include<iostream>
#include<string>
#include<cctype>
using namespace std;
void change(string & str);
int main()
{
	cout << "Enter a string(q to quit):";
	string str;
	while (getline(cin, str) && str != "q")
	{
		change(str);
		cout << "Nest string(q to quit):";
	}
	cout << "Bye."<<endl;
}

void change(string & str)
{
	for (int i = 0; i<str.length(); i++)
		str[i] = toupper(str[i]);
	cout << str << endl;
}