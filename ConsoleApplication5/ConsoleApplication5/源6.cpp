#include<iostream>

int main()
{
	using namespace std;
	cout << "Computing by America style:\n";
	cout << "Enter the miles of distance you have driven:";
	double m_distance;
	cin >> m_distance;
	cout << "Enter the gallons of gasoline you have used:";
	double m_gasoline;
	cin >> m_gasoline;
	cout << "Your car can run " << m_distance / m_gasoline << " miles per gallon"<<endl;
	cout << "--------------------------------------------------------------\n";
	cout << "Computing by European style:\n";
	cout << "Enter the distance in kilometers:";
	double k_distance;
	cin >> k_distance;
	cout << "Enter the petrol in liters:";
	double k_gasoline;
	cin >> k_gasoline;
	cout << "In European style:" << "your can used " << 100 * k_gasoline / k_distance << " liters of petrol per 100 kilometers\n";
	cin.get();
	cin.get();
	return 0;
}