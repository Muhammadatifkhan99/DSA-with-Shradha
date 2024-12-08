#include <bits/stdc++.h>
using namespace std;

int LinearSearch(int a[],int n,int key){
/*
 * when the value of i == n this loop will terminate naturally
 * indicating that the element was not found in the array
 */
    for(int i{0};i<n;i++) {
        if (a[i] == key) {
            cout<<"key found at: "<<i<<endl;
            }
           if (i == n){
               cout<<"key not found"<<endl;
           }
        }

    }
//    for(int i{0};i<n;i++) {
//        if (a[i] == key) {
//            return i;
//        }
//
//    }
//    return -1;
//}

/*
 * solve this problem using linear search algorithm
 * ->>>>>>Scan the array from left to right<<<<<<<<<<
 *
 */

int main() {

    int n{};
    cin>>n;
    int array [n];
    for (int i = 0; i < n; ++i) {
        cin>>array[i];
    }
    cout<<"Enter the key to search for: ";
    int key {};
    cin>>key;

    LinearSearch(array,n,key);

//    int pos = LinearSearch(array,n,key);
//
//    if (pos == -1){
//        cout<<"Key not found"<<endl;
//    }
//    else
//        cout<<"Key found at index: "<<pos<<endl;

    return 0;
}
