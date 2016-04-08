#include<iostream>
#include"stack.h"

stack::stack(int n)
{
	if (n < MAX)
	{
		size = n;
		pitems = new Item[n];
		top = 0;
	}
	else
	{
		size = MAX;
		pitems = new Item[MAX];
		top = 0;
	}
}
stack::stack(const stack &st)
{
	size = st.size;
	top = st.top;
	pitems = new Item[st.size];
	for (int i = 0; i < top; i++)
	{
		pitems[i] = st.pitems[i];
	}
}
stack::~stack()
{
	delete[] pitems;
}
bool stack::isempty() const
{
	return top == 0;
}
bool stack::isfull() const
{
	return top == size;
}
bool stack::push(const Item & item)
{
	if (top < size)
	{
		pitems[top++] = item;
		return true;
	}
	else
		return false;
}
bool stack::pop(Item & item)
{
	if (top > 0)
	{
		item = pitems[--top];
		return true;
	}
	else
		return false;
}
stack & stack::operator=(const stack & st)
{
	if (this == &st)
		return *this;
	else
	{
		delete[] pitems;
		size = st.size;
		top = st.top;
		pitems = new Item[st.size];
		for (int i = 0; i < top; i++)
		{
			pitems[i] = st.pitems[i];
		}
		return *this;
	}
}