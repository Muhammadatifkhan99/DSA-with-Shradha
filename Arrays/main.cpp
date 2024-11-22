#include <iostream>
using namespace std;

int main() {

    int num[] = {12,3,12,45,-10};

    int smallest = INT_MAX;
    //for loop to iterate over the array

    for(int i{0};i < sizeof(num);i++){
        if(num[i] < smallest){
            smallest = num[i];
        }
    }
    cout<<"The smallest value in the Array is: "<<smallest<<endl;
    return 0;
}
