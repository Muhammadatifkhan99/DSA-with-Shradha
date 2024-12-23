#include<iostream>
#include<vector>

using namespace std;


vector<int> merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    //for array nums2
    int j = n - 1;

    //for array nums1
    int i = m - 1;

    int index = m + n - 1;

    while(i >= 0 && j>= 0){
        if(nums1[i] >= nums2[j]){
            nums1[index] = nums1[i];
            index --;
            i--;
        } else {
            nums1[index] = nums2[j];
            index --;
            j--;
        }
    }
    while(j>=0){
        nums1[index] = nums2[j];
        index --;
        j--;
    }
    return nums1;
}

int main() {
    vector<int> nums1 {1,2,3,0,0,0};
    vector<int> nums2 {2,4,5};
    int m {3};
    int n {3};
    for (int val: merge(nums1,m,nums2,n)) {
        cout<<val << endl;
    }


    return 0;
}