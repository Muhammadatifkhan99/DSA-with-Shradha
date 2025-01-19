#include<iostream>
#include<vector>

using namespace std;


bool search2DMat(vector<vector<int>> &mat,int target) {
    int r {0};
    //n is columns
    int n = mat[0].size();
    //m is number of rows
    int m = mat.size();
    int c = n - 1;
    while (r <= m && c >= 0) {
        if (target == mat[r][c] ) {
            return true;
        } else if (target < mat[r][c]) {
            c--;
        } else {
            r ++;
        }
    }
    return false;
}


int main() {
    vector<vector<int>> mat = {{1,4,7,11,15},{2,5,8,12,19},{3,6,9,16,22},{10,13,14,17,24},{18,21,23,26,30}};
    int target = 5;

    cout << search2DMat(mat,target) << endl;





    return 0;
}