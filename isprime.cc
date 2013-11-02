#include <iostream>
using namespace std;

bool isPrime(int);

int main() {
    int arg;
    cout << "Enter a number: ";
    cin >> arg;
    if (isPrime(arg)) cout << arg << " is a prime number.";
    else cout << arg << " is not a prime number.\n";
}

bool isPrime(int num) {
    bool hasRemainder = true;
    for (int i=2; i<num; i++) {
        if (num % i == 0) {
            hasRemainder = false;
            break;
        }
    }
    return hasRemainder;
}