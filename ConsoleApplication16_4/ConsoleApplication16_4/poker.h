#ifndef POKER_H_
#define POKER_H_

#include<string>
class person
{
private:
	std::string firstname;
	std::string lastname;
public:
	person() :firstname("null"), lastname("null"){}
	person(std::string &s1, std::string &s2) :firstname(s1), lastname(s2){}
	virtual void show() const = 0;
	virtual ~person(){}
	virtual void data() const;
};
//---------------------------------//
class gunslinger :virtual public person
{
private:
	int keihen;
public:
	gunslinger(std::string s1 = "null", std::string s2 = "null", int k = 0) :person(s1, s2), keihen(k){}
	gunslinger(const person &p, int k) :person(p), keihen(k){}
	double draw();
	void show() const;
	void data() const;
};
//----------------------------------//
class pokerplayer :virtual public person
{
public:
	pokerplayer(std::string s1 = "null", std::string s2 = "null") :person(s1, s2){}
	pokerplayer(const person &p) :person(p){}
	double draw(){ return std::rand() % 52 + 1; }
	void show() const;
	void data() const;
};
//-----------------------------------//
class baddude :public gunslinger, public pokerplayer
{
public:
	baddude(std::string s1 = "null", std::string s2 = "null", int k = 0) :person(s1, s2), gunslinger(s1, s2, k), pokerplayer(s1, s2){}
	baddude(const person &p, int k = 0) :person(p), gunslinger(p, k), pokerplayer(p){}
	baddude(const gunslinger &g) :person(g), gunslinger(g), pokerplayer(g){}
	baddude(const pokerplayer &p, int k = 0) :person(p), gunslinger(p, k), pokerplayer(p){}
	double gdraw();
	double cdraw();
	void show() const;
	void data() const;
};
#endif