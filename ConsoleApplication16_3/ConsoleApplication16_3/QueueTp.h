#ifndef QUEUETP_H_
#define QUEUETP_H_
template<typename T>
class QueueTp
{
protected:
	struct Node
	{
		T item;
		struct Node *next;
	};
private:
	const static int Q_size = 10;
	Node *front;
	Node *rear;
	int items;
	const int qsize;
	QueueTp(const QueueTp &q) :qsize(0){}
	QueueTp & operator=(const QueueTp &q){ return *this; }
public:
	QueueTp(int qs = Q_size);
	~QueueTp();
	bool isempty() const;
	bool isfull() const;
	int queuecount() const;
	bool enqueue(const T &item);
	bool dequeue(T &item);
};
//---------------------------------------------------------------------//
//注意：以下所有的模板成员函数都不能放在独立的文件（比如：QueueTp.cpp）中。
//这是因为模板不是函数，他们不能单独编译。模板必须与特定的模块实例化请求一起使用。
//因此，最简单的方法是将所有模板信息放在一个头文件中，并在要使用这些模板的文件中包含该头文件！！！（P569）
template<typename T>
QueueTp<T>::QueueTp(int qs) :qsize(qs)
{
	front = rear = nullptr;
	items = 0;
}

template<typename T>
QueueTp<T>::~QueueTp()
{
	Node *temp;
	while (front != nullptr)
	{
		temp = front;
		front = front->next;
		delete temp;
	}
	rear = nullptr;
}
template<typename T>
bool QueueTp<T>::isempty() const
{
	return items == 0;
}
template<typename T>
bool QueueTp<T>::isfull() const
{
	return items == qsize;
}
template<typename T>
int QueueTp<T>::queuecount() const
{
	return items;
}
template<typename T>
bool QueueTp<T>::enqueue(const T &item)
{
	if (isfull())
		return false;
	Node *add = new Node;
	add->item = item;
	add->next = nullptr;
	items++;
	if (front == nullptr)
		front = add;
	else
		rear->next = add;
	rear = add;
	return true;
}
template<typename T>
bool QueueTp<T>::dequeue(T &item)
{
	if (front == nullptr)
		return false;
	item = front->item;
	items--;
	Node *temp = front;
	front = front->next;
	delete temp;
	if (items == 0)
		rear = nullptr;
	return true;
}
#endif
