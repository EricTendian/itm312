#include <iostream>
#include "ch13_p43.h"
using namespace std;

/*
[DONE] 43. Write a class declaration named Circle with a private member variable named
radius. Write set and get functions to access the radius variable, and a function
named getArea that returns the area of the circle. The area is calculated as
3.14159 * radius * radius
[DONE] 44. Add a default constructor to the Circle class in question 43. The constructor should
initialize the radius member to O.
[DONE] 45. Add an overloaded constructor to the Circle class in question 44. The constructor
should accept an argument and assign its va lue to the radius member variable.
46. Write a Statement that defines an array of five objects of the Circle class in question
    45. Let the default constructor execute for each elemenr of the array.
47. Write a statement that defines an array of five objects of the Circle class in question
    45. Pass the following argumems to the elements' constructor: 12, 7, 9, 14, and 8.
48. Write a for loop that displays the radius and area of the circles represented by the array you defined in question 47.
*/

Circle::Circle() {
	radius = 0;
}
Circle::Circle(double r) {
	radius = r;
}

int main() {
	Circle circles1[] = {Circle(), Circle(), Circle(), Circle(), Circle()};
	Circle circles2[] = {12, 7, 9, 14, 8};
	for (int i=0; i<5; i++) cout << circles2[i].getRadius() << " " << circles2[i].getArea() << endl;
}
