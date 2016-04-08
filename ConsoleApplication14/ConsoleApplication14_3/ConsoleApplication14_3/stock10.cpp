#include<iostream>
#include"stock10.h"

stock::stock()
{
	std::cout << "default constructor called\n";
	company = new char[1];
	company[0] = '\0';
	shares = 0;
	share_val = 0.0;
	total_val = 0.0;
}
stock::stock(const char *s, long n , double pr )
{
	std::cout << "constructor using " << s << " called\n";
	company = new char[std::strlen(s) + 1];
	std::strcpy(company, s);
	if (n < 0)
	{
		std::cout << "number of shares can't be negative; "
			<< company << " shares set to 0.\n";
		shares = 0;
	}
	else
		shares = n;
	share_val = pr;
	set_tot();
}
stock::~stock()
{
	std::cout << "--------" << "Bye! " << company << "--------" << std::endl;
	delete[] company;
}
void stock::buy(long num, double price)
{
	if (num < 0)
	{
		std::cout << "number of shares purchased can't be negative. "
			<< "transaction is aborted.\n";
	}
	else
	{
		shares += num;
		share_val = price;
		set_tot();
	}
}
void stock::sell(long num, double price)
{
	if (num < 0)
	{
		std::cout << "number of shares sold can't be negative. "
			<< "transaction is aborted.\n";
	}
	else if (num > shares)
	{
		std::cout << "you can't sell more than you have! "
			<< "transaction is aborted.\n";
	}
	else
	{
		shares -= num;
		share_val = price;
		set_tot();
	}
}
void stock::update(double price)
{
	share_val = price;
	set_tot();
}

//add function defination
stock::stock(const stock &st)
{
	std::cout << "复制构造函数被调用\n";
	company = new char[std::strlen(st.company) + 1];
	std::strcpy(company, st.company);
	shares = st.shares;
	share_val = st.share_val;
	total_val = st.total_val;
}
stock & stock::operator=(const stock & st)
{
	std::cout << "复制运算符（引用版本）被调用\n";
	if (this == &st)
		return *this;
	else
	{
		delete[] company;
		company = new char[std::strlen(st.company) + 1];
		std::strcpy(company, st.company);
		shares = st.shares;
		share_val = st.share_val;
		total_val = st.total_val;
		return *this;
	}
}
stock & stock::operator=(const char *s)
{
	std::cout << "复制运算符（字符串版本）被调用\n";
	company = new char[std::strlen(s) + 1];
	std::strcpy(company, s);
	return *this;
}
std::ostream & operator<<(std::ostream &os, const stock &st)
{
	using std::ios_base;
	ios_base::fmtflags orig = os.setf(ios_base::fixed, ios_base::floatfield);
	std::streamsize prec = os.precision(3);
	os << "company: " << st.company
		<< " shares: " << st.shares << '\n';
	os << " share price: $" << st.share_val;

	os.precision(2);
	os << " Total Worth: $" << st.total_val << '\n';

	os.setf(orig, ios_base::floatfield);
	os.precision(prec);
	return os;
}