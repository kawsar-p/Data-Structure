#include <iostream>
using namespace std;

int main()
{
    int i, first, last, middle, size, search, array[100];
    
    cout << "Enter size of array: ";
    cin >> size;
    
    cout << "Enter elements in array: " << endl;
    for (i = 0; i < size; i++)
    {
        cin >> array[i];
    }
    
    cout << "Enter value to find: ";
    cin >> search;
    
    first = 0;
    last = size - 1;
    middle = (first + last) / 2;
    
    while (first <= last)
    {
        if (search > array[middle])
            first = middle + 1;
        else if (array[middle] == search)
        {
            cout << search << " found at location " << middle + 1 << "." << endl;
            break;
        }
        else
            last = middle - 1;
        
        middle = (first + last) / 2;
    }
    
    if (first > last)
        cout << "Not found! " << search << " isn't present in the list." << endl;
    
    return 0;
}
