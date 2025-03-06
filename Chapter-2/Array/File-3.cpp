#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter array size: ";
    cin >> n;
    int array[n+1];

    cout << "\nEnter Elements: " << endl;
    for(int i = 0; i < n ; i++){
        cout << "Element [" << i+1 << "] : ";
        cin >> array[i];
    }

    int x;
    cout << "\nEnter Element for last index: ";
    cin >> x;

    array[n] = x;
    n++;

    cout << "\nPrint the updated array" << endl; 
    for (int i = 0; i < n; i++) {
        cout << array[i] << " ";
    }

    return 0;
}
