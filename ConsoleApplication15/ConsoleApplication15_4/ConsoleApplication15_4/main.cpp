#include<iostream>
#include<cstring>
using namespace std;

class Port
{
private:
	char *brand;
	char style[20];
	int bottles;
public:
	explicit Port(const char *br = "none", const char *st = "none", int b = 0);
	Port(const Port &p);
	virtual ~Port(){ delete[] brand; }
	Port & operator=(const Port &p);
	Port & operator+=(int b);
	Port & operator-=(int b);
	int BottleCount() const;
	virtual void Show() const;
	friend ostream & operator<<(ostream &os, const Port &p);
};
class VintagePort : public Port 
{
	char * nickname;
	int year;
public:
	explicit VintagePort(const char * br = "", int b = 0, const char * nn = "", int y = 0);
	VintagePort(const VintagePort & vp);
	virtual ~VintagePort() { delete[] nickname; }
	VintagePort & operator=(const VintagePort & vp);
	virtual void Show() const;
	friend ostream & operator<<(ostream & os, const VintagePort & vp);
};
//------------------------------------------------------------------------------//
Port::Port(const char *br, const char *st, int b)
{
	brand = new char[strlen(br) + 1];
	strcpy(brand, br);
	strcpy(style, st);
	bottles = b;
}
Port::Port(const Port &p)
{
	brand = new char[strlen(p.brand) + 1];
	strcpy(brand, p.brand);
	strcpy(style, p.style);
	bottles = p.bottles;
}
Port & Port::operator=(const Port &p)
{
	if (this == &p)
		return *this;
	else
	{
		delete[] brand;
		brand = new char[strlen(p.brand) + 1];
		strcpy(brand, p.brand);
		strcpy(style, p.style);
		bottles = p.bottles;
		return *this;
	}
}
Port & Port::operator+=(int b)
{
	bottles += b;
	return *this;
}
Port & Port::operator-=(int b)
{
	bottles -= b;
	return *this;
}
int Port::BottleCount() const
{
	return bottles;
}
ostream & operator<<(ostream &os, const Port &p)
{
	cout << p.brand << ", " << p.style << ", " << p.bottles;
	return os;
}
void Port::Show() const
{
	cout << "Brand: " << brand << endl;
	cout << "Style: " << style << endl;
	cout << "Bottles: " << bottles << endl;
}
//-------------------------------------------------------------------------------//
VintagePort::VintagePort(const char * br, int b, const char * nn, int y) :Port(br, "vintage",b)
{
	nickname = new char[strlen(br) + 1];
	strcpy(nickname, br);
	year = y;
}
VintagePort::VintagePort(const VintagePort & vp) : Port(vp)
{
	nickname = new char[strlen(vp.nickname) + 1];
	strcpy(nickname, vp.nickname);
	year = vp.year;
}
VintagePort & VintagePort::operator=(const VintagePort & vp)
{
	if (this == &vp)
		return *this;
	else
	{
		Port::operator=(vp);
		delete[] nickname;
		nickname = new char[strlen(vp.nickname) + 1];
		strcpy(nickname, vp.nickname);
		year = vp.year;
		return *this;
	}
}
void VintagePort::Show() const
{
	Port::Show();
	cout << "Nickname: " << nickname << endl;
	cout << "Year: " << year << endl;
}
ostream & operator<<(ostream & os, const VintagePort & vp)
{
	os << Port(vp);
	cout << ", " << vp.nickname << ", " << vp.year;
	return (os);
}
//---------------------------------------------------------------------//
int main()
{
	Port port1("gallo", "tawny", 20);
	cout << port1 << endl;
	VintagePort vp("gallo", 24, "nice", 16);
	VintagePort vp2(vp);
	cout << vp2 << endl;
	VintagePort vp3;
	vp3 = vp;
	cout << vp3 << endl;
	Port *p_port;
	p_port = &port1;
	p_port->Show();
	cout << endl;
	p_port = &vp;
	p_port->Show();
	cout << endl;
}