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
		//ע�����ﲻ����ʽ��дdelete temp����Ϊdelete tempɾ������tempָ����ڴ棬delete�󣬻ᵼ��ǰ���temp->set()��ֵ�Ķ���ȫ����ɾ����
		//tempָ�����for������Զ�ɾ����������ɾ��ָ����ڴ��;tempָ����ڴ���ɾ���ǿ���QueueTp����������~QueueTp()��
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