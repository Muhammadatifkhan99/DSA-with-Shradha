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


int main() {
    vector<int> arr = {1,2,3,4,5};
    int n = 19;

    cout << "The array is sorted: " << isSorted(arr,arr.size()) << endl;
    // cout << "The fibonacci number for " << n << " is:" << fibonacci(n) << endl;


    return 0;
}