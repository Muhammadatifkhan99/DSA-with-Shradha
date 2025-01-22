#include<iostream>
#include<vector>

using namespace std;

int maxSubArraySumK(vector<int> &arr, int tar) {
    int count = 0;
    int n = arr.size();

    for (int i{0};i<n;i++) {
        int sum {0};
        for (int j{i};j<n;j++) {
            sum += arr[j];
            if (sum == tar) {
                count ++;
            }
        }
    }
    return count;
}


int main() {
    vector<int> nums = {1,2,3};
    int k = 3;

    cout << maxSubArraySumK(nums,k) << endl;






    return 0;
}