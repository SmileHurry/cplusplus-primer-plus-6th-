#ifndef GOLF10_H_
#define GOLF10_H_

class golf10
{
private:
	static const int Len = 40;
	struct golf{
		char fullname[Len];
		int handicap;
	}player;
public:
	golf10();
	golf10(const char *name, int hc);
	~golf10();
	int setgolf();
	void handicap(int hc);
	void showgolf() const;
	void showgolf_fullname() const;
};
#endif
