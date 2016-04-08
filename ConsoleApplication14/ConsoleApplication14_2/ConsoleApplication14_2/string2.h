#ifndef STRING2_H
#define STRING2_H

class String
{
private:
	char *str;
	int len;
	static int num_strings;
	static const int CINLIM = 80;
public:
	String();
	String(const char *s);
	String(const String &st);
	~String();
	int length() const{ return len; }

	String & operator=(const String &st);
	String & operator=(const char *s);
	char & operator[](int i);
	const char & operator[](int i) const;

	friend bool operator<(const String &st1, const String &st2);
	friend bool operator>(const String &st1, const String &st2);
	friend bool operator==(const String &st1, const String &st2);
	friend std::ostream & operator<<(std::ostream &os, const String &st);
	friend std::istream & operator>>(std::istream &is, String &st);

	static int HowMany();

	//added functions'protypes:
	String & operator+(const String st);
	friend String operator+(char *s, const String &st);
	String & stringup();
	String & stringlow();
	int has(const char c);
};

#endif