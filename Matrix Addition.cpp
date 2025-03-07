#include <iostream>
#define SIZE 3 // Size of the matrix

using namespace std;

int main()
{
    int A[SIZE][SIZE]; // Matrix 1
    int B[SIZE][SIZE]; // Matrix 2
    int C[SIZE][SIZE]; // Resultant matrix
    
    // Input elements in first matrix
    cout << "Enter elements in matrix A of size 3x3: " << endl;
    for(int row = 0; row < SIZE; row++)
    {
        for(int col = 0; col < SIZE; col++)
        {
            cin >> A[row][col];
        }
    }
    
    // Input elements in second matrix
    cout << "\nEnter elements in matrix B of size 3x3: " << endl;
    for(int row = 0; row < SIZE; row++)
    {
        for(int col = 0; col < SIZE; col++)
        {
            cin >> B[row][col];
        }
    }
    
    // Add both matrices A and B entry-wise
    for(int row = 0; row < SIZE; row++)
    {
        for(int col = 0; col < SIZE; col++)
        {
            C[row][col] = A[row][col] + B[row][col];
        }
    }
    
    // Print the resultant matrix C
    cout << "\nSum of matrices A + B = " << endl;
    for(int row = 0; row < SIZE; row++)
    {
        for(int col = 0; col < SIZE; col++)
        {
            cout << C[row][col] << " ";
        }
        cout << endl;
    }
    
    return 0;
}
