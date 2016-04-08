#include <iostream>
#include <cstdlib>
#include <ctime>
#include "vect.h"
#include <fstream>

int main()
{
	using namespace std;
	using VECTOR::Vector;
	srand(time(0));
	double direction;
	Vector step;
	Vector result(0.0, 0.0);
	unsigned long steps = 0;
	double target;
	double dstep;
	ofstream output;
	output.open("randwalk.txt");
	cout << "enter target distance(q to quit):";
	while (cin >> target)
	{
		cout << "enter step length:";
		if (!(cin >> dstep))
			break;
		output << "Target Distance: " << target << ", Step Size: " << dstep << endl;
		while (result.magval() < target)
		{
			output << steps << ": " << result;
			direction = rand() % 360;
			step.reset(dstep, direction, Vector::POL);
			result = result + step;
			steps++;
		}
		output << "After " << steps << " steps, the subject has the following location:\n";
		output << result;
		result.polar_mode();
		output << "or\n" << result;
		output << "Average outward distance per step = " << result.magval() / steps << endl;
		steps = 0;
		result.reset(0.0, 0.0);
		cout << "enter target distance(q to quit):";
	}
	cout << "Bye\n";
	cin.clear();
	while (cin.get() != '\n')
		continue;
	return 0;
}