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

void insertionSort(vector<int> &arr, int n) {
    for (int i{1};i<n;i++) {
        int curr = arr[i];
        int previous = i -1;
        while (previous >= 0 && arr[previous] > curr) {
            arr[previous +  1] = arr[previous];
            previous --;
        }
        arr[previous + 1] = curr;
    }
}

void printArray(vector<int> nums, int n) {
    cout << "[ ";
    for (int i{0};i<n;i++) {
        cout<<nums[i] << " ";
    }
    cout << "]";
    cout<<endl;
}


int main() {
    int arr[] = {7,1,9,3,2};
    vector<int> nums {4,1,5,2,3};
    int n = 5;

    insertionSort(nums,n);
    printArray(nums,n);

    return 0;
}