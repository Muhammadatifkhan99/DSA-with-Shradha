#include <algorithm>
#include <iostream>
#include<vector>

using namespace std;

void merge(vector<int> &arr, int start,int mid, int end) {
    vector<int> temp;
    int i = start;
    int j =  mid + 1;

    while (i<= mid && j <= end) {
        if (arr[i] <= arr[j]) {
            temp.push_back(arr[i]);
            i++;
        } else {
            temp.push_back(arr[j]);
            j++;
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
}

void mergeSort(vector<int> &arr,int start, int end) {

    if (start < end) {
        int mid = start + (end - start)/2;

        //left half
        mergeSort(arr,start,mid);
        mergeSort(arr,mid + 1,end);
        merge(arr,start,mid,end);
    }
}

int main() {
    vector<int> arr = {12,31,35,8,32,17};

    mergeSort(arr,0,arr.size() -1);

    for (int b: arr) {
        cout << b << " ";
    }
    return 0;
}