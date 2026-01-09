#include <iostream>
#include<vector>

using namespace std;

void printS(int ind, vector<int> &ans, int s, int sum, int arr[], int n) {
    if (ind == n) {
        if (s == sum) {
            for (auto it: ans) { cout << it << " "; }
            cout << endl;
        }
        return;
    }
    ans.push_back(arr[ind]);
    s += arr[ind];
    printS(ind+1,ans,s,sum,arr,n);
    //backtracking
    ans.pop_back();
    s -= arr[ind];
    printS(ind+1,ans,s,sum,arr,n);
}


int main() {
    int arr[] = {1,2,1};
    int n = 3;
    int sum = 2;
    vector<int> ans;

    printS(0,ans,0,sum, arr,n);

    return 0;
}