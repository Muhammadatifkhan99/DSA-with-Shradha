#include<iostream>
#include<vector>
#include<algorithm>
#include <unordered_map>

using namespace std;

//brute force approach for solving two sums
pair<int,int> twoSum (vector<int> &mat, int target) {
    int n = mat.size();
    int sum {0};
    for (int i{0};i<n;i++) {
        int first = mat[i];
        for (int j= i + 1;j<n;j++) {
            int second = mat[j];
            sum = first + second;
            if (sum == target) {
                return {i,j};
            }
        }

    }
    return {-1,-1};
}
//sorting approach

pair<int,int> twoSum1(vector<int> &arr,int target) {
    sort(arr.begin(),arr.end());
    int n = arr.size();
    int start {0};
    int end = n - 1;
    while (start < end) {
        int sum = {0};
        sum = arr[start] + arr[end];
        if (sum == target) {
            return {start,end};
        }else if (sum > target) {
            end --;
        } else
            start ++;
    }
    return {-1,-1};
}

///using hashing to solve the two sum problem on leetcode

vector<int> twoSums (vector<int> arr,int target) {
    pmr::unordered_map<int,int> m;
    vector<int> ans;
    for (int i{0};i<arr.size();i++) {
        int first = arr[i];
        int second = target - first;
        //checks if the key exists in the array or vector
        // m.find(sec) != m.end():
        // Checks whether the iterator returned by m.find(sec) is not equal to m.end().
        // This is effectively checking if the key sec exists in the map.

        //if m.find(second) returns true( means a value is found in map) then it will not be equal to m.end() so the condition will be true and we
        // execute the code inside the block

        if (m.find(second) != m.end()) {
            ans.push_back(i);
            ans.push_back(m[second]);
            break;
        }
        ///this is storing the value as key and i as value, e.g m[5] = 0 will be add like 5 as key and 0 as value.
        m[first] = i;
    }
    return ans;
}


int main() {
    vector<int> v = {5,2,11,7,15};
    int target  = 9;
    // cout << "Solution using the brute force approach" << endl;
    // pair<int,int> p1 =  twoSum1(v,target);
    // cout << p1.first << endl;
    // cout << p1.second << endl;
    // cout <<"Better Approach then the brute force" << endl;
    // cout <<"The array after sorting is: " << endl;
    for (int val: twoSums(v,target)) {
        cout << val << endl;
    }



    return 0;
}