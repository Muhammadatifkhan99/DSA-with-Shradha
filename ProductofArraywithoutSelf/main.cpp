#include <iostream>
#include <vector>
using namespace std;

int productofArrayExceptSelf(vector<int> &nums, int index){
    int prod {1};
    if (index >= 0 && index < nums.size()) {
        nums.erase(nums.begin() + index); // Remove element at the specified index
        //std::cout << "Element removed successfully." << std::endl;
    }

    for(int val: nums){
        prod *= val;
    }
    return prod;
}
//brute force apporach
vector<int> productExceptSelf(vector<int>& nums){
    vector<int> ans(nums.size(), 1);

    for(int i{0};i<nums.size();i++){
        int prod {1};
        for(int j{0};j<nums.size();j++){
            //this condition will skip value at ith index
            if(i != j){
                prod *= nums[j];
            }
        }
        ans[i] = prod;
    }
    return ans;

}
//optiml solution but O(n) space complexity 
vector<int> productofArray(vector<int> nums){
    int n = nums.size();
    vector<int> prefix(n,1);
    prefix[0] = 1;
    //prefix array
    for(int i{1};i<n;i++){
        prefix[i] = prefix[i - 1] * nums[i - 1];
    }
    vector<int> suffix (n,1);
    //suffix array
    for(int i{n-2};i>=0;i--){
        suffix[i] = suffix[i+1] * nums[i + 1];
    }
    //for ans vector
    vector<int> ans(n,1);
    for(int i{0};i<n; i++){
        ans[i] = prefix[i] * suffix[i];
    }
    return ans;
}

//more optimal solution to product with out self
vector<int> productofArrayOS(vector<int> nums){
    int n = nums.size();
    vector<int> ans(n,1);
    for(int i{1};i<n;i++){
        ans[i] = ans[i - 1] * nums[i - 1];
    }
    cout <<"The ans vector before adding the suffix part: " << endl;
    for(int val: ans){
        cout << val << endl;
    }
    int suffix {1};
    for(int i{n-2};i>=0;i--){
        suffix *= nums[i + 1];
        ans[i] *= suffix;
    }
    return ans;
}

int main() {
    vector<int> nums {1,2,3,4};
    for(int val: productofArrayOS(nums)){
        cout<<val<<endl;
    }
    // cout << "Product without self" << endl;
    // for(int v: productExceptSelf(nums)){
    //     cout << v << endl;
    // }
    //this is working perfectly well
    //cout << productofArrayExceptSelf(nums,3) << endl;
    return 0;
}
