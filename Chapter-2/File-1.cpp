// Insertation in the first in array

#include<iostream>
using namespace std;

int main(){
int n;
cout << "Enter your array size: ";
cin >> n;

int array[n];

cout << "Enter your elements: " << endl;

for(int i = 0; i< n ; i++){
    cout << "Elements [" << i +1 << "] : " ;
    cin >> array[i];
}

cout << "\nYour Elements: " << endl;
for(int i = 0; i< n ; i++){
    cout << array[i] << ", ";
}

return 0;
}
