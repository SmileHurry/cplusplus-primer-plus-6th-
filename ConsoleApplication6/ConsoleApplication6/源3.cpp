#include<iostream>
#include<cstring>
const int size = 40;

int main()
{
	using namespace std;
	char ming[size];
	cout << "Enter your first name:";
	cin.getline(ming, size);
	char xing[size];
	cout << "Enter your last name:";
	cin.getline(xing, size);
	char xingming[2 * size + 1];
	strcpy_s(xingming, xing);
	strcat_s(xingming, ", ");
	strcat_s(xingming, ming);
	xingming[2 * size] = '\0';
	cout << "Here's the information in a single string:"<<xingming<<endl;
	cin.get();
	cin.get();
	return 0;

}