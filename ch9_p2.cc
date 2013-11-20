#include <iostream>
using namespace std;

/*
Test Scores #1
Write a program that dyna.mically allocates an 3rray large enough to hold a userdefined
number of test scores. Once all the scores are entered, the array should be
passed to a funct ion that sorts them in ascending order. Another function should be
called that calculates the average score. The program should display the sorted list of
scores and averages with appropriate headings. Use pointer notation rather than array
notation whenever possible.

Input Validation: Do not accept negative numbers {or test scores.
*/

int SIZE;

int *sortArray(int array[]) {
    bool swap;
    do {
        swap = false;
        for (int i=0; i<SIZE-1; i++) {
            if (array[i] > array[i+1]) {
		int temp = array[i];
                array[i] = array[i+1];
                array[i+1] = temp;
                swap = true;
            }
        }
    } while (swap);
    return array;
}

double calcAverage(int array[]) {
	double sum = 0;
	for (int i=0; i<SIZE; i++) sum+=array[i];
	return sum/double(SIZE);
}

int main() {
	cout << "How many test scores would you like to enter? ";
	int numscores = 0;
	cin >> numscores;
	while (numscores<1) {
		cout << "Please enter a number greater than 0: ";
		cin >> numscores;
	}
	SIZE = numscores;
	int *scores;
	scores = new int[SIZE];
	for (int i=0; i<numscores; i++) {
		cout << "Enter test score #" << i+1 << ": ";
		cin >> *(scores+i);
		while (*(scores+i)<0) {
			cout << "Please enter a non-negative number: ";
			cin >> *(scores+i);
		}
	}
	scores = sortArray(scores);
	double avg = calcAverage(scores);
	cout << "Scores: ";
	for (int i=0; i<numscores; i++) cout << *(scores+i) << " ";
	cout << "\nAverage: " << avg << "%\n";
}
