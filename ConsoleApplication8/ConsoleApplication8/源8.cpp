#include<iostream>
#include<fstream>
#include<cstdlib>

const int size = 20;
int main()
{
	using namespace std;
	cout << "�������ļ�����";
	char filename[size];
	cin.getline(filename, size);
	ifstream inputfile;
	inputfile.open(filename);
	if (!inputfile.is_open())
	{
		cout << "�򿪲����ļ���" << filename <<",�����ļ���."<<endl;
		cout << "�����жϡ�" << endl;
		exit(EXIT_FAILURE);
	}
	int count=0;
	char ch;
	inputfile >> ch;
	while (inputfile.good())
	{
		count++;
		inputfile >> ch;
	}
	if (inputfile.eof())
		cout << "End of file reached.\n";
	else if (inputfile.fail())
		cout << "Input terminated by data mismatch.\n";
	else
		cout << "Input terminated for unkonwn reason.\n";
	if (count == 0)
		cout << "no data processed.\n";
	else
		cout << "���ļ��ܹ��У�" << count << " ���ַ�.\n";
	return 0;
}