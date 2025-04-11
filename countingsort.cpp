#include <iostream>
using namespace std;

// Counting sort function
void countSort(int array[], int size) {
    // sbse pehle max array find krenge
    int max = array[0];

    for (int i = 1; i < size; i++) { // Start from 1, not 0
        if (array[i] > max) {
            max = array[i];
        }
    }

    // creating count array 
    int count[max + 1] = {0}; // initialized all values to zero
    // max+1 isilye lia q k for example agr array me max element 8 aya hai to its mean k usme 0 se 8
    // tk elements honge jo total bnte hain 9 means 8(max)+1.

    // count frequency of each element (ek element kitni bar repeat hora)
    for (int i = 0; i < size; i++) {
        count[array[i]]++; // FIXED: missing closing bracket
    }

    // rebuilding the sorted original array 
    int index = 0;
    for (int i = 0; i <= max; i++) {
        while (count[i] > 0) {
            array[index++] = i;
            count[i]--;
        }
    }
}

int main() {
    int size;
    cout << "Enter the size of an array: ";
    cin >> size;

    int array[size]; // dynamic-sized array (allowed in some compilers like GCC)

    cout << "Enter elements:" << endl;
    for (int i = 0; i < size; i++) {
        cout << i + 1 << ": ";
        cin >> array[i];
    }

    countSort(array, size); // FIXED: corrected function name

    cout << "Sorted Array: ";
    for (int i = 0; i < size; i++) {
        cout << array[i] << " "; // FIXED: typo in 'array'
    }

    return 0;
}
