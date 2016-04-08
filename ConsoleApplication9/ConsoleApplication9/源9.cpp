#include<iostream>
using namespace std;
const int SLEN = 30;
struct student{
	char fullname[SLEN];
	char hobby[SLEN];
	int ooplevel;
};
int getinfo(student pa[], int n);
void display1(student st);
void display2(const student *ps);
void display3(const student pa[], int n);

int main()
{
	cout << "enter class size: ";
	int class_size;
	cin >> class_size;
	while (cin.get() != '\n')
		continue;
	student * ptr_stu = new student[class_size];
	int entered = getinfo(ptr_stu, class_size);
	for (int i = 0; i < entered; i++)
	{
		display1(ptr_stu[i]);
		display2(&ptr_stu[i]);
	}
	display3(ptr_stu, entered);
	delete[] ptr_stu;
	cout << "Done\n";
	return 0;
}
int getinfo(student pa[], int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		cout << "student " << i + 1 << ":" << endl;
		cout << "enter your fullname:";
		cin.getline(pa[i].fullname, SLEN);//注意在这里也可以使用cin.get(char *,size),但要注意结合cin.get()使用；
		if (pa[i].fullname[0]!= '\n')//注意这里到底是\0还是\n
		{
			cout<<"enter hobby:";
			cin.getline(pa[i].hobby, SLEN);
			cout << "enter ooplevel:";
			cin >> pa[i].ooplevel;
			cin.get();
		}
		else
			break;
	   //cin.get(pa[i].fullname, SLEN);
	   //if (pa[i].fullname[0] != '\0')
	   //{
	   //	cin.get();
	   //	cout << "enter hobby:";
	   //	cin.get(pa[i].hobby, SLEN);
	   //	cin.get();
	   //	cout << "enter ooplevel:";
	   //	cin >> pa[i].ooplevel;
	   //	cin.get();
	   //}
	   //else
	   //  break;
	}
	return i;
}
void display1(student st)
{
	cout << st.fullname << endl;
	cout << st.hobby << endl;
	cout << st.ooplevel << endl;
}
void display2(const student *ps)
{
	cout << ps->fullname << endl;
	cout << ps->hobby << endl;
	cout << ps->ooplevel << endl;
}
void display3(const student pa[], int n)
{
	for (int i = 0; i < n; i++ )
	{
		cout << pa[i].fullname << endl;
		cout << pa[i].hobby << endl;
		cout << pa[i].ooplevel << endl;
	}
}