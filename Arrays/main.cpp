#include <iostream>
using namespace std;

int main() {

    int num[] = {12,3,12,45,-10};

    int smallest = INT_MAX;
    int largest = INT_MIN;
    //for loop to iterate over the array
    cout<<"The size of the Array num is: "<<sizeof(num)<<endl;
    int size = (sizeof(num)/4);
    cout<<"The length of the array is: "<<size<<endl;
    for(int i{0};i<size;i++){
        smallest = min(num[i],smallest);
        largest = max(num[i],largest);
    }
    cout<<"The smallest value in the Array is: "<<smallest<<endl;
    cout<<"The largest value in the Array is: "<<largest<<endl;
    return 0;
}