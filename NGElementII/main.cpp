#include <iostream>
#include<vector>
#include<stack>
using namespace std;


vector<int> NGElementII(vector<int> &nums) {
    int n = nums.size();
    stack<int> s;
    vector<int> ans(n,-1);

    for (int i= 2 * n - 1;i>=0;i--) {
        while (s.size()>0 && nums[s.top()] <= nums[i%n]) {
            s.pop();
        }
        ans[i%n] = s.empty() ? - 1 : nums[s.top()];
        s.push(i%n);
    }
    return ans;
}

int main() {
    vector<int> ans = {3,6,5,4,2};
    vector<int> result = NGElementII(ans);
    for (int v : result) {
        cout << v << " ";
    }
    return 0;
}