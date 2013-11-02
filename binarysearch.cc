#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int find(vector<int> haystack, int needle, int first, int last) {
    int middle = (first + last) / 2;
    cout << middle << endl;
    if (first<0 || last>haystack.size()-1) return -1;
    if (haystack.at(middle)==needle) return middle;
    else if (haystack.at(middle)<needle) find(haystack, needle, middle+1, last);
    else if (haystack.at(middle)>needle) find(haystack, needle, first, middle-1);
}

int find(vector<int> haystack, int needle) {
    return find(haystack, needle, 0, haystack.size()-1);
}

vector<int> bubbleSort(vector<int> v) {
    bool swap;
    
    do {
        swap = false;
        for (int i=0; i<v.size()-2; i++) {
            if (v.at(i) > v.at(i+1)) {
                std::swap(v.at(i), v.at(i+1));
                swap = true;
            }
        }
    } while (swap);
}

int main() {
    vector<int> list {-51, 93, 64,-13,-65,-29,-97, 71, -6,-79,-91, 92, 86, 15,-43,-88,  8,-48,-15, 13,-12,-59, 52, 82,-32, 54,-72, 20,-30, 98,-27, 76, 33,-66, 50, 88,-70, 66, 21,-20, 30,-31, 84,-62,  4,-80,-55, 51,-83, 49,-53, 24, 29,  2,-100,-94, 12, 37,-33, 41, 23,-74, 11, 42, 63, 58, 59, 83, 72,-52,-90,-46,-35,-68, 46, 18,-18, 43,-95,  5,  3,-26,  9, 47,  1,-96,-47, -4, 85, 25,-17, 34,-28,100,  7,-34, 48,-63, 68,-36,-89,-61, 45, 87,-92, 74,-58, 56, 77, 90, 19,-77, -7, -9, 95, 31,-11, 40, 60, 39, 73, 96, 53, 94,-87,-78, 44,-64, 17, -8,-57, 91, 99, 28, 70, 97,-40,-10,-56,-16, 32, 65, 36,-24, -2,-38,-44,-45,-86,-49, 61, 35, 62, 89,-81,-75,-76, 26, -1,-93,-23,-54,-41,-82,-37, 22,-42,  0, -3,-67,-84, 79, 78,-19,-71, 69,-21, 55,-85,-69, 75, 10, -5, 16, 67,-99,  6, 81, 38,-98, 57,-39, 14,-73,-25, 80,-14,-60,-50, 27,-22};
    //sort(list.begin(), list.end());
    bubbleSort(list);
    cout << "list contains:";
    for (int i=0; i<list.size(); i++) cout << list[i] << " ";
    cout << endl;
    
    /*int val;
    cin >> val;
    cout << find(list, val) << endl;
    vector<int>::iterator it;
    it = find(list.begin(), list.end(), 30);
    ++it;
    cout << "The element following 30 is " << *it << '\n';*/
}