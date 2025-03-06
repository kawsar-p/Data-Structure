#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "\nEnter your array size: ";
    cin >> n;

    int array[n + 1]; // Extra space for new element

    cout << "\nEnter your Elements: " << endl;
    for (int i = 0; i < n; i++) {
        cout << "Element [" << i + 1 << "]: ";
        cin >> array[i];
    }

    int x, pos;
    cout << "\nEnter element to insert: ";
    cin >> x;
    cout << "Enter index (0 to " << n << "): ";
    cin >> pos;

    if (pos < 0 || pos > n) {
        cout << "\nInvalid index!";
        return 1;
    }

    for (int i = n; i > pos; i--) {
        array[i] = array[i - 1];
    }
    
    array[pos] = x;
    n++;

    cout << "\nYour updated elements: " << endl;
    for (int i = 0; i < n; i++) {
        cout << array[i] << " ";
    }
    cout << endl;

    return 0;
}
