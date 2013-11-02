#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream input;
    int number, count, sum;
    double average;
    input.open("random.txt");
    if (!input) cout << "ERROR: File not found.";
    
    while (input >> number) {
        count++;
        sum+=number;
    }
    
    average = sum / count;
    cout << "Number of numbers: " << count;
    cout << "\nSum of numbers: " << sum;
    cout << "\nAverage of numbers: " << average << endl;
}