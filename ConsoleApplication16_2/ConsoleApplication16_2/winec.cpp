#include"winec.h"
using std::cout;
using std::cin;
using std::endl;
using std::string;

Wine::Wine() :string("no name"), year_num(0), Pair<ArrayInt,ArrayInt>()
{

} 
Wine::Wine(const char *l, int y, const int yr[], const int bot[]) : string(l), year_num(y), Pair<ArrayInt, ArrayInt>(ArrayInt(yr, y), ArrayInt(bot, y))
//注：后面这两个成员初始化调用的是Pair(const T1 &aval, const T2 &bval) :a(aval), b(bval){}
//而pa的初始化列表里面的ArrayInt，调用的原型是std::valarray<int>::valarray(const _Ty *_Ptr, size_t _Count)
{

}
Wine::Wine(const char *l, int y) : string(l), year_num(y), Pair<ArrayInt, ArrayInt>()
{

}
Wine::Wine(const string &s, int y, Pair<ArrayInt, ArrayInt> &pa) : string(s), year_num(y), Pair<ArrayInt, ArrayInt>(pa)
{

}
void Wine::GetBottles()
{
	cout << "enter " << (string)*this << " data for " << year_num << " year(s):" << endl;
	ArrayInt yr(year_num);
	ArrayInt bt(year_num);
	for (int i = 0; i < year_num; i++)
	{
		cout << "enter year: ";
		cin >> yr[i];//此时不能写cin>>pa.first()[i],因为pa.first()的size为0，数组为空,不能写入；
		cout << "enter bottles for that year: ";
		cin >> bt[i];//此时不能写cin>>pa.second()[i],因为pa.second()的size为0，数组为空，不能写入；
	}
	//问题地方：注意以下这句话不能替换成：(Pair<ArrayInt, ArrayInt>)*this=Pair<ArrayInt, ArrayInt>(yr, bt)
	*this = Wine(Label(), year_num, Pair<ArrayInt, ArrayInt>(yr, bt));
	//是不是因为(Pair<ArrayInt, ArrayInt>)*this调用的是基类(Pair<ArrayInt, ArrayInt>)的默认复制构造函数创建了一个临时对象A1；
	//而Pair<ArrayInt, ArrayInt>(yr, bt)也创建了一个临时对象A2，本句的结果只是将A2赋给了A1，并没有实际上修改*this里面的Pair部分？
}
int Wine::sum()
{
	return Pair<ArrayInt,ArrayInt>::second().sum();
}
void Wine::Show()
{
	cout << "Wine: " << Label() << endl;
	cout << "\t" << "Year" << "\t" << "Bottles" << endl;
	for (int i = 0; i < year_num; i++)
	{
		cout << "\t" << Pair<ArrayInt, ArrayInt>::first()[i] << "\t" << Pair<ArrayInt, ArrayInt>::second()[i] << endl;
	}
}
