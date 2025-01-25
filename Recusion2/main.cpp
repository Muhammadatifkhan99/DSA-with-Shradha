#include<iostream>
#include<vector>

using namespace std;

int fibonacci(int n) {
    if (n <= 0) return 0;
    if (n == 1) return 1;

    return fibonacci(n-1) + fibonacci(n -2);
}

//check if the array is sorted or not

bool isSorted(vector<int> &arr, int n) {
    if (n == 1 || n == 0) {
        return true;
    }
    return arr[n - 1] >= arr[n - 2] && isSorted(arr,n-1);
}

//binary search using recursion
int binarySearch(vector<int> arr, int tar, int start, int end) {
    if (start <= end) {
        int mid = start + (end - start)/2;

        if (arr[mid] == tar) {
            return arr[mid];
        }
        if (arr[mid] < tar) {
            return binarySearch(arr,tar,mid+1, end);
        }
        else {
            return binarySearch(arr,tar,start,mid - 1);
            //arr[mid] > tar
        }
    }
    return -1;
}

int main() {
    vector<int> arr = {1,2,3,4,5};
    int tar = 9;
    int start = 0;
    int end = arr.size() - 1;
    int n = 19;

    cout << binarySearch(arr,tar,start,end) << endl;

    cout << "The array is sorted: " << isSorted(arr,arr.size()) << endl;
    // cout << "The fibonacci number for " << n << " is:" << fibonacci(n) << endl;


    return 0;
}