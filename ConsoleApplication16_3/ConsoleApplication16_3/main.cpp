#include<iostream>
#include"workmi.h"
#include"QueueTp.h"
#include<cstring>

const int SIZE = 5;
int main()
{
	using std::cin;
	using std::cout;
	using std::endl;
	using std::strchr;
	QueueTp<Worker*> lolac(SIZE);
	int ct;
	for (ct = 0; ct < SIZE; ct++)
	{
		Worker *temp=nullptr;
		char choice;
		cout << "Enter the employee category:\n"
			<< "w:waiter    s:singer "
			<< "t:singing waiter  q:quit\n";
		cin >> choice;
		while (strchr("wstq", choice) == NULL)
		{
			cout << "Please enter a w ,s ,t, or q: ";
			cin >> choice;
		}
		if (choice == 'q')
			break;
		switch (choice)
		{
		case 'w':
			temp = new Waiter; 
			break;
		case 's':
			temp = new Singer; 
			break;
		case 't':
			temp = new SingingWaiter; 
			break;
		}
		cin.get();
		temp->Set();
		lolac.enqueue(temp);
		//注意这里不能显式地写delete temp，因为delete temp删除的是temp指向的内存，delete后，会导致前面的temp->set()赋值的东西全部被删除。
		//temp指针会在for语句块后被自动删除，而不会删除指向的内存块;temp指向的内存块的删除是靠的QueueTp的析构函数~QueueTp()；
	}
	cout << "\nHere is your staff:\n";
	int i;
	for (i = 0; i < ct; i++)
	{
		Worker *temp=nullptr;
		cout << endl;
		lolac.dequeue(temp);
		temp->Show();
	}
	cout << "Bye.\n";
	return 0;
}