#include <iostream>
using namespace std;

/*
Drop Lowest SCOre
Modify Problem 2 above so the lowest test score is dropped. This score should not be
included in the calculation of the average.
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
	for (int i=1; i<SIZE; i++) sum+=array[i];
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
	}
	scores = sortArray(scores);
	double avg = calcAverage(scores);
	cout << "Scores: ";
	for (int i=1; i<numscores; i++) cout << *(scores+i) << " ";
	cout << "\nAverage: " << avg << "%\n";
}
