#include <iostream>
#include<vector>
#include<stack>
#include <unordered_map>

using namespace std;

vector<int> nextGreaterElement(vector<int> &arr) {
    vector<int> ans(arr.size(),0);
    stack<int> s;
    for (int i{0};i<arr.size();i++) {
        //we need to skip values that do not satisfy the condition
        while (s.size()>0 && arr[i] <= s.top()) {
            s.pop();
        }
        //two cases here
        //1. may be the stack is empty down the way
        if (s.empty()) {
            ans[i] = -1;
        } else { ///may be there are values that satisfy the condition
            ans[i] = s.top();
        }
        s.push(arr[i]);
    }
    return ans;
}


int main() {

    vector<int> arr = {6,8,0,1,3};
    vector<int> ans;
    ans = nextGreaterElement(arr);
    for (int v: ans) {
        cout << v << " ";
    }



    // vector<int> nums1 = {4,1,2};
    // vector<int> nums2 = {1,3,4,2};
    // vector<int> ans;
    //
    // stack<int> s;
    // unordered_map<int,int> m;
    // for (int i=nums2.size()-1;i>=0;i--) {
    //     while (s.size() > 0 && nums2[i] >= s.top()) { // s.top()) <= nums2[i]
    //         s.pop();
    //     }
    //     if (s.empty()) {
    //         m[nums2[i]] = -1;
    //     } else {
    //         m[nums2[i]]= s.top();
    //     }
    //     s.push(nums2[i]);
    // }
    //
    // for (int i=0;i<nums1.size();i++) {
    //     ans.push_back(m[nums1[i]]);
    // }
    // for (int v:ans) {
    //     cout << v << " " ;
    // }
    return 0;
}