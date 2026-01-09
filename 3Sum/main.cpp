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

//using hashing algorithms
vector<vector<int>> threeSumhashing(vector<int> &nums) {
    vector<vector<int>> ans;
    int n = nums.size();
    set<vector<int>> uniqueSet;

    for (int i{0};i<n;i++) {
        int target = nums[i];
        set<int> s;
        for (int j={i+1};j<n;j++) {
            int third = target - nums[j];
            if (s.find(third) != s.end()) {
                vector<int> trip = {nums[i], nums[j], target};
                sort(trip.begin(),trip.end());
                uniqueSet.insert(trip);
            }
            s.insert(nums[j]);
        }
    }
    return ans;
}

//most optimized approach

// coded on leetcode
/////
////
///
vector<vector<int>> threeSumBS(vector<int> &nums) {
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());
        int n = nums.size();

        for (int i = 0; i < n - 2; i++) {
            if (i > 0 && nums[i] == nums[i - 1]) continue; // Skip duplicates for i
            for (int j = i + 1; j < n - 1; j++) {
                if (j > i + 1 && nums[j] == nums[j - 1]) continue; // Skip duplicates for j
                int findit = -(nums[i] + nums[j]);
                int start = j + 1;
                int end = n - 1;
                while (start <= end) {
                    int mid = start + (end - start) / 2;
                    if (nums[mid] == findit) {
                        ans.push_back({nums[i], nums[j], nums[mid]});
                        break;
                    } else if (nums[mid] > findit) {
                        end = mid - 1;
                    } else {
                        start = mid + 1;
                    }
                }
            }
        }
        return ans;
    }





    // vector<vector<int>> ans;
    // sort(nums.begin(),nums.end());
    // int n = nums.size();
    // int i = 0;
    // int j = n - 1;
    // while (i < j ) {
    //     int findit = -nums[i] - nums[j];
    //     int start = i + 1;
    //     int end = j - 1;
    //     while (start < end) {
    //         int mid = start + (end - start)/2;
    //         if (nums[mid] == findit) {
    //             ans.push_back({nums[i],nums[j],findit});
    //         } else if(findit < nums[mid]){
    //             end = mid - 1;
    //         } else {
    //             start = mid + 1;
    //         }
    //     }
    //     i++,j--;
    // }
    // return ans;



int main() {
    vector<int> nums = {-1,0,1,2,-1,-4};
    vector<vector<int>> threesum = threeSumBS(nums);

    cout <<"3 Sum using binary Search Approach: " << endl;
    for (auto val: threesum) {
        for (auto el: val) {
            cout << el << " " ;
        }
    }

    // cout << "The triplets whose sum is equal to 0: ";
    // for (auto val: threesum) {
    //     for (auto el:val) {
    //         cout << el << " " ;
    //     }
    // }
    // cout << endl;
    // vector<vector<int>> threesumhashing = threeSumbf(nums);
    // cout << "The triplets whose sum is equal to 0: ";
    // for (auto val: threesumhashing) {
    //     for (auto el:val) {
    //         cout << el << " " ;
    //     }
    // }




    return 0;
}