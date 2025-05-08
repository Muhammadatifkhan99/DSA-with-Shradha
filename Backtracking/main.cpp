#include <iostream>
#include <vector>
using namespace std;

void printVector(const vector<int> &nums) {
    cout << "[";
    for (size_t i = 0; i < nums.size(); ++i) {
        cout << nums[i];
        if (i != nums.size() - 1) cout << ", ";
    }
    cout << "]";
}

void getPerms(vector<int> &nums, int idx, vector<vector<int>> &ans) {
    cout << "\n>> Entering getPerms with idx = " << idx << ", nums = ";
    printVector(nums);
    cout << endl;

    if (idx == nums.size()) {
        cout << "==> Base case hit! Adding permutation: ";
        printVector(nums);
        cout << "\n";
        ans.push_back(nums);
        return;
    }

    for (int i = idx; i < nums.size(); i++) {
        cout << "\nSwapping idx = " << idx << " and i = " << i << " → ";
        swap(nums[idx], nums[i]);
        printVector(nums);
        cout << endl;

        // Recursive call
        getPerms(nums, idx + 1, ans);

        // Backtracking
        swap(nums[idx], nums[i]);
        cout << "Backtracked: Swapped back idx = " << idx << " and i = " << i << " → ";
        printVector(nums);
        cout << "\nReturning to idx = " << idx << " loop, i will now become " << (i + 1) << "\n";
    }

    cout << "<< Exiting getPerms with idx = " << idx << ", nums = ";
    printVector(nums);
    cout << "\n";
}
int main() {
    vector<int> nums = {1, 2, 3};
    vector<vector<int>> ans;
    getPerms(nums, 0, ans);

    cout << "\nAll permutations:\n";
    for (auto &perm : ans) {
        printVector(perm);
        cout << endl;
    }
    return 0;
}
