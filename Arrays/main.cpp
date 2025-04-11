#include <climits>
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

void reverseArray(int arr[],int size){
    int start {0};
    int end {size -1};
    while(start < end){
        swap(arr[start],arr[end]);
        start ++;
        end --;
    }
}

int sumOfArray(int arr[],int size){
    int summation{0};
    for (int i = 0; i < size; i++) {
        summation += arr[i];
    }
    return summation;
}

int productOfArray(int arr[],int size){
    int multiply{1};
    for (int i = 0; i < size; i++) {
        multiply *= arr[i];
    }
    return multiply;
}
int minOfArray(int arr[], int size){
    int smallest = INT_MAX; // +infinity in C++
    for(int i{0};i<size;i++){
        // smallest = min(arr[i],smallest);
        if (arr[i] < smallest){
            smallest = arr[i];
        }
    }
    return smallest;
}

int indexOfMinOfArray(int arr[], int size){
    int smallest = INT_MAX; // +infinity in C++
    int index {0};
    for(int i{0};i<size;i++){
        // smallest = min(arr[i],smallest);
        if (arr[i] < smallest){
            smallest = arr[i];
            index = i;
        }
    }
    return index;
}

int maxOfArray(int arr[], int size){
    int largest = INT_MIN; // -infinity in C++
    for(int i{0};i<size;i++){
        // largest = max(arr[i],largest);
        if (arr[i] > largest){
            largest = arr[i];
        }
    }
    return largest;
}
int indexofMaxOfArray(int arr[], int size){
    int largest = INT_MIN; // -infinity in C++
    int index {0};
    for(int i{0};i<size;i++){
        // largest = max(arr[i],largest);
        if (arr[i] > largest){
            largest = arr[i];
            index = i;
        }
    }
    return index;
}

void uniqueValue(int arr[],int size){
    int unique[10]= {};
    for(int i{0};i<size;i++){
        for(int j{1};j<size;j++){
            if(arr[i] == arr[i+j]){
                unique[i] = arr[i];
            }
        }
    }
    //printing all the values of the Unique Array
    for (int (i) = 0; (i) < size; ++(i)) {
        if(unique[i] != 0){
            cout<<unique[i]<<endl;
        }
    }
}

void intersectionArray(int arr1[], int arr2[],int size){
    for (int i = 0; i < size; ++i) {
        if(arr1[i] == arr2[i]){
            cout<<arr1[i]<<endl;
        }
    }
}

int main() {
    cout << "Arrays in C++" << endl;
    int mark[5];
    int price[] = {89,88,55,66,33};

    for(int i{0};i<=5;i++){
      cout << price[i] << endl;
    }
    cout << "Size of the array is: " << sizeof(price) << endl;
    int arr[] = {1,3,3,4,4,5,5,6,6,4};
    int arr2[] = {1,3,3,4,4,5,5,6,6,4};
    int size = (sizeof(arr)/4);
    cout<<"The size of the Array is: "<<size<<endl;

    intersectionArray(arr,arr2,size);

    cout << "The index of Largest element in the Array is: " << indexofMaxOfArray(arr,size) << endl;
    cout << "The index of the smallest element in the array is: " <<indexOfMinOfArray(arr,size) << endl;
    cout<<"The sum of the Array is: "<<sumOfArray(arr,size)<<endl;
    cout<<"The product of the Array is: "<<productOfArray(arr,size)<<endl;
//    cout<<8*5*3<<endl;
    cout<<"The smallest value in the Array is: "<<minOfArray(arr,size)<<endl;
    cout<<"The largest value in the Array is: "<<maxOfArray(arr,size)<<endl;
    int smallest = minOfArray(arr,size);
    int largest = maxOfArray(arr,size);
    cout<<"Before Swaping: Largest is: "<<largest<<", Smallest is:"<<smallest<<endl;
    swap(smallest,largest);
    cout<<"After Swaping: Largest is: "<<largest<<", Smallest is:"<<smallest<<endl;


    return 0;

}



    //value to find
//    int target {8};

//    changeArr(arr,4);
//    cout<<endl;
//    for (int (i) = 0; (i) < 3; ++(i)) {
//        cout<<arr[i]<<" ";
//    }
//    cout<<endl;
//    cout<<linearSearch(arr,target,6)<<endl;


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