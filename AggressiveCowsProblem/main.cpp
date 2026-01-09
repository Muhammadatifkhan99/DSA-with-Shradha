#include<iostream>
#include <vector>
#include<algorithm>



using namespace std;

bool isPossible(vector<int> &nums,int C, int N,int mid) {
    int cow {1};
    int lastStallPos = nums[0];
    for (int i= 1;i<N;i++) {
        if (nums[i] - lastStallPos >= mid) {
            cow ++;
            lastStallPos = nums[i];
        } if (cow == C) {
            return true;
        }
    }
    return false;
}

int minDistance(vector<int> &nums,int &C, int & N) {
    sort(nums.begin(),nums.end());
    int st = 1;
    int end = nums[N-1] - nums[0];
    int ans = -1;
    while (st <= end) {
        int mid = st + (end - st)/2;
        if (isPossible(nums,C,N,mid)) {
            ans = mid;
            //move to right if a value is possible
            st = mid + 1;
        } else {
            //move to left
            end = mid - 1;
        }
    }
    return ans;
}



int main() {
    vector<int> nums {1,2,8,4,9};
    int N = 5;
    int C = 3;
    cout<<minDistance(nums,C,N)<<endl;
    return 0;
}