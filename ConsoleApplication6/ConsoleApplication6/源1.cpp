#include<iostream>

using namespace std;
const int num = 20;

struct student
{
	char firstname[num];
	char lastname[num];
	char grade;
	int age;
};

int main()
{
	student stu1;
	cout << "What is your first name£¿ ";
	cin.getline(stu1.firstname, num);
	cout << "What is your last name£¿ ";
	cin.getline(stu1.lastname, num);
	cout << "What letter grade do you deserve£¿ ";
	cin >> stu1.grade;
	cout << "What is your age£¿ ";
	cin >> stu1.age;
	cout << "---------------------------------" << endl;
	cout << "name: " << stu1.lastname << "," << stu1.firstname << endl;
	cout << "grade: " << char(stu1.grade + 1) << endl;
	cout << "age: " << stu1.age << endl;
	cin.get();
	cin.get();
	return 0;

}