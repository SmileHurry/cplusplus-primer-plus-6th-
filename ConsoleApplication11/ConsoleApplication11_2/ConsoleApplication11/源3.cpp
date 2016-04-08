#include<iostream>
#include<new>
#include<cstring>
const int BUF = 512;
const int N = 2;
char buffer[BUF];
struct chaff
{
	char dross[20];
	int slag;
};

int main()
{
	using namespace std;
	chaff *ps = new chaff[N];
	chaff *ps1 = new (buffer) chaff[N];
	char str[20];
	int n;
	for (int i = 0; i < N; i++)
	{
		cout << "please input dross:";
		cin.getline(str,20);
		strcpy(ps[i].dross, str);
		strcpy(ps1[i].dross, str);
		cout << "please input slag:";
		cin >> n;
		ps[i].slag= n;
		ps1[i].slag = n;
		cin.get();
	}
	cout << "---------------------------------\n";
	cout << "常规new运算符分配缓冲区:\n";
	for (int i = 0; i < N; i++)
	{
		cout << ps[i].dross << '\t' << ps[i].slag << endl;
	}
	cout << "静态数组buffer用作缓冲区:\n";
	for (int i = 0; i < N; i++)
	{
		cout << ps1[i].dross << '\t' << ps1[i].slag << endl;
	}
	delete[]ps;
	delete[]ps1;
	return 0;
}