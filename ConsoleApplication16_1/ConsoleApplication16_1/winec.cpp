#include"winec.h"
using std::cout;
using std::cin;
using std::endl;
using std::string;

Wine::Wine() :wine_name("no name"), year_num(0), pa()
{

}
Wine::Wine(const char *l, int y, const int yr[], const int bot[]) :wine_name(l), year_num(y), pa(ArrayInt(yr, y), ArrayInt(bot, y))
//注：后面这两个成员初始化调用的是Pair(const T1 &aval, const T2 &bval) :a(aval), b(bval){}
//而pa的初始化列表里面的ArrayInt，调用的原型是std::valarray<int>::valarray(const _Ty *_Ptr, size_t _Count)
{

}
Wine::Wine(const char *l, int y) : wine_name(l), year_num(y)
//此时并没显式地对pa初始化，但是pa会默认调用Pair(){};
{

}
void Wine::GetBottles()
{
	cout << "enter " << wine_name << " data for " << year_num << " year(s):" << endl;
	ArrayInt yr(year_num);
	ArrayInt bt(year_num);
	for (int i = 0; i < year_num; i++)
	{
		cout << "enter year: ";
		cin >> yr[i];//此时不能写cin>>pa.first()[i],因为pa.first()的size为0，数组为空,不能写入；
		cout << "enter bottles for that year: ";
		cin >> bt[i];//此时不能写cin>>pa.second()[i],因为pa.second()的size为0，数组为空，不能写入；
	}
	pa = PairArray(yr, bt);//注意：此时以yr和bt作为参数，调用了构造函数Pair(const T1 &aval, const T2 &bval) :a(aval), b(bval){}，
	                     //创建的一个临时的Pair对象，并又调用了pair的默认赋值运算符，赋值给pa对象
}
int Wine::sum()
{
	return pa.second().sum();
}
void Wine::Show()
{
	cout << "Wine: " << wine_name << endl;
	cout << "\t" << "Year" << "\t" << "Bottles"<<endl;
	for (int i = 0; i < year_num; i++)
	{
		cout << "\t" << pa.first()[i] << "\t" << pa.second()[i] << endl;
	}
}
