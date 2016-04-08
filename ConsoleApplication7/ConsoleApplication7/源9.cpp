#include<iostream>
#include<string>

int main()
{
	using namespace std;
	string word;
	cout << "Enter words(to stop , type the word done):" << endl;
	int sum = 0;
	cin >> word;
	while (word!="done")
	{
		sum++;
		//cout << "sum=" << sum << endl;
		cin >> word;
	}
	cout << "You entered a total of " << sum << " words." << endl;
	cin.get();
	cin.get();
	long wait = 0;
	while (wait < 10000000000)
		wait++;
	return 0;
}