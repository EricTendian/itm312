#include <iostream>
using namespace std;

const int SIZE = 201;

int binarySearch(int array[], int val, int first, int last) {
    int middle = (first + last) / 2;
    if (first<0 || last>5) return -1;
    if (array[middle]==val) return middle;
    else if (array[middle]<val) binarySearch(array, val, middle+1, last);
    else if (array[middle]>val) binarySearch(array, val, first, middle-1);
}

int binarySearch(int array[], int val) {
    return binarySearch(array, val, 0, SIZE-1);
}

int bubbleSort(int array[]) {
    bool swap;
    int temp;
    
    do {
        swap = false;
        for (int i=0; i<SIZE-1; i++) {
            if (array[i] > array[i+1]) {
                temp = array[i];
                array[i] = array[i+1];
                array[i+1] = temp;
                swap = true;
            }
        }
    } while (swap);
    return array;
}

int selectionSort(int array[], int start) {
    if (start >= SIZE - 1) return array;
    int min = start;
    for (int index = start + 1; index < SIZE; index++) if (array[index] < array[min]) min = index;
    int temp = array[start];
    array[start] = array[min];
    array[min] = temp;
    selectionSort(array, start + 1);
}

void print(int array[]) {
    cout << "Array contains: ";
    for (int i=0; i<SIZE; i++) cout << array[i] << " ";
}

int main() {
    int list[] = {-51, 93, 64,-13,-65,-29,-97, 71, -6,-79,-91, 92, 86, 15,-43,-88,  8,-48,-15, 13,-12,-59, 52, 82,-32, 54,-72, 20,-30, 98,-27, 76, 33,-66, 50, 88,-70, 66, 21,-20, 30,-31, 84,-62,  4,-80,-55, 51,-83, 49,-53, 24, 29,  2,-100,-94, 12, 37,-33, 41, 23,-74, 11, 42, 63, 58, 59, 83, 72,-52,-90,-46,-35,-68, 46, 18,-18, 43,-95,  5,  3,-26,  9, 47,  1,-96,-47, -4, 85, 25,-17, 34,-28,100,  7,-34, 48,-63, 68,-36,-89,-61, 45, 87,-92, 74,-58, 56, 77, 90, 19,-77, -7, -9, 95, 31,-11, 40, 60, 39, 73, 96, 53, 94,-87,-78, 44,-64, 17, -8,-57, 91, 99, 28, 70, 97,-40,-10,-56,-16, 32, 65, 36,-24, -2,-38,-44,-45,-86,-49, 61, 35, 62, 89,-81,-75,-76, 26, -1,-93,-23,-54,-41,-82,-37, 22,-42,  0, -3,-67,-84, 79, 78,-19,-71, 69,-21, 55,-85,-69, 75, 10, -5, 16, 67,-99,  6, 81, 38,-98, 57,-39, 14,-73,-25, 80,-14,-60,-50, 27,-22};
    int list2[] = {-51, 93, 64,-13,-65,-29,-97, 71, -6,-79,-91, 92, 86, 15,-43,-88,  8,-48,-15, 13,-12,-59, 52, 82,-32, 54,-72, 20,-30, 98,-27, 76, 33,-66, 50, 88,-70, 66, 21,-20, 30,-31, 84,-62,  4,-80,-55, 51,-83, 49,-53, 24, 29,  2,-100,-94, 12, 37,-33, 41, 23,-74, 11, 42, 63, 58, 59, 83, 72,-52,-90,-46,-35,-68, 46, 18,-18, 43,-95,  5,  3,-26,  9, 47,  1,-96,-47, -4, 85, 25,-17, 34,-28,100,  7,-34, 48,-63, 68,-36,-89,-61, 45, 87,-92, 74,-58, 56, 77, 90, 19,-77, -7, -9, 95, 31,-11, 40, 60, 39, 73, 96, 53, 94,-87,-78, 44,-64, 17, -8,-57, 91, 99, 28, 70, 97,-40,-10,-56,-16, 32, 65, 36,-24, -2,-38,-44,-45,-86,-49, 61, 35, 62, 89,-81,-75,-76, 26, -1,-93,-23,-54,-41,-82,-37, 22,-42,  0, -3,-67,-84, 79, 78,-19,-71, 69,-21, 55,-85,-69, 75, 10, -5, 16, 67,-99,  6, 81, 38,-98, 57,-39, 14,-73,-25, 80,-14,-60,-50, 27,-22};
    cout << "Performing bubble sort on list...\n";
    list = bubbleSort(list);
    print(list);
    cout << "\nPerforming selection sort on list...\n";
    list2 = selectionSort(list2);
    print(list2);
    cout << "\n\nEnter an item to search for: ";
    int val;
    cin >> val;
    cout << find(val) << endl;
}