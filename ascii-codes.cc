#include <iostream>
using namespace std;

int main() {
    int i, cnt;
    for (i=1, cnt=0; i<96; i++, cnt++) {
        cout << static_cast<char>(i+31) << ' ';
        if (!(cnt % 16) && cnt>1) cout << endl;
    }
    cout << endl;
}