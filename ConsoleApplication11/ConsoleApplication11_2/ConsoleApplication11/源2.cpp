#include<iostream>
#include<string>
const int size = 10;
void strcount(const std::string str);

int main()
{
	using namespace std;
	string input;
	char next;

	cout << "enter a line:";
	while(getline(cin, input)&&input!="")
	{
		strcount(input);
		cout << "please enter a new line:";
	}
	if (input == "")
		cout << "an empty line.\n";
	cout << "bye\n";
	return 0;
}
void strcount(const std::string str)
{
	using namespace std;
	static int total = 0;
	int count = 0;

	cout << "\"" << str << "\" contains ";
	for (int i = 0; i < str.length(); i++)
	{
		if (str[i] != ' ')
			count++;
	}
	//count = int(str.length());
	total += count;
	cout << count << " characters\n";
	cout << total << " characters total\n";
}