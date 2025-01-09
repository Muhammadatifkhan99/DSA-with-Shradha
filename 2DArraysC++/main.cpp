#include<iostream>
#include<vector>


using namespace std;



bool linearSearch(int matrix[][3], const int &row,const int &col,const int &key) {
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
    for (int i{0};i<row;i++) {
        for (int j{0};j<col;j++) {
            if (matrix[i][j] == key) {
                return {i,j};
            }
        }
    }
    return {-1,-1};
}

int maxRowSum(int matrix[][3],int row, int col) {
    int maxSum {0};
    for (int i{0};i < row; i++) {
        int sum {0};
        for (int j{0};j < col; j++) {
            sum += matrix[i][j];
            if (sum > maxSum) {
                maxSum = sum;
            }
        }
    }
    return maxSum;
}

int maxColSum(int matrix[][3],int row, int col) {
    int maxSum {0};
    for (int i{0};i < col; i++) {
        int sum {0};
        for (int j{0};j < row; j++) {
            sum += matrix[j][i];
            if (sum > maxSum) {
                maxSum = sum;
            }
        }
    }
    return maxSum;
}

int diagonalSum(int matrix[][4], int n) {
    int sum {0};
    for (int i{0};i< n;i++) {
        for (int j{0};j< n;j++) {
            if (i == j) {
                sum += matrix[i][j];
            } else if (j == n-i-1) {
                sum += matrix[i][j];
            }
        }
    }
    return sum;
}
int optimizedDiagonalSum(int matrix[][4], int n) {
    int sum {0};
    for (int i{0};i< n;i++) {
        sum += matrix[i][i];
        if (i != n - i -1) {
            sum += matrix[i][n - i - 1];
        }
    }
    return sum;
}

int main() {
    vector<vector<int>> mat = {{1,2,3},{4,5,6},{7,8,9}};

    cout << mat[1][2] << endl;

    cout << mat.size() << endl;
    cout << mat[1].size() << endl;

    for (int i{0};i<mat.size();i++) {
        for (int j{0};j<mat[i].size();j++) {
            cin >> mat[i][j];
        }
        cout << endl;
    }

    for (int i{0};i<mat.size();i++) {
        for (int j{0};j<mat[i].size();j++) {
            cout << mat[i][j] << " " ;
        }
        cout << endl;
    }




    // int matrix [][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    // // int row = 4;
    // // int col = 4;
    // int n = 4;

    // cout << maxRowSum(matrix,row,col) << endl;
    // cout << maxColSum(matrix,row,col) << endl;
    // cout << diagonalSum(matrix,n) << endl;


    // cout << linearSearch(matrix,row,col,target);
    // pair<int,int> rowandCol = {0,0};
    // rowandCol = linearSearchPair(matrix,row,col,target);
    // cout << rowandCol.first << " " << rowandCol.second << endl;

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