#include<iostream>


using namespace std;


int main() {

    int matrix [4][3] = {{1,0,3},{4,5,6},{7,8,9},{10,11,12}};
    int row = 4;
    int col = 3;

    matrix[2][1] = 18;
    cout << matrix[2][1] << endl;
    cout << "Printing all the values of 2D array using a loop" << endl;
    for (int i{0};i<row; i++) {
        for (int j{0};j < col; j++) {
            cout << matrix[i][j] << endl;
        }
    }


    return 0;
}