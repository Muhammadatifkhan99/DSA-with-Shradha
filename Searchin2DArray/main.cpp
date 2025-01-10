#include<iostream>
#include<vector>


using namespace std;

bool searchInRow(vector<vector<int>> &mat,int target,int midRow) {
    int n = mat[0].size();
    int st = 0;
    int end = n - 1;
    while (st <= end) {
        int mid = st + (end - st)/2;
        if (target == mat[midRow][mid]) {
            return true;
        } else if (target > mat[midRow][mid]) {
            st = mid + 1;
        } else {
            end = mid - 1;
        }
    }
}


bool search2DArray(vector<vector<int>> &mat,int target) {
    int m = mat.size(); int n = mat[0].size();
    int startRow = 0; int endRow = m - 1;
    while (startRow <= endRow) {
        int midRow = startRow + ( endRow - startRow)/2;
        if (target >= mat[midRow][0] && target <= mat[midRow][n-1]) {
            return searchInRow(mat,target,midRow);
        } else if (target >= mat[midRow][n-1]) {
            startRow = midRow + 1;
        } else {
            endRow = midRow - 1;
        }
    }
}


int main() {

    vector<vector<int>> mat = {{1,3,5,7},{10,11,16,20},{23,30,34,60}};
    int target = 34;
    cout << search2DArray(mat,target) << endl;


    return 0;
}