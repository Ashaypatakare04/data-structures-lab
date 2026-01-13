#include <iostream>
using namespace std;

int main() {
    int arr[10] = {10, 20, 30, 40, 50};
    int size = 5;
    int i;

    // 1. Traversal
    cout << "Array elements: ";
    for (i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // 2. Insertion (insert 25 at position 2)
    int pos = 2;
    int value = 25;
    for (i = size; i > pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos] = value;
    size++;

    cout << "After insertion: ";
    for (i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // 3. Deletion (delete element at position 3)
    pos = 3;
    for (i = pos; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }
    size--;

    cout << "After deletion: ";
    for (i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // 4. Searching (search 40)
    int key = 40;
    for (i = 0; i < size; i++) {
        if (arr[i] == key) {
            cout << "Element " << key << " found at index " << i << endl;
            break;
        }
    }

    // 5. Updation (update index 1 to 100)
    arr[1] = 100;

    cout << "After updation: ";
    for (i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
