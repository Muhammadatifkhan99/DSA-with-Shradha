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

void dnfSorting(vector<int> &nums) {
    int n = nums.size();
    int mid {0};
    int low {0};
    int high {n - 1};       //1 less then the actual size
    while (mid <= high) {
        if (nums[mid] == 0) {
            swap(nums[low],nums[mid]);
        } else if (nums[mid] == 1) {
            mid = mid + 1;
        } else {
            swap(nums[high], nums[mid]);
            high --;
        }
    }
}



int main() {
    vector<int> nums {2,0,2,1,1,0,1,2,0,0};
    dnfSorting(nums);
    return 0;
}