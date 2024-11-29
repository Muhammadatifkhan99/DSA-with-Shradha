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

vector<int> pairSum2(vector<int> nums, int target){
    int n = nums.size();
    vector<int> ans;
    //while loop
    int i{0},j{n-1};
    while(i<j){
        int pairSum = nums[i] + nums[j];
        if (pairSum > target){
            j--;
        } else if (pairSum < target){
            i++;
        } else {
            ans.push_back(i);
            ans.push_back(j);
            return ans;
        }
    }
    return ans;



    //using the FOR LOOP
//    for (int i {0}, j{n-1}; i < j;) {
//        int pairSum {0};
//        pairSum = nums[i] + nums[j];
//        if(pairSum > target){
//            j--;
//        } else if ( pairSum < target){
//            i++;
//        } else{
//            ans.push_back(i);
//            ans.push_back(j);
//            return ans;
//        }
//    }
}


//Majority Element in an Array
int majorityElement(int arr[],int size){
    int count {0};
    for(int i{0};i<size;i++){
        for(int j{1};j<=size;j++){
            if (arr[i] == arr[j])
                count ++;
        }
        if(count > (size/2)){
            return arr[i];
        }
    }
}
int main() {
    int nums[] = {1,2,2,2,2,1,1};
    int size {6};

    cout<<majorityElement(nums,size);
//    vector<int> ans = pairSum2(nums,target);
//    for(int val: ans){
//        cout<<val<<endl;
//    }

    return 0;
}
