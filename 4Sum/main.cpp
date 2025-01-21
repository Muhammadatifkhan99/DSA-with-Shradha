#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

vector<vector<int>> fourSum (vector<int> &nums,int tar) {

    vector<vector<int>> ans;
    sort(nums.begin(),nums.end());
    int n = nums.size();

    for (int i{0};i<n;i++) {
        if (i > 0 && nums[i] == nums[i - 1]) continue;
        for (int j{i + 1};j<n;){
            int p = j  + 1;
            int q = n - 1;
            while (p < q ) {
                int sum = nums[i] + nums[j] + nums[p] + nums[q];
                if (sum > tar) {
                    q --;
                } else if (sum < tar) {
                    p++;
                } else {
                    ans.push_back({nums[i],nums[j],nums[p],nums[q]});
                    p++;q--;
                    while (p < q && nums[p] == nums[p - 1]) p++;
                }
            }
            //we increment this at the end of the loop and again checks if j's duplicate exist we shoud again increment it so to skip it.....
            j++;
            while (j < n && nums[j] == nums[j - 1]) j++;
        }
    }
    return ans;
}



int main() {
    vector<int> nums = {1,0,-1,0,-2,2};
    int target = 0;

    vector<vector<int>> ans = fourSum(nums,target);
    for (auto val: ans) {
        for (auto el:val) {
            cout << el << " ";
        }
    }



    return 0;
}