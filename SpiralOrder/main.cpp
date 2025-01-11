#include <iostream>
#include<vector>

using namespace std;


vector<int> spiralOrder(vector<vector<int>> mat) {
    int m = mat[0].size(), n = mat.size();
    int srow = 0;
    int erow = m - 1;
    int scol = 0;
    int ecol = n - 1;
    vector<int> ans;

    while (srow <= erow && scol <= ecol) {
        //top
        for (int j = scol; j<= ecol;j++) {
            ans.push_back(mat[srow][j]);
        }
        //right
        for (int i = erow; i<= erow;i++) {
            ans.push_back(mat[i][ecol]);
        }

        //bottom
        for (int j = ecol - 1; j>= scol;j--) {
            ans.push_back(mat[erow][j]);
        }
        //left
        for (int j = erow + 1; j>= srow + 1;j--) {
            ans.push_back(mat[j][scol]);
        }
        srow ++;
        erow --;
        scol ++;
        ecol --;
    }
    return ans;
}





int main() {
    vector<vector<int>> mat =






    return 0;
}