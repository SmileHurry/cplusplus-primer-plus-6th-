#include<iostream>
#include<fstream>
#include<cstdlib>

const int size = 20;
int main()
{
	using namespace std;
	cout << "请输入文件名：";
	char filename[size];
	cin.getline(filename, size);
	ifstream inputfile;
	inputfile.open(filename);
	if (!inputfile.is_open())
	{
		cout << "打开不了文件：" << filename <<",请检查文件名."<<endl;
		cout << "程序中断。" << endl;
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
		cout << "该文件总共有：" << count << " 个字符.\n";
	return 0;
}