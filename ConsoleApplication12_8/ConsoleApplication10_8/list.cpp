#include<iostream>
#include"list.h"

list::list(const Item arr[], int n)
{
	if (arr==NULL)
	{
		top = 0;
	}
	else
	{
		top = 0;
		n = n < N ? n : N;
		for (int i = 0; i < n; i++)
		{
			items[top++] = arr[i];
		}
	}
}
list::~list()
{

}
bool list::isempty() const
{
	return top == 0;
}
bool list::isfull() const
{
	return top == N;
}
bool list::append(const Item &st)
{
	if (isfull())
		return false;
	else
	{
		items[top++] = st;
		return true;
	}
}
void list::visit(void(*pf)(Item &st))
{
	for (int i = 0; i < top;i++)
		pf(items[i]);//关于函数指针，见P242
}
void show(Item &st)
{
	std::cout << st << std::endl;
}