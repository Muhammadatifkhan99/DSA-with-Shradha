#include <iostream>
using namespace std;

int main() {

    int num[] = {12,3,12,45,-10};

    int smallest = INT_MAX;
    int largest = INT_MIN;
    //for loop to iterate over the array
    cout<<"The size of the Array in bytes is: "<<sizeof(num)<<endl;
    int size = (sizeof(num)/4);
    cout<<"The length of the array is: "<<size<<endl;
    int indexSmallest {0};
    int indexLargest {0};
    for(int i{0};i<size;i++){
        if(num[i] < smallest){
            smallest = num [i];
            indexSmallest = i;
        } else if (num[i] > largest){
            largest = num [i];
            indexLargest = i;
        }
//        smallest = min(num[i],smallest);
//        largest = max(num[i],largest);
    }
    cout<<"The smallest value in the Array is: "<<smallest<<" at the index of: "<<indexSmallest<<endl;
    cout<<"The largest value in the Array is: "<<largest<<" at the index of: "<<indexLargest<<endl;
    return 0;
}