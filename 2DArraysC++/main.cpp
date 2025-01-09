#include<iostream>


using namespace std;



bool linearSearch(int matrix[][3],int &row,int &col,int &key) {
    for (int i{0};i<row;i++) {
        for (int j{0};j<col;j++) {
            if (matrix[i][j] == key) {
                return true;
            }
        }
    }
    return false;
}

pair<int,int> linearSearchPair(int matrix[][3],int row,int col,int key) {
    pair<int,int> p1 = {0,0};
    for (int i{0};i<row;i++) {
        for (int j{0};j<col;j++) {
            if (matrix[i][j] == key) {
                return {i,j};
            }
        }
    }
    return {-1,-1};
}



int main() {

    int matrix [4][3] = {{1,2,3},{4,5,6},{7,8,9},{10,11,12}};
    int row = 4;
    int col = 3;
    int target = 8;

    // cout << linearSearch(matrix,row,col,target);
    pair<int,int> rowandCol = {0,0};
    rowandCol = linearSearchPair(matrix,row,col,target);
    cout << rowandCol.first << " " << rowandCol.second << endl;

    // for (int i{0};i<row;i++) {
    //     for (int j{0};j < col;j++) {
    //         if (matrix[i][j] == target) {
    //             cout <<" Element is found at cell: "<< i  << " " << j << endl;
    //             cout << matrix[i][j] << endl;
    //         }
    //     }
    // }

    // matrix[2][1] = 18;
    // cout << matrix[2][1] << endl;
    // cout << "Printing all the values of 2D array using a loop" << endl;
    // for (int i{0};i<row; i++) {
    //     for (int j{0};j < col; j++) {
    //         cout << matrix[i][j] << " ";
    //     }
    //     cout << endl;
    // }


    return 0;
}