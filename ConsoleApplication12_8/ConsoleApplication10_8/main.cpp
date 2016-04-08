#include "list.h"
#include <iostream>

int main()
{
	using namespace std;
	list one;
	one.visit(show);
	cout << endl;
	cout << "list one是否为空：" <<boolalpha<<one.isempty() << endl;
	cout << "-------------------------------\n";
	Item arr[] = { 1, 2, 3, 4, 5, 6, 7, 8 };
	list two = list(arr,sizeof(arr)/sizeof(arr[0]));
	two.visit(show);
	two.append(12);
	cout << "list two是否为满：" <<boolalpha<<two.isfull() << endl;
	two.visit(show);
	two.append(13);
	cout << "list two是否为满：" <<boolalpha<<two.isfull() << endl;
	two.visit(show);
	return 0;
}
