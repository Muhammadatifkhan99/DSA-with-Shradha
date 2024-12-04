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

int main() {
    vector<int> nums {1,2,3,4};
    int prod = productofArrayExceptSelf(nums,3);
    vector<int> ans;
    ans.push_back(prod);
    for(int val: ans){
        cout<<val<<endl;
    }
    return 0;
}
