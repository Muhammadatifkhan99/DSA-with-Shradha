#include<iostream>
#include<vector>

using namespace std;

void printSubsets(vector<int> &arr, vector<int> &ans, int i) {
    if (i == arr.size()) {
        for (int val: ans) {
            cout << val << " ";
        }
        cout << endl;
        return;
    }
    ans.push_back(arr[i]);
    printSubsets(arr,ans,i+1);

    //backtracking step
    ans.pop_back();
    //exculsion step
    printSubsets(arr,ans,i+1);
}

//leetcode problem

void printSubsets(vector<int> &arr, vector<int> &ans, int i,vector<vector<int>> &allSubsets) {
    if (i == arr.size()) {
        allSubsets.push_back({ans});
        return;
    }
    ans.push_back(arr[i]);
    printSubsets(arr,ans,i+1, allSubsets);

    //backtracking step
    ans.pop_back();
    //exculsion step
    printSubsets(arr,ans,i+1,allSubsets);
}
vector<vector<int>> subsets(vector<int>& nums) {
    vector<vector<int>> allSubsets;
    vector<int> ans;
    printSubsets(nums,ans,0,allSubsets);

    return allSubsets;
}
//problem subsets 2


int main() {
    vector<int> arr {1,2,3};
    vector<int> ans;

    printSubsets(arr,ans,0);







    return 0;
}