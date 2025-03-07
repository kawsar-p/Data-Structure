#include <iostream>
using namespace std;

int main() {
    
    int n, pos;

    cout << "Enter size of the array: ";
    cin >> n;
    
    int arr[n + 1];
    
    cout << "Enter elements in array: "<< endl;
    for(int i = 0; i < n; i++) {
        cout << "Element[" << i +1 << "] : ";
        cin >> arr[i];
    }
    
    cout << "\nEnter the element position that you want to delete: ";
    cin >> pos;
    
    if(pos > n || pos <= 0) {
        cout << "Invalid position! Please enter a position between 1 to " << n << endl;
    } else {
        for(int i = pos - 1; i < n - 1; i++) {
            arr[i] = arr[i + 1];
        }
        n--;
        
        cout << "Array elements after deletion: ";
        for(int i = 0; i < n; i++) {
            cout << arr[i] << ", ";
        }
        cout << endl;
    }
    
    return 0;
}
