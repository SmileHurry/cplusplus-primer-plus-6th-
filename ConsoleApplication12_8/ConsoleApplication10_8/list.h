#ifndef LIST_H_
#define LIST_H_

typedef double Item;
class list
{
private:
	static const int N = 10;
	int top;
	Item items[N];
public:
	list(const Item *arr = nullptr , int n = 0);
	~list();
	bool isempty() const;
	bool isfull() const;
	bool append(const Item &st);
	void visit(void(*pf)(Item &st));
};
void show(Item &st);
#endif