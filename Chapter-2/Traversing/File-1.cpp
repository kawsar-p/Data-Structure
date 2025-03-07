// Elements print

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter your array size: ";
    cin >> n;
    
    int array[n+1];
    
    cout << "\nEnter Elements : " << endl;
    for(int i = 0; i < n; i++){
        cout << "Elements[" << i+1 << "] : ";
        cin >> array[i];
    }
    
    cout << "Display Elements: "<< endl;
    
    for(int i = 0 ; i < n; i++){
        cout << array[i] << ", ";
    }
    
    return 0;
}
