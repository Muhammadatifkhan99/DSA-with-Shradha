#include <iostream>
#include <climits>
using namespace std;



//brute force approach of finding max sub array sum
int maxSubArraySum(int arr[], int n){
    int maxSum = {INT_MIN};
    for (int st = 0; st < n; st++) {
        int currSum {0};
        for(int end = st;end < n; end++){
            currSum += arr[end];
            maxSum = max(currSum,maxSum);
        }
    }
    return maxSum;
}

int maxSubArraySum2(int arr[], int n){
    int currSum {0};
    int maxSum = INT_MIN;
    for(int i=0;i<n;i++){
        currSum += arr[i];
        maxSum = max(currSum,maxSum);
        if (currSum < 0){
            currSum = 0;
        }
    }
    return maxSum;
}


#include <iostream>
#include <vector>

using namespace std;

vector<int> pairSum(vector<int> nums,int target) {
    vector<int> ans;
    int i {0};
    int j {nums.size()};
    int pairSum {0};
    
    while(i<j){
        if(pairSum > target){
            j --;
        } else if (pairSum < target){
            i ++;
        } else {
            ans.push_back(i);
            ans.push_back(j);
        }
    }
    return ans;
    
}


int main() {
    // add two cout statements
    vector<int> nums = {2,7,11,15};
    int target = 9;
    vector<int> ans = pairSum(nums,target);
    cout << ans[0] << " " << ans[1] << endl;


}







int main() {


    //printing the subarray of an array
    int n{5};
    int arr[5] {1,2,3,4,5};

    cout<<"The max sub array sum of the this array (brute force approach) is: "<<maxSubArraySum(arr,n)<<endl;
    cout<<"The max sub array sum of the this array (kadanes algorithm) is: "<<maxSubArraySum2(arr,n)<<endl;


    return 0;
}
