#include <iostream>
using namespace std;

int main() {
    //define constant & variables
    const int UNIT_COST = 99;
	int quantity;
	double discount, total_cost;
	
	cout << "How many units of our software package did you purchase? ";
	cin >> quantity;
	
	//input validation
	while (quantity < 1) {
	    cout << "Did you get that right? Please enter a quantity greater than 0.\n\n";
	    cout << "How many units of our software package did you purchase? ";
	    cin >> quantity;
	}

    //discount decision
	if (9 < quantity && quantity < 20) discount = 0.2;
	else if (19 < quantity && quantity < 50) discount = 0.3;
	else if (49 < quantity && quantity < 100) discount = 0.4;
	else if (99 < quantity) discount = 0.5;
	else discount = 0;

    //calculation
    total_cost = quantity * UNIT_COST;
    total_cost-= total_cost * discount;
    
	if (discount>0) cout << "Congratulations! As you have made a bulk purchase of our product, you are elligibile for a " << int(discount*100) << "% discount.\n";
	cout << "The total cost of your purchase is $" << total_cost << ". Thank you for shopping!\n";
}