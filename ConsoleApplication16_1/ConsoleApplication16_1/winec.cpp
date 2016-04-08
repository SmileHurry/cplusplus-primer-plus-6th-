#include"winec.h"
using std::cout;
using std::cin;
using std::endl;
using std::string;

Wine::Wine() :wine_name("no name"), year_num(0), pa()
{

}
Wine::Wine(const char *l, int y, const int yr[], const int bot[]) :wine_name(l), year_num(y), pa(ArrayInt(yr, y), ArrayInt(bot, y))
//ע��������������Ա��ʼ�����õ���Pair(const T1 &aval, const T2 &bval) :a(aval), b(bval){}
//��pa�ĳ�ʼ���б������ArrayInt�����õ�ԭ����std::valarray<int>::valarray(const _Ty *_Ptr, size_t _Count)
{

}
Wine::Wine(const char *l, int y) : wine_name(l), year_num(y)
//��ʱ��û��ʽ�ض�pa��ʼ��������pa��Ĭ�ϵ���Pair(){};
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
		cin >> yr[i];//��ʱ����дcin>>pa.first()[i],��Ϊpa.first()��sizeΪ0������Ϊ��,����д�룻
		cout << "enter bottles for that year: ";
		cin >> bt[i];//��ʱ����дcin>>pa.second()[i],��Ϊpa.second()��sizeΪ0������Ϊ�գ�����д�룻
	}
	pa = PairArray(yr, bt);//ע�⣺��ʱ��yr��bt��Ϊ�����������˹��캯��Pair(const T1 &aval, const T2 &bval) :a(aval), b(bval){}��
	                     //������һ����ʱ��Pair���󣬲��ֵ�����pair��Ĭ�ϸ�ֵ���������ֵ��pa����
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
