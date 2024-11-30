#include<iostream>
#include<vector>
#include <algorithm>

using namespace std;


//Majority Element in an Array
int majorityElement(int arr[],int size){
    int count {0};
    for(int i{0};i<size;i++){
        for(int j{0};j<size;j++){
            if (arr[i] == arr[j])
                count ++;
        }
        if(count > (size/2)){
            return arr[i];
        }
    }
}

int majorityElement(vector<int> nums){
    int n = nums.size();
    for(int val: nums){
        int count{0};
        for(int el: nums){
            if(val == el){
                count++;
            }
        }
        if(count> n/2){
            return val;
        }
    }
}

//Majority Element: an optimize solution

int majorityElementO(vector<int> &nums){
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
    return ans;
}
int main() {
    int nums[] = {1,2,2,1,1,1,1};
    int size {6};
    vector<int> num = {1,1,1,1,3,2,4,3,5,3,2,1,1,2,1,2,1,1,1};
    cout<<mooreAlgorithm(num);

    return 0;
}
