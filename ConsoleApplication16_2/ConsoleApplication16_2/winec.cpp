#include"winec.h"
using std::cout;
using std::cin;
using std::endl;
using std::string;

Wine::Wine() :string("no name"), year_num(0), Pair<ArrayInt,ArrayInt>()
{

} 
Wine::Wine(const char *l, int y, const int yr[], const int bot[]) : string(l), year_num(y), Pair<ArrayInt, ArrayInt>(ArrayInt(yr, y), ArrayInt(bot, y))
//ע��������������Ա��ʼ�����õ���Pair(const T1 &aval, const T2 &bval) :a(aval), b(bval){}
//��pa�ĳ�ʼ���б������ArrayInt�����õ�ԭ����std::valarray<int>::valarray(const _Ty *_Ptr, size_t _Count)
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
		cin >> yr[i];//��ʱ����дcin>>pa.first()[i],��Ϊpa.first()��sizeΪ0������Ϊ��,����д�룻
		cout << "enter bottles for that year: ";
		cin >> bt[i];//��ʱ����дcin>>pa.second()[i],��Ϊpa.second()��sizeΪ0������Ϊ�գ�����д�룻
	}
	//����ط���ע��������仰�����滻�ɣ�(Pair<ArrayInt, ArrayInt>)*this=Pair<ArrayInt, ArrayInt>(yr, bt)
	*this = Wine(Label(), year_num, Pair<ArrayInt, ArrayInt>(yr, bt));
	//�ǲ�����Ϊ(Pair<ArrayInt, ArrayInt>)*this���õ��ǻ���(Pair<ArrayInt, ArrayInt>)��Ĭ�ϸ��ƹ��캯��������һ����ʱ����A1��
	//��Pair<ArrayInt, ArrayInt>(yr, bt)Ҳ������һ����ʱ����A2������Ľ��ֻ�ǽ�A2������A1����û��ʵ�����޸�*this�����Pair���֣�
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
