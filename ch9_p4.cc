#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

/*
Test Scores #2
Modify the program of Programming Challenge 2 to allow the user to enter name-score
pairs. For each student taking a test, the user types the student's name followed by the
student's integer test score. Modify the sorting function so it takes an array holding the
student names and an array holding the student test scores. When the sorted line of
scores is displayed, each student's name should be displayed along with his or her score.
In stepping through the arrays, use pointers rather than array subscripts.

Input Validation: Do not accept negative numbers (or test scores).
*/

int SIZE;

double calcAverage(int array[]) {
	double sum = 0;
	for (int i=0; i<SIZE; i++) sum+=double(*(array+i));
	return sum/double(SIZE);
}

void sortArray(int scores[], string names[]) {
    bool swap;
    do {
        swap = false;
        for (int i=0; i<SIZE-1; i++) {
            if (*(scores+i) > *(scores+i+1)) {
		std::swap(*(scores+i), *(scores+i+1));
		std::swap(*(names+i), *(names+i+1));
                swap = true;
            }
        }
    } while (swap);
    cout << "---------------------------\n\nScores:\n";
    for (int i=0; i<SIZE; i++) cout << *(names+i) << ": " << *(scores+i) << endl;
    cout << "\nClass Average: " << calcAverage(scores) << "%\n";
}

int main() {
	cout << "How many students would you like to enter? ";
	int numscores = 0;
	cin >> numscores;
	while (numscores<1) {
		cout << "Please enter a number greater than 0: ";
		cin >> numscores;
	}
	SIZE = numscores;
	int *scores;
	scores = new int[SIZE];
	string names[SIZE];
	for (int i=0; i<SIZE; i++) {
		cout << "Enter student #" << i+1 << "'s name: ";
		cin.ignore();
		getline(cin , *(names+i));
		cout << "Enter test score for student: ";
		cin >> *(scores+i);
		while (*(scores+i)<0) {
			cout << "Please enter a non-negative number: ";
			cin >> *(scores+i);
		}
	}
	sortArray(scores, names);
}
