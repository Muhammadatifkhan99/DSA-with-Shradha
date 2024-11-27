#include <iostream>
using namespace std;



int main() {


    //printing the subarray of an array
    int n{5};
    int arr[5] {1,2,3,4,5};

    int maxSum = {INT_MIN};
    for (int st = 0; st < n; st++) {
        int currSum {0};
        for(int end = st;end < n; end++){
            currSum += arr[end];
            maxSum = max(currSum,maxSum);
        }
    }

    cout<<"The max sub array sum of the this array is: "<<maxSum<<endl;

    return 0;
}
