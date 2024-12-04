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
    for(int i{n-2};i<n;i--){
        suffix[i] = suffix[i+1] * nums[i + 1];
    }
    //for ans vector
    vector<int> ans(n,1);
    for(int i{0};i<n; i++){
        ans[i] = prefix[i] * suffix[i];
    }
    return ans;
}

int main() {
    vector<int> nums {1,2,3,4};
    for(int val: productofArray(nums)){
        cout<<val<<endl;
    }

    return 0;
}
