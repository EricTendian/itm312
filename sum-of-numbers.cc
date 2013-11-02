#include <iostream>
using namespace std;

int main() {
    int num, cnt, sum;
    num = 0; cnt = 0; sum = 0;
    
    cout << "Please enter a positive number: ";
    cin >> num;
    
    while (num<1) {
        cout << "That number is not positive. Please enter a positive number: ";
        cin >> num;
    }
    
    for (;cnt <= num; cnt++) {
        sum += cnt;
    }
    
    cout << "Sum: " << sum << endl;
}