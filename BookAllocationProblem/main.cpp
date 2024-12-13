#include <iostream>
#include<vector>
using namespace std;

bool isValid(vector<int> &nums,int n,int m,int mid) {
    int student = 1;
    int pages = 0;
    for(int i=0;i<n;i++) {
        if (nums[i] > mid) {
            return false;
        }
        if (pages + nums[i] <= mid) {
            pages += nums[i];
        } else {
            student ++;
            pages = nums[i];
        }
    }
    return student>m ? false : true;
}

int bookAllocation(vector<int> &nums,int n,int m) {
    if (m > n) {
        return -1;
    }
    int sum {0};
    for (int i=0;i<n;i++) {
        sum += nums[i];
    }
    int st = 0;
    int en = sum;
    int ans = -1;
    while (st < en) {
        int mid = st + (en-st)/2;
        if (isValid(nums,n,m,mid)) {
            ans = mid;
            en = mid - 1;
        } else {
            st = mid + 1;
        }
    }
    return ans;
}

int main() {

    vector<int> nums {2,1,3,4};
    int n = 4;
    int m = 2;
    cout<<bookAllocation(nums,n,m)<<endl;

    return 0;
}