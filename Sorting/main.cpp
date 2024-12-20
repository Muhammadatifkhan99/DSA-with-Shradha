#include<iostream>
#include<vector>

using namespace std;


void bubbleSort(int nums[], int n) {
    for (int i{0};i<n-1;i++) {
        for (int j = 0;j<n-1-i;j++) {
            if (nums[j] > nums[j+1]) {
                swap(nums[j],nums[j+1]);
            }
        }
    }
}

void selectionSort(int nums[], int n) {
    for (int i{0};i<n-1;i++) {
        int smallestIndex = i;
        for (int j{i+1};j<n;j++) {
            if (nums[j] < nums[smallestIndex]) {
                smallestIndex = j;
            }
        }
        swap(nums[i],nums[smallestIndex]);
    }
}

void printArray(int nums[], int n) {
    cout << "[ ";
    for (int i{0};i<n;i++) {
        cout<<nums[i] << " ";
    }
    cout << "]";
    cout<<endl;
}


int main() {
    int nums[] = {7,1,9,3,2};
    int n = 5;

    selectionSort(nums,n);
    printArray(nums,n);

    return 0;
}