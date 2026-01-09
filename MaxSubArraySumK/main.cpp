#include<iostream>
#include <unordered_map>
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

//most optimize solution to find the maxsub array
int subarraySum(vector<int>& arr, int tar) {
    int n = arr.size();
    int count = 0;
    vector<int> prefixSum (n,0);

    prefixSum[0] = arr[0];
    for(int i{1};i < n; i++){
        prefixSum[i] = prefixSum[i - 1] + arr[i];
    }

    unordered_map<int,int> m;

    for(int j{0};j<n;j++){
        if(prefixSum[j] == tar) count++;

        int val = prefixSum[j] - tar;
        if(m.find(val) != m.end()){
            count += m[val];
        }

        if(m.find(prefixSum[j]) == m.end()){
            m[prefixSum[j]] =0;
        }
        m[prefixSum[j]] ++;
    }
    return count;
}


int main() {
    vector<int> nums = {1,2,3};
    int k = 3;

    cout << maxSubArraySumK(nums,k) << endl;






    return 0;
}