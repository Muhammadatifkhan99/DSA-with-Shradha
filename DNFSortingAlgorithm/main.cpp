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
        index ++;
    }
    for (int i{0};i<=countofone;i++) {
        nums[index] = 1;
        index ++;
    }
    for (int i{0};i<=countoftwos;i++) {
        nums[index] = 2;
        index ++;
    }
    // printArray(nums);
}

void dnfSorting(vector<int> &nums) {
    int n = nums.size();
    int mid {0};
    int low {0};
    int high {n - 1};       //1 less then the actual size
    while (mid <= high) {
        if (nums[mid] == 0) {
            swap(nums[low],nums[mid]);
            mid ++, low ++;
        } else if (nums[mid] == 1) {
            mid++;
        } else {
            swap(nums[high], nums[mid]);
            high --;
        }
    }
}

void exactGiBvaluesfromGB(int GB) {
    long double ans = GB * 0.931;
    cout << ans << endl;
}



int main() {
    vector<int> nums {2,0,2,1,1,0,1,2,0,0};
    dnfSorting(nums);
    cout << "Sorting using Pure DNF: " << endl;
    printArray(nums);
    cout << endl;
    cout << "Sorting using an Optimized Solution: " << endl;
    sorting(nums);
    printArray(nums);

    cout << endl;
    exactGiBvaluesfromGB(2);
    return 0;
}