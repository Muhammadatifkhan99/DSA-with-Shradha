#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


// int majorityElementBF(vector<int> nums){
//     int n = nums.size();
//     for(int val: nums){
//         int count{0};
//         for(int el: nums){
//             if(val == el){
//                 count++;
//             }
//         }
//         if(count> n/2){
//             return val;
//         }
//     }
// }

// //Majority Element: an optimize solution

int majorityElementOS(vector<int> &nums){
    int n = nums.size();
    sort(nums.begin(),nums.end());
    int freq {1};
    int ans = nums[0];
    for(int i{};i<n;i++){
        if (nums[i] == nums[i-1]){
            freq++;
        } else {
            freq = 1;
            ans = nums[i];
        }
        if (freq > n/2){
            return ans;
        }
    }
    return ans;
}

//MOORE'S Voting Algorithm
int mooreAlgorithm(vector<int> nums){
    int freq{0};
    int ans{0};
    for(int i{0};i<nums.size();i++){
        if(freq == 0){
            ans = nums[i];
        }
        if(ans == nums[i]){
            freq ++;
        }else {
            freq --;
        }
    }

    //this step ensures that if the answer does not exists in the array then return -1;
    int count {0};
    for(int val: nums){
        if (val == ans){
            count ++;
        }
    }
    if(count > nums.size()/2){
        return ans;
    }
    else
        return -1;
}

// vector<int> pairSum(vector<int> nums, int target){
//   vector<int> ans;
//   for(int i{0};i<nums.size();i++){
//     for(int j{i+1};j<nums.size();j++){
//       if(nums[i] == nums[j])
//           ans.push_back(i);
//           ans.push_back(j);
//           return ans;
//     }
// }
// }


//pair sum optimized approach---> Two Pointer Approach

vector<int> pairSumTwoPointers(vector<int>& nums,int target){
    vector<int> ans;
    int i {0};
    int n = nums.size();
    int j = n - 1;
    int pairSum {0};
    
    while(i<j){
        pairSum = nums[i] + nums[j];
        if(pairSum > target){
            j --;
        } else if (pairSum < target){
            i ++;
        } else {
            ans.push_back(i);
            ans.push_back(j);
            return ans;
        }
    }
    return ans;
}

int main(){
    int nums[] = {1,2,2,1,1,1,1};
    int size {6};
    vector<int> nums {1,2,2,1,1};
    // cout << majorityElementOS(nums) << endl;

    // vector<int> nums = {2,7,11,15};
    // int target = 9;
    // vector<int> ans = pairSumTwoPointers(nums,target);
    // cout << ans[0] << " " << ans[1] << endl;


//    int target = 7;
//    vector<int> ans = pairSum(num,target);
//    for(int val: ans){
//      cout << val ;
//    }
    // cout<<mooreAlgorithm(num);

    return 0;
}