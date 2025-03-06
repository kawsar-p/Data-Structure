#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "\nEnter your array size: ";
    cin >> n;

    int array[n + 1]; // Increased size to accommodate the new element

    cout << "\nEnter your Elements: " << endl;
    for (int i = 0; i < n; i++) {
        cout << "Element [" << i + 1 << "]: ";
        cin >> array[i];
    }

    int x;
    cout << "\nEnter element to insert at the beginning: ";
    cin >> x;

    // Shift elements to the right
    for (int i = n; i > 0; i--) {
        array[i] = array[i - 1];
    }
    
    // Insert the new element at the beginning
    array[0] = x;
    n++; // Increase the array size counter

    cout << "\nYour Elements: " << endl;
    for (int i = 0; i < n; i++) {
        cout << array[i] << " ";
    }
    cout << endl;
    
    return 0;
}
