#include <iostream>
#include <limits.h>
#include<vector>


using namespace std;

int largestIndex(vector<int> nums) {
    int largest = INT_MIN;
    int index {0};
    for (int i{0};i<nums.size();i++) {
        if (nums[i] > largest) {
            largest = nums[i];
            index = i;
        }
    }
    return index;
}


int main() {
    vector<int> nums {8,9,2,4,12};
    cout << largestIndex(nums) << endl;
    return 0;
}