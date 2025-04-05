#include <iostream>
using namespace std;

int main() {
    int size, num;
    cout << "Enter the size of an array: ";
    cin >> size;

    int array[size];

    // Taking array input
    for (int i = 0; i < size; i++) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> array[i];
    }

    cout << "Enter the number to search: ";
    cin >> num;

    int count = 0; // ✅ initialize count to 0

    // Linear search
    for (int i = 0; i < size; i++) {
        if (num == array[i]) {  // ✅ Removed extra semicolon
            count = 1;          // ✅ Assignment instead of comparison
            cout << "Num found at index " << i << endl;
            break;
        }
    }

    if (count == 0) {
        cout << "Num not found" << endl;
    }

    return 0;
}
