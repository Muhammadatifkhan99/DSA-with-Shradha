#include <iostream>
#include <limits.h>
#include <vector>


using namespace std;

bool isPossible(vector<int>&nums,int n,int m,int mid) {
    int painter {1}; int time {0};
    for(int i=0;i<n;i++) {
        if (time + nums[i] <= mid) {
            time += nums[i];
        } else {
            painter ++;
            time = nums[i];
        }
    }
    return painter <= m;
}

int minTimetoPaint(vector<int>& nums, int n, int m) {
    int sum {0};
    int maxVal = INT_MIN;
    for (int i{0};i<n;i++) {
        sum += nums[i];
        maxVal = max(maxVal, nums[i]);
    }
    int st = maxVal;
    int end = sum;
    int ans =  -1;
    while (st < end) {
        int mid = st + (end - st)/2;
        if (isPossible(nums, n, m, mid)) { //if this is the case move towards the left
            ans = mid;
            end = mid - 1;
        } else // move towards the right
            st = mid + 1;
    }
    return ans;
}


int main() {
    vector<int> nums = {40,30,10,20};

    cout<<minTimetoPaint(nums, 4, 2)<<endl;

    return 0;
}
