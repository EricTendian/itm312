#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

double checkNum() {
	double d;
	cin >> d;
	while (d<0) {
		cout << "Error: number cannot be negative. Input a number 0 or greater: ";
		cin >> d;
	}
	return d;
}

double calcExpenses(vector<double> v) {
	double sum = 0;
	for (int i=0; i<v.size(); i++) sum+= v[i];
	return sum;
}

int main() {
	int totalDays;
	vector<double> costs;
	cout << "------ Travel Expense Calculator 5000 ------";
	cout << "\nEnter the total number of days spent on the trip: ";
	totalDays = checkNum();
	cout << "Enter airfare cost: ";
	costs.push_back(checkNum());
	cout << "Enter car rental cost: ";
	costs.push_back(checkNum());
	cout << "Enter total parking fees: ";
	costs.push_back(checkNum());
	cout << "Enter total taxi fees: ";
	costs.push_back(checkNum());
	cout << "Enter total hotel expenses: ";
	costs.push_back(checkNum());
	cout << "Calculating ...";
	double totalcost = calcExpenses(costs);
	cout << "\nTOTAL EXPENSES: $" << setprecision(2) << fixed << totalcost << endl;
}
