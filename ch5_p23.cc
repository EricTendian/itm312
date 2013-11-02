#include <iostream>
using namespace std;

int main() {
    const char PATTERN_CHAR = '+';
    int i, cnt;
    
    cout << "Pattern A:\n";
    
    for (i = 1; i<=10; i++) {
        for (cnt=0; cnt<i; cnt++) cout << PATTERN_CHAR;
        cout << endl;
    }
    
    cout << "\n\nPattern B:\n";
    
    for (i = 10; i>0; i--) {
        for (cnt=0; cnt<i; cnt++) cout << PATTERN_CHAR;
        cout << endl;
    }
}