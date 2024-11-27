#include <iostream>
using namespace std;



//brute force approach of finding maxsubarraysum
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


int main() {


    //printing the subarray of an array
    int n{5};
    int arr[5] {1,2,3,4,5};

    cout<<"The max sub array sum of the this array (brute force approach) is: "<<maxSubArraySum(arr,n)<<endl;
    cout<<"The max sub array sum of the this array (kadanes algorithm) is: "<<maxSubArraySum2(arr,n)<<endl;


    return 0;
}
