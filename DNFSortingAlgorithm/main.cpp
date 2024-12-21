#include<iostream>
#include<vector>

using namespace std;


vector<int> sorting(vector<int> &nums) {
    int n = nums.size();
    int countofzero = {0};
    int countofone = {0};
    int countoftwos = {0};
    for (int i{0};i<n;i++) {
        if (nums[i] == 0) {
            countofzero ++;
        } else if (nums[i] == 1) {
            countofone ++;
        } else {
            countoftwos ++;
        }
    }
    vector<int> sorted;
    for (int i{0};i<=countofzero;i++) {
        sorted.push_back(0);
    }
    for (int i{0};i<=countofone;i++) {
        sorted.push_back(1);
    }
    for (int i{0};i<=countoftwos;i++) {
        sorted.push_back(2);
    }
    return sorted;
}






int main() {
    vector<int> nums {2,0,2,1,1,0,1,2,0,0};
    for (int val: sorting(nums)) {
        cout << val << " ";
    }

    return 0;
}