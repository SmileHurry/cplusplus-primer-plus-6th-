#include"stack.h"
#include<iostream>
stack::stack()
{
	top = 0;
	total = 0;
	items[top] = { "no name", 0 };
}
stack::~stack()
{

}
bool stack::isempty() const
{
	return top == 0;
}

bool stack::isfull() const
{
	return top == MAX;
}

bool stack::push(const Item &item)
{
	if (top < MAX)
	{
		items[top] = item;
		top++;
		return true;
	}
	else
		return false;
}

bool stack::pop(Item &item)
{
	if (top > 0)
	{
		top--;
		item = items[top];
		total += item.payment;
		std::cout << "total:" << total << std::endl;
		return true;
	}
	else
		return false;
}