#include<iostream>
#include<string>
#include<fstream>
#include<cstdlib>

const int size = 20;

int main()
{
	using namespace std;
	struct obj{
		string xingming;
		double kuanxiang;
	};
	cout << "请输入文件名：";
	char filename[size];
	cin.getline(filename, size);
	ifstream infile;
	infile.open(filename);
	if (!infile.is_open())
	{
		cout << "打开不了文件：" << filename << ",请检查文件名." << endl;
		cout << "程序中断。" << endl;
		exit(EXIT_FAILURE);
	}
	int shumu;
	infile>> shumu;
	infile.get();
	obj *ps = new obj[shumu];
	for (int i = 0; i <shumu; i++)
	{
		//cout << "输入第 " << i + 1 << " 个人的信息：" << endl;
		getline(infile, ps[i].xingming);
		(infile >> ps[i].kuanxiang).get();
	}
	int count1 = 0;
	int count2 = 0;
	cout << "Grand Patrons:" << endl;
	for (int i = 0; i <shumu; i++)
	{
		if (ps[i].kuanxiang > 10000)
		{
			cout << ps[i].xingming << '\t' << ps[i].kuanxiang << endl;
			count1++;
		}
	}
	if (count1 == 0)
		cout << "none." << endl;
	cout << "Patrons:" << endl;
	for (int i = 0; i <shumu; i++)
	{
		if (ps[i].kuanxiang <= 10000)
		{
			cout << ps[i].xingming << '\t' << ps[i].kuanxiang << endl;
			count2++;
		}
	}
	if (count2 == 0)
		cout << "none." << endl;

	delete[] ps;
	return 0;
}