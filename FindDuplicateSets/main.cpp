#include<iostream>
#include<vector>

using namespace std;

int findDuplicate(vector<int> arr) {
    int slow = arr[0], fast = arr[0];
    do {
        slow = arr[slow];
        fast = arr[arr[fast]];
    } while (slow != fast);
    slow = arr[0];
    while (slow != fast) {
        slow = arr[slow];
        fast = arr[fast];
    }
    return slow;
}

int main() {
    vector<int> nums = {1,3,4,2,2};

    cout << findDuplicate(nums) << endl;


    return 0;
}