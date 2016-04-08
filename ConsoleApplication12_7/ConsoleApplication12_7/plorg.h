#ifndef PLORG_H_
#define PLORG_H_

class plorg
{
private:
	static const int size = 20;
	char mingcheng[size];
	int CI;
public:
	plorg(char *p="Plorga",int n=50);
	~plorg();
	void reset_CI(int m);
	void show() const;
};

#endif