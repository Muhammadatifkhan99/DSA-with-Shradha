#include <algorithm>
#include <iostream>
#include <semaphore>
#include<vector>

using namespace std;

int merge(vector<int> &arr, int start,int mid, int end) {
    vector<int> temp;
    int invCount = 0;
    int i = start;
    int j =  mid + 1;

    while (i<= mid && j <= end) {
        if (arr[i] <= arr[j]) {
            temp.push_back(arr[i]);
            i++;
        } else {
            temp.push_back(arr[j]);
            j++;
            invCount += (mid - i + 1);
        }
    }
    //if the elements of the left array are left, to bring them back to the temp array
    while (i <= mid) {
        temp.push_back(arr[i]);
        i++;
    }
    while (j <= end) {
        temp.push_back(arr[j]);
        j++;
    }

    //place the elements of the temp array in the original array;
    for (int idx{0};idx < temp.size();idx++) {
        arr[start + idx] = temp[idx];
    }
    return invCount;
}

int mergeSort(vector<int> &arr, int start, int end) {
    int invCount = 0;
    int leftCount = 0;
    int rightCount = 0;
    if (start < end) {
        int mid = start + (end - start)/2;

        leftCount = mergeSort(arr,start,mid);
        rightCount = mergeSort(arr,mid+1, end);

        invCount = merge(arr,start,mid,end);

        return invCount + leftCount + rightCount;
    }
    return 0;
}

int countInversion(vector<int> &arr) {
    int count = 0;
    int end = arr.size() - 1;
    for (int i=0;i<=end;i++) {
        for (int j=i+1;j<=end;j++) {
            if (arr[i] > arr[j]) {
                count = count + 1;
            }
        }
    }
    return count;
}

//vectors are very important to be passed separatly by reference,by default they are passed as copy, while array are passed by reference.
int main() {
    vector<int> arr = {6,3,5,2,7};

    // int ans = mergeSort(arr,0,arr.size()-1);
    // cout << ans  << endl;

    cout<< countInversion(arr) << endl;
    return 0;
}