#include<iostream>
#include<string>
//const int size = 20;
//const int num = 2;
using namespace std;
struct car
{
	string changshang;
	int nianfen;
};
int main()
{
	cout << "How many cars do you wish to catalog？";
	int m;
	cin >> m;
	cin.get();
	car *ps = new car[m];
	for (int i = 0; i < m; i++)
	{
		cout << "Car #:" << i+1 << endl;
		cout << "Please enter the make: ";
		getline(cin, ps[i].changshang);
		cout << "Please enter thr year made: ";
		cin >> ps[i].nianfen;
		cin.get();
	}
	cout << "Here is your collection:" << endl;
	for (int i = 0; i < m; i++)
	{
		cout << ps[i].nianfen << " " << ps[i].changshang << endl;
		//cout << (*(ps + i)).nianfen << " " << ps[i].changshang << endl;
		//cout << (ps + i)->nianfen << " " << ps[i].changshang << endl;
		//（后两种cout表示方法均可以替代第一种cout方法，输出一样）
	}
	delete [] ps;
	cin.get();
	cin.get();
	return 0;

}