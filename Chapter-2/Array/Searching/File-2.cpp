#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter Array size: ";
    cin >>n;
    
    int array[n];
    
    cout << "\nEnter Elements: " << endl;
    for(int i = 0; i <n; i++){
        cout << "Elements[" << i +1 << "]: ";
        cin >> array[i];
    }
    
    cout << "Display Elements: ";
    for(int i = 0; i <n; i++){
        cout << array[i] << ", ";
    }
    
    int search, found =0;
    cout << "\nEnter your seaching elements: ";
    cin >> search;
    for(int i = 0; i < n; i++){
        if(array[i] == search){
            found = 1;
            cout << "Index number: " << i + 1 << endl;
            break;
        }
    }
    
    if(found == 0){
        cout << "Elements Not found" << endl;
    }
    else{
        cout << search << " Searching element found"<< endl;
    }
    return 0;
}
