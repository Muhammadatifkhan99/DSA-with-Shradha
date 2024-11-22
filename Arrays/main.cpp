#include <iostream>
using namespace std;

void changeArr(int arr[], int size){
    cout<<"In the changeArr function";
    for (int i = 0; i <= size; ++i) {
        arr[i] = 2 *arr[i];
    }
}
int linearSearch(int arr[],int valueToFind, int size){
    //int size = (sizeof(arr)/4);
    for(int i{0};i<size;i++) {
        if (arr[i] == valueToFind) {
            return i;
        }
    }
    return -1;
}


int main() {
    int arr[] = {2,3,4,9,3,8,10};

    //value to find
    int target {8};

//    changeArr(arr,4);
//    cout<<endl;
//    for (int (i) = 0; (i) < 3; ++(i)) {
//        cout<<arr[i]<<" ";
//    }
//    cout<<endl;
    cout<<linearSearch(arr,target,6)<<endl;


//    int num[] = {12,3,12,45,-10};
//
//    int smallest = INT_MAX;
//    int largest = INT_MIN;
//    //for loop to iterate over the array
//    cout<<"The size of the Array in bytes is: "<<sizeof(num)<<endl;
//    int size = (sizeof(num)/4);
//    cout<<"The length of the array is: "<<size<<endl;
//    int indexSmallest {0};
//    int indexLargest {0};
//    for(int i{0};i<size;i++){
//        if(num[i] < smallest){
//            smallest = num [i];
//            indexSmallest = i;
//        } else if (num[i] > largest){
//            largest = num [i];
//            indexLargest = i;
//        }
////        smallest = min(num[i],smallest);
////        largest = max(num[i],largest);
//    }
//    cout<<"The smallest value in the Array is: "<<smallest<<" at the index of: "<<indexSmallest<<endl;
//    cout<<"The largest value in the Array is: "<<largest<<" at the index of: "<<indexLargest<<endl;
    return 0;
}