#include<iostream>
#include <vector>
using namespace std;

void printF(int index, vector<int> &ds,int arr[],int n){
    if(index == n){
        for(auto it: ds){
            cout << it << " ";
        }
        cout << endl;
        return;
    }
    ds.push_back(arr[index]);
    printF(index + 1,ds,arr,n);

    ds.pop_back();
    printF(index+1,ds,arr,n);

}


int main() {
    int arr[] = {3,1,2};
    int n = 3;
    vector<int> ds;
    printF(0,ds,arr,n);

    // cout << "Hello World" << endl;
}