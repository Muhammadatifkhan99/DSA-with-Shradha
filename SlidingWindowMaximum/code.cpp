#include<iostream>
#include<vector>
#include <algorithm>
#include <deque>

using namespace std;

vector<int> slidingWindMax(vector<int> nums, int k){
	vector<int> ans;
	int a = 0;
	int n = nums.size();
	for(int i=0;i<= n - k;i++){
		for(int j{i};j<k+i;j++){
			a = max(a,nums[j]);
		}
		ans.push_back(a);
	}
	return ans;
}

vector<int> maxSlidingWindow(vector<int>& nums, int k) {
    vector<int> ans;
    deque<int> dq;

    for(int i{0};i<k;i++){
        while(dq.size()>0 && nums[dq.back()] <= nums[i]){
            dq.pop_back();
        }
        dq.push_back(i);
    }

    for(int i=k;i<nums.size();i++){
        ans.push_back(nums[dq.front()]);

        //1. remove elements from the deque that are not parts of the current window
        while(dq.size()>0 && dq.front() <= i-k){
            dq.pop_front();
        }

        //2. remove elements that are smaller than the current element

        while(dq.size()>0 && nums[dq.back()] <= nums[i]){
            dq.pop_back();
        }

        dq.push_back(i);
    }
    ans.push_back(nums[dq.front()]);
    return ans;
}



int main(){
	vector<int> arr = {1,3,-1,-3,5,3,6,7};
	int k = 3;
	for(auto a: slidingWindMax(arr,k)){
		cout << a << " " ;
	}
    // cout << " Hello World" << endl;
    return 0;
}
