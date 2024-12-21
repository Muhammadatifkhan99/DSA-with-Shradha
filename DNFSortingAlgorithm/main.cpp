#include<iostream>
#include<vector>

using namespace std;

void printArray(vector<int> &nums) {
    int n = nums.size();
    for (int i{0};i<n;i++) {
        cout<<nums[i] << " ";
    }
}

void sorting(vector<int> &nums) {
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
    int index{0};
    for (int i{0};i<=countofzero;i++) {
        nums[index] = 0;
    }
    for (int i{0};i<=countofone;i++) {
        nums[index] = 1;
    }
    for (int i{0};i<=countoftwos;i++) {
        nums[index] = 2;
    }
    printArray(nums);
}





int main() {
    vector<int> nums {2,0,2,1,1,0,1,2,0,0};
    sorting(nums);
    return 0;
}