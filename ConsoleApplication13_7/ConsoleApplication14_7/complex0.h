#ifndef COMPLEX0_H_
#define COMPLEX0_H_

class complex
{
private:
	double a;
	double b;
	static const char c = 'i';
public:
	complex();
	complex(double m, double n);
	~complex();
	friend complex operator+(const complex &st1, const complex &st2);
	friend complex operator-(const complex &st1, const complex &st2);
	friend complex operator*(const complex &st1, const complex &st2);
	friend complex operator*(double m, const complex &st2);
	complex operator~() const;
	friend std::ostream & operator<<(std::ostream &os, const complex & st);
	friend std::istream & operator>>(std::istream &is, complex & st);
};
#endif