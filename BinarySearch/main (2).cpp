#include <bits/stdc++.h>
using namespace std;

int BinarySearch(const int a[],int n, int key){

    int s{0};
    int e = n-1;

    while(s<=e){
        //the value of mid can cause an overflow to fix it use the following method


//        int mid = (s+e)/2;
        int mid = s + (e-s)/2;

        if(a[mid]==key){return mid;}
        else if(a[mid]>key){ e = mid - 1;}
        else {
            s = mid + 1;
        }
    }
    return -1;
}


int main() {
    
    int n;
    cout<<"Enter the number of elements for array: ";
    cin>>n;
    
    int a[n];
    cout<<"Enter the array elements separated by spaces: ";
    for (int i = 0; i < n; ++i) {
        cin>>a[i];
    }

    int key;
    cout<<"Enter the key to be search among the elements: ";
    cin>>key;


    sort(a,a+n);

    int pos = BinarySearch(a,n,key);

    if (pos == -1){
        cout<<"key not found ";
    } else{
        cout<<"key found at index: "<<pos<<endl;
    }
    


    return 0;
}
