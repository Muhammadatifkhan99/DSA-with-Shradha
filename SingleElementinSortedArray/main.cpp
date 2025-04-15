#include <iostream>
#include <vector>

using namespace std;

int singleElement(vector<int>& A){
    int s {1};
    int e = A.size() -2;
    while(s <= e){
        int mid = s + (e - s)/2;
        if (A[mid - 1] != A[mid] && A[mid] != A[mid +1]){
            return A[mid];
        }
        //identify if we have odd number of elements on even number of elements on left/right half
        
        if(mid % 2 == 0){
            if(A[mid - 1] == A[mid]){
                e = mid - 1;
            } else {
                s = mid + 1;
            }
        } else { //odd elements
            if(A[mid - 1] == A[mid]){
                s = mid + 1;
            } else {
                e = mid -1;
            }

        }

    }
}

int main() {
    vector<int> nums {1,1,2,3,3,4,4,8,8};
    vector<int> nums2 {3,3,7,7,10,11,11};
    int single = singleElement(nums);
    int single2 = singleElement(nums2);
    cout<<single<<endl;
    cout<<single2<<endl;


    
    return 0;
}
