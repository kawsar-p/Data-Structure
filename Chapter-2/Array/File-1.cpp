// Insertation in the first in array

#include<iostream>
using namespace std;

int main(){
int n;
cout << "\nEnter your array size: ";
cin >> n;

int array[n];

cout << "\nEnter your Elements: " << endl;

for(int i = 0; i< n ; i++){
    cout << "Elements [" << i +1 << "] : " ;
    cin >> array[i];
}

int x;
cout << "\nEnter Elements at beganning: ";
cin >> x;

for(int i =n; i>0;i--){
    array[i] = array [i-1];
}
for(int i = 0; i < n; i++){
array[x];
n++;
}
cout << "\nYour Elements: " << endl;
for(int i = 0; i< n ; i++){
    cout << array[i] << ", ";
}

return 0;
}
