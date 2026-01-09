#include <iostream>
#include <vector>


using namespace std;

int partition(vector<int> &arr,int start,int end) {
    int idx = start - 1;
    int pivote = arr[end];

    for (int j = start;j< end;j++) {
        if (arr[j] <= pivote) {
            idx++;
            swap(arr[j],arr[idx]);
        }
    }
    idx ++;
    swap(arr[end],arr[idx]);
    return idx;
}

void quickSort(vector<int> &arr, int start, int end) {
    if (start < end) {
        int pIndex = partition(arr,start,end);

        //left half call
        quickSort(arr,start,pIndex - 1);
        quickSort(arr,pIndex + 1, end);
    }
}


int main() {
    vector<int> nums = {12,31,35,8,32,17};

    quickSort(nums,0,nums.size() - 1);

    for (int v : nums) {
        cout << v << " ";
    }
    return 0;
}