#include <iostream>
using namespace std;

int[] selectionSort(int a[], int start) {
    int length = (sizeof(a)/sizeof(*a));
    
    if (start >= length - 1) return a;
    int min = start;
    for (int index = start + 1; index < length; index++) if (a[index] < a[min]) min = index;
    int temp = array[start];
    array[start] = array[min];
    array[min] = temp;
    selectionSort(a, start + 1);
}

int main() {
    int list[] = {-51, 93, 64,-13,-65,-29,-97, 71, -6,-79,-91, 92, 86, 15,-43,-88,  8,-48,-15, 13,-12,-59, 52, 82,-32, 54,-72, 20,-30, 98,-27, 76, 33,-66, 50, 88,-70, 66, 21,-20, 30,-31, 84,-62,  4,-80,-55, 51,-83, 49,-53, 24, 29,  2,-100,-94, 12, 37,-33, 41, 23,-74, 11, 42, 63, 58, 59, 83, 72,-52,-90,-46,-35,-68, 46, 18,-18, 43,-95,  5,  3,-26,  9, 47,  1,-96,-47, -4, 85, 25,-17, 34,-28,100,  7,-34, 48,-63, 68,-36,-89,-61, 45, 87,-92, 74,-58, 56, 77, 90, 19,-77, -7, -9, 95, 31,-11, 40, 60, 39, 73, 96, 53, 94,-87,-78, 44,-64, 17, -8,-57, 91, 99, 28, 70, 97,-40,-10,-56,-16, 32, 65, 36,-24, -2,-38,-44,-45,-86,-49, 61, 35, 62, 89,-81,-75,-76, 26, -1,-93,-23,-54,-41,-82,-37, 22,-42,  0, -3,-67,-84, 79, 78,-19,-71, 69,-21, 55,-85,-69, 75, 10, -5, 16, 67,-99,  6, 81, 38,-98, 57,-39, 14,-73,-25, 80,-14,-60,-50, 27,-22};
    list = selectionSort(list);
    cout << "list contains: ";
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