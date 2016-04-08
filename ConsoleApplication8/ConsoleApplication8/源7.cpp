#include<iostream>
#include<cctype>
const int size = 15;
int main()
{
	using namespace std;
	char juzi[size];
	int count1 = 0, count2 = 0, count3 = 0;
	cout << "Enter words(q to quit):" << endl;
	while (cin >> juzi)
	{
		if (juzi[0] == 'q'&&strlen(juzi) == 1)
			break;
		else if (isalpha(juzi[0]))
		{
			if ((juzi[0] == 'a') || (juzi[0] == 'e') || (juzi[0] == 'i' || juzi[0] == 'o') || (juzi[0] == 'u'))
				count1++;
			else
				count2++;
		}
		else count3++;
	}
	cout << count1 << " words beginning with vowels\n";
	cout << count2 << " words beginning with consonants\n";
	cout << count3 << " others\n";
	return 0;
}