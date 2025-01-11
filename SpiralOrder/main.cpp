#include <iostream>
#include<vector>

using namespace std;


vector<int> spiralOrder(vector<vector<int>> mat) {
    int n = mat[0].size(), m = mat.size();
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
        for (int i = erow + 1; i<= erow;i++) {
            ans.push_back(mat[i][ecol]);
        }

        //bottom
        for (int j = ecol - 1; j>= scol;j--) {
            if (srow == erow) {
                break;
            }
            ans.push_back(mat[erow][j]);
        }
        //left
        for (int j = erow - 1; j>= srow + 1;j--) {
            if (scol == ecol) {
                break;
            }
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
    vector<vector<int>> mat = {{1,2,3},{4,5,6},{7,8,9}};
    for (int val: spiralOrder(mat)) {
        cout << val << endl;
    }






    return 0;
}