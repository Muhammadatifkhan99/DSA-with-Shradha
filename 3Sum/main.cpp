#include<iostream>
#include <set>
#include<vector>
#include<algorithm>

using namespace std;

//bruteforce for finding a triplet that sums equals to 0 and that needs to be stored only once in the array

vector<vector<int>> threeSumbf(vector<int> &nums) {
    vector<vector<int>> ans;
    int n = nums.size();
    set<vector<int>> s;

    for (int i{0};i<n;i++) {
        for (int j={i+1};j<n;j++) {
            for (int k{j+1};k<n;k++) {
                if (nums[i] + nums[j] + nums[k] == 0) {
                    vector<int> triplet = {nums[i],nums[j],nums[k]};
                    sort(triplet.begin(),triplet.end());

                    if (s.find(triplet) == s.end()) {
                        s.insert(triplet);
                        ans.push_back(triplet);
                    }
                }
            }
        }
    }
    return ans;
}

int main() {
    vector<int> nums = {-1,0,1,2,-1,-4};
    vector<vector<int>> threesum = threeSumbf(nums);

    cout << "The triplets whose sum is equal to 0: ";
    for (auto val: threesum) {
        for (auto el:val) {
            cout << el << " " ;
        }
    }




    return 0;
}