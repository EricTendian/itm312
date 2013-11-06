#include <iostream>
using namespace std;

int* bubbleSort(int a[]) {
    bool swap;
    int temp;

    do {
        swap = false;
        for (int i=0; i<9; i++) {
            if (a[i] > a[i+1]) {
                temp = a[i];
                a[i] = a[i+1];
                a[i+1] = temp;
                swap = true;
            }
        }
    } while (swap);
    return a;
}

int* selectionSort(int a[], int start) {
    int length = 10;
    if (start >= length - 1) return a;
    int min = start;
    for (int index = start + 1; index < length; index++) if (a[index] < a[min]) min = index;
    int temp = a[start];
    a[start] = a[min];
    a[min] = temp;
    selectionSort(a, start + 1);
}

void printArray(int a[]) {
	for (int i=0; i<10; i++) cout << a[i] << " ";
	cout << endl;
}

int main() {
	int array1[] = {39,18,64,17,30,18,55,69,91,49};
	int array2[] = {39,18,64,17,30,18,55,69,91,49};
	cout << "Array 1 contents:\n";
	printArray(array1);
	cout << "Sorting with bubble sort...\n";
	int* sortedarray1 = bubbleSort(array1);
	cout << "Sorted array:\n";
	printArray(sortedarray1);
	cout << "Array 2 contents:\n";
	printArray(array2);
	cout << "Sorting with selection sort...\n";
	int* sortedarray2 = selectionSort(array2, 0);
	cout << "Sorted array:\n";
	printArray(sortedarray2);
}
