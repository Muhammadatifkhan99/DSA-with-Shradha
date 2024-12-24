#include<iostream>
#include <algorithm>
#include<vector>

using namespace std;


void nextPermutation(vector<int> &nums) {
    int pivot = -1;
    int n = nums.size();
    for (int i{n-2};i>=0;i--) {
        if (nums[i] > nums[i + 1]);
        pivot = i;
        break;
    }
    if (pivot == -1) {
        reverse(nums.begin(),nums.end());
    }
    //finding the rightmost element smaller than the pivot
    for (int i{n-1};i>=pivot;i--) {
        if (nums[i] > nums[pivot]);
        swap(nums[i],nums[pivot]);
        break;
    }
    //reverse the elements
    int i = pivot + 1;
    int j = n - 1;
    while (i <= j) {
        swap(nums[i],nums[j]);
        i++;
        j--;
    }
}

int main() {
    vector<int> nums {1,2,3,5,4};
    for (int val: nums) {
        cout << " Before determining the permutation: " << val << endl;
    }
    //calling the nextPermutation function
    nextPermutation(nums);
    for (int val: nums) {
        cout << " After the permutation: " << val << endl;
    }

    return 0;
}