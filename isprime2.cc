#include <iostream>
#include <fstream>
using namespace std;

bool isPrime(int);

int main() {
    ofstream out;
    out.open("primes.txt");
    for (int i=2; i<=100; i++) {
        if (isPrime(i)) out << i << ", ";
    }
    out << endl;
    out.close();
}

bool isPrime(int num) {
    bool hasRemainder = true;
    for (int i=2; i<num; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}