#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

double findAvg(vector<double>);
double min_max(vector<double>, bool);
void showValues(vector<double>);

int main() {
    vector<double> grades;
    
    ifstream in;
    in.open("grades.txt");
    int currLine;
    while (in >> currLine) grades.push_back(currLine);
    in.close();
    
    cout << "Average of grades: " << findAvg(grades) << endl;
    cout << "Lowest score: " << min_max(grades, false) << endl;
    cout << "Highest score: " << min_max(grades, true) << endl;
    showValues(grades);
}

double findAvg(vector<double> grades) {
    double sum = 0;
    double avg = 0;
    for (int i = 0; i < grades.size(); i++) sum+=grades.at(i);
    avg = double(sum) / double(grades.size());
    return avg;
}

double min_max(vector<double> grades, bool max = false) {
    double val = grades.at(0);
    for (int i = 0; i < grades.size(); i++) if ((max && (val < grades.at(i))) || (val > grades.at(i))) val = grades.at(i);
    return val;
}

void showValues(vector<double> grades) {
    for (int i = 0; i < grades.size(); i++) cout << grades.at(i) << " ";
    cout << endl;
}