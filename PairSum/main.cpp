#include<iostream>
#include<vector>

using namespace std;

//some how correct solution
//vector<int> pairSum(vector<int> nums, int target){
//    int n = nums.size();
//    vector<int> ans;
//    for(int i{0};i<n;i++){
//        if(nums[i] + nums[i+1] == target){
//            ans.push_back(i);
//            ans.push_back(i+1);
//            return ans;
//        }
//    }
//    return ans;
//}

vector<int> pairSum(vector<int> nums,int target){
    int n = nums.size();
    vector<int> ans;
    for(int i{0};i<n;i++){
        for(int j{i+1};j<n;j++){
            if(nums[i] + nums[j] == target){
                ans.push_back(i);
                ans.push_back(j);
                return ans;
            }
        }
    }
    return ans;
}
int main() {
    vector<int> nums = {2,7,11,15};
    int target {13};

    vector<int> ans = pairSum(nums,target);
    for(int val: ans){
        cout<<val<<endl;
    }

    return 0;
}
