#include <iostream>
#include<vector>
#include <climits>

using namespace std;


//not acceptable because of O(n) time complexity
int peakIndexInMountainArray(vector<int>& arr) {
    int largest = INT_MIN;

    for(int i=0;i<=arr.size();i++){
        largest = max(largest,arr[i]);
    }
    return largest;
}

int peakIndex(vector<int>& nums){
    int s = 1;
    int end = nums.size() -2;
    while(s <= end){
        int mid = s + (end - s)/2;
        if(nums[mid] > nums[mid-1] && nums[mid] > nums[mid+1]){
            return mid;
        } else if(nums[mid-1] < nums[mid]){
            s = mid + 1;
        } else { //nums[mid-1] > nums[mid]
            end = mid -1;
        }
    }
    return -1;
}
int main() {
    vector<int> nums {0,3,5,8,9,5,2};
    cout<<peakIndex(nums)<<endl;
    cout<<nums[peakIndex(nums)] << endl;

    cout << "using new ftn: " << endl;
    vector<int> arr = {0,2,1,0};
    cout <<peakIndexInMountainArray(nums) << endl;
    cout <<peakIndexInMountainArray(arr) << endl;

    return 0;
}
