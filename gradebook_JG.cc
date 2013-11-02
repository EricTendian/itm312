//This is the code for problem 11 on page 447
#include <iostream>
#include <string>
using namespace std;


int main()
{
	const int NUM_STUDENTS = 5;
	const int NUM_TEST = 4;
	const int LETTERGRADE = 5;
	const double NUM_GRADE = 4; 
	string name;
	double testscores[NUM_TEST];
	int a;
	int b;
	double avg;
	double sum;
	char grade ;
	
	for (a = 0; a < NUM_STUDENTS; a++)
	{
		cout <<"Type the name of the student:" << endl;
		cin >> name;
		cout <<"Type the score that the student received:" << endl;
		for (b = 0; b < NUM_TEST; b++)
		{
			cin >> testscores[NUM_TEST];
			cout << endl;
			sum += testscores[NUM_TEST];
			avg = sum / NUM_TEST;
		}
		if (avg < 100 && avg > 90)
			grade = 'A';
			
		else if (avg < 89 && avg > 80)
			grade = 'B';
			
		else if (avg < 79 && avg > 70)
			grade = 'C';
			
		else if (avg < 69 && avg > 60)
			grade = 'D';
			
		else if (avg < 59)
			grade = 'F';
			
		else
			cout << endl ;
		

		cout <<"This is the average grade and letter grade:" << avg << "" << grade << endl;
		sum = 0;
		cout << endl;
	}
}