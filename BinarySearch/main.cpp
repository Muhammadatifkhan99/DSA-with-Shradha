#include <iostream>
#include <vector>

using namespace std;

int binarySearch(vector<int>& nums, int target){
    int st{0};
    int n = nums.size();
    int end = n -1;
    while(st<=end){
//        int mid = (st + end)/2;
        int mid = st + (end - st)/2;
        if (target > nums[mid]){
            st = mid + 1;
        }
        else if (target < nums[mid]){
            end = mid - 1;
        } else
            return mid; //ans
    }
    return -1;
}

int recBinarySearch(vector<int> nums, int target,int st, int end){
    if(st<= end){
        int mid = st + (end -st)/2;
        if(target > nums[mid]){
            return recBinarySearch(nums,target,mid + 1,end);
        }
        else if(target < nums[mid]){
            return recBinarySearch(nums,target,st,mid - 1);
        }
        else {
            return mid;
        }
    }
    return -1;
}

int main() {
    vector<int> nums {-1,0,3,4,5,9,12};
    int target = 12;

    vector<int> nums2 {-1,0,3,5,9,12};
    int target2 {0};
    int index = binarySearch(nums,target);
    cout<<index<<endl;
    cout<<"Using Recursive Approach"<<endl;
    int st {0};
    int end = nums.size() - 1;
    cout<<recBinarySearch(nums,target,st,end)<<endl;

    int index2 = binarySearch(nums2,target2);
    cout<<index2<<endl;
    return 0;
}
