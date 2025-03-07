#include<iostream>
using namespace std;

int main(){
    cout << "First Matrix: " << endl;
    int row,col;
    cout << "Enter Row Number: ";
    cin >> row;

    cout << "Enter Column Number: ";
    cin >> col;

    int matrix[row][col];
    int matrix1[row][col];
    int matrix3[row][col];

    cout << "\nEnter First Matrix: " << endl;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << "Matrix[" << i+1 << "][" << j+1 << "]: ";
            cin >> matrix[i][j];
        }
    }


    cout << "\nEnter Second Matrix: " << endl;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << "Matrix[" << i+1 << "][" << j+1 << "]: ";
            cin >> matrix1[i][j];
        }
    }

     cout << "\nMatrix Addition: " << endl;


    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            matrix3[i][j] = matrix[i][j] + matrix1[i][j];
            cout << matrix3[i][j] << " ";
        }
        cout << endl;
    }

return 0;
}
