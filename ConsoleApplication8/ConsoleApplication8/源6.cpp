#include<iostream>
#include<string>

int main()
{
	using namespace std;
	struct obj{
		string xingming;
		double kuanxiang;
	};
	cout << "����������ߵ���Ŀ��";
	int shumu;
	cin >> shumu;
	cin.get();
	obj *ps = new obj[shumu];
	for (int i = 0; i <shumu; i++)
	{
		cout << "����� " << i+1 << " ���˵���Ϣ��" << endl;
		getline(cin, ps[i].xingming);
		(cin >> ps[i].kuanxiang).get();
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
	if (count1==0)
		cout << "none." << endl;
	cout << "Patrons:" << endl;
	for (int i = 0; i <shumu; i++)
	{
		if (ps[i].kuanxiang<=10000)
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