#ifndef STACK_H_
#define STACK_H_

const int size = 30;
struct customer{
	char fullname[30];
	double payment;
};
typedef customer Item;

class stack
{
private:
	enum{MAX=10};
	Item items[MAX];
	double total;
	int top;
public:
	stack();
	~stack();
	bool isempty() const;
	bool isfull() const;
	bool push(const Item &item);
	bool pop(Item &item);
};

#endif