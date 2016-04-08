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
	int steps = 0;
	double target;
	double dstep;
	int N;
	int sum_steps=0;
	int max_steps=0;
	int min_steps=0;
	ofstream output;
	output.open("randwalk.txt");
	cout << "Enter the number of end:";
	cin >> N;
	cout << "enter target distance(q to quit):";
	cin >> target;
	cout << "enter step length:";
	cin >> dstep;
	for (int i = 0; i < N;i++)
	{
		output << "Target Distance: " << target << ", Step Size: " << dstep << endl;
		while (result.magval() < target)
		{
			output << steps << ": " << result;
			direction = rand() % 360;
			step.reset(dstep, direction, Vector::POL);
			result = result + step;
			steps++;
		}
		if (i == 0)
		{
			max_steps = steps;
			min_steps = steps;
		}
		else
		{
			if (steps>max_steps)
				max_steps = steps;
			if (steps < min_steps)
				min_steps = steps;
		}
		sum_steps += steps;
		output << "After " << steps << " steps, the subject has the following location:\n";
		output << result;
		result.polar_mode();
		output << "or\n" << result;
		output << "Average outward distance per step = " << result.magval() / steps << endl;
		steps = 0;
		result.reset(0.0, 0.0);
		output << "----------------------------------------------------\n";
	}
	output << "the sum_steps of " << N << " test is:" << sum_steps << endl;
	output << "the max_steps of " << N << " test is:" << max_steps << endl;
	output << "the min_steps of " << N << " test is:" << min_steps << endl;
	cout << "Bye\n";
	cin.clear();
	while (cin.get() != '\n')
		continue;
	return 0;
}