#include<iostream>
#include<cstring>

int main()
{
	using namespace std;
	char word[20];
	cout << "Enter words(to stop , type the word done):" << endl;
	int sum = 0;
	cin >> word;
	while (strcmp(word,"done"))
	{
		sum++;
		cout << "sum=" << sum << endl;
		cin >> word;
	}
	cout << "You entered a total of " << sum << " words." << endl;
	cin.get();
	cin.get();
	return 0;
}