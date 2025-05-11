#include <iostream>
#include <variant>
#include<vector>

using namespace std;

void helper (vector<vector<int>> &mat, int r,int c,string path,vector<string> &ans,vector<vector<bool>> &vis) {
    int n = mat.size();
    if (r < 0 || c < 0 || r >= n || c >= n || mat[r][c] == 0 || vis[r][c] == true) {
        return;
    }
    //base case
    if (r == n -1 && c == n - 1) {
        ans.push_back(path);
        return;
    }
    vis[r][c] = true;
    helper(mat,r+1,c,path+"D",ans,vis); //Down
    helper(mat,r-1,c,path+"U",ans,vis); //Up
    helper(mat,r,c+1,path+"R",ans,vis); //Right
    helper(mat,r,c-1,path+"L",ans,vis); //Left

    //backtracking step
    vis[r][c] = false;
}

vector<string> findPath(vector<vector<int>> &mat) {
    int n = mat.size();
    vector<string> ans;
    vector<vector<bool>> vis(n,vector<bool>(n,false));
    string path = "";

    helper(mat,0,0,path,ans,vis);

    return ans;
}

int main() {

    vector<vector<int>> maze = {{1,0,0,0},{1,1,0,1},{1,1,0,0},{0,1,1,1}};

    vector<string> ans = findPath(maze);

    for (string ch:ans) {
        cout << ch << endl;
    }




    return 0;
}