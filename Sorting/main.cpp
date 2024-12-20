#include<iostream>
#include<vector>

using namespace std;


void bubbleSort(vector<int> &nums, int n) {
    for (int i{0};i<n-1;i++) {
        for (int j = 0;j<n-1-i;j++) {
            if (nums[j] > nums[j+1]) {
                swap(nums[j],nums[j+1]);
            }
        }
    }
}

void printArray(vector<int> &nums, int n) {
    cout << "[";
    for (int i{0};i<n;i++) {
        cout<<nums[i] << ",";
    }
    cout << "]";
    cout<<endl;
}


int main() {
    int n = 5;
    vector<int> nums = {7,1,9,3,2};

    bubbleSort(nums,n);
    printArray(nums,n);

    return 0;
}