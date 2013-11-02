#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	//constants
	const double COST_PER_CUBIC_FOOT = 0.23;
	const double CHARGE_PER_CUBIC_FOOT = 0.5;

	//variables
	double length, width, height, volume, cost, charge, profit; 

	cout << setprecision(2) << fixed << showpoint;

	cout << "Enter the dimensions of the crate (in feet):\nLength: ";
	cin >> length;
	cout << "Width: ";
	cin >> width;
	cout << "Height: ";
	cin >> height;

	//calculates the crate's volume and cost to produce it
	volume = length * width * height;
	cost = volume * COST_PER_CUBIC_FOOT;
	charge = volume * CHARGE_PER_CUBIC_FOOT;
	profit = charge - cost;

	cout << "The volume of your box is: ";
	cout << volume << " cubic feet.\n";
	cout << "Cost to build: $"<< cost << endl;
	cout << "Charged to customer: $" << charge << endl;
	cout << "Profit: $" << profit << endl;
	return 0;
}