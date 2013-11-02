#include <iostream>
using namespace std;

const int NUM_STUDENTS = 5;
const int NUM_TESTS = 4;
const int cutoffs[] = {90,80,70,60};

double average(double scores[]) {
    double sum;
    for (int i=0; i<NUM_TESTS; i++) sum+=scores[i];
    return sum/double(NUM_TESTS);
}
char toLetter(double average) {
    for (int i=0; i<4; i++) if (cutoffs[i]<average) return char(i+65);
    return 'F';
}

int main() {
    char names[NUM_STUDENTS][256]; //sorry Hawaiians
    char grades[NUM_STUDENTS];
    double scores[NUM_STUDENTS][NUM_TESTS];
    
    for (int i=0; i<NUM_STUDENTS; i++) {
        cout << "Please enter student #" << i+1 << "'s name: ";
        cin.getline(names[i], 256);
        for (int j=0; j<NUM_TESTS; j++) {
            cout << "Enter test score #" << j+1 << ": ";
            cin >> scores[i][j];
            while (scores[i][j] < 0 || scores[i][j] > 100) {
                cout << "Error: Score must be between 0 and 100. Please enter a valid score: ";
                cin >> scores[i][j];
            }
        } cin.ignore();
    }
    
    cout << "============== Processing... ==============\n";
    
    for (int i=0; i<NUM_STUDENTS; i++) {
        double avg = average(scores[i]);
        grades[i] = toLetter(avg);
        cout << names[i] << ": " << avg << "% = " << grades[i] << endl;
    }
}