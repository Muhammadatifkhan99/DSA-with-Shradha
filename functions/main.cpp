#include <iostream>
using namespace std;


int minOfTwo(int a, int b){
    if( a > b){
        return a;
    }
    else
        return b;
}

//function to find the sum of numbers to n

int sumOfNumbers(int number){
    int sum{0};
    for(int i{0};i<=number;i++){
        sum += i;
    }
    return sum;
}
//factorial

int factorialN(int n){
    int fact{1};
    for(int i{1};i<=n;i++){
        fact *= i;
    }
    return fact;
}

int main() {
    int a {5};
    int b {4};
    cout<<factorialN(a)<<endl;
    cout<<factorialN(b);
    return 0;
}
