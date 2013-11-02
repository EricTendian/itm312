#include <iostream>
using namespace std;

int main() {
	int score1,score2,score3,score4,score5;
	double avg;
	cout << "Enter the five test scores, in order, delimited by a space. ";
	cin >> score1 >> score2 >> score3 >> score4 >> score5;
	avg = double(score1 + score2 + score3 + score4 + score5) / 5;
	cout << "The test score average is " << avg;
	
	int foo;
	cin >> foo;
	return 0;
}