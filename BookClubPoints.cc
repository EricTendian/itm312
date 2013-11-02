#include <iostream>
using namespace std;

int main() {
	int purchased, points;
	cout << "How many books did you purchase this month? ";
	cin >> purchased;

	switch (purchased) {
		case 0:
			points = 0;
			break;
		case 1:
			points = 5;
			break;
		case 2:
			points = 15;
			break;
		case 3:
			points = 30;
			break;
		default:
			points = 60;
			break;
	}

	cout << "You have been awarded " << points << " points. Thank you for shopping!\n";
}