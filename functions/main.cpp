#include <iostream>
using namespace std;


//int minOfTwo(int a, int b){
//    if( a > b){
//        return a;
//    }
//    else
//        return b;
//}
//
////function to find the sum of numbers to n
//
//int sumOfNumbers(int number){
//    int sum{0};
//    for(int i{0};i<=number;i++){
//        sum += i;
//    }
//    return sum;
//}
////factorial
//
//int factorialN(int n){
//    int fact{1};
//    for(int i{1};i<=n;i++){
//        fact *= i;
//    }
//    return fact;
//}


//sumofdigits of a number
int sumOfNumber(int num){
    int digitSum {0};
    while (num > 0){
        int lastDigit = {0};
        lastDigit = num % 10;
        num = num / 10;
        digitSum += lastDigit;
    }
    return digitSum;
}

int main() {
    cout<<sumOfNumber(145)<<endl;
    cout<<sumOfNumber(150)<<endl;
    cout<<sumOfNumber(101)<<endl;
    cout<<sumOfNumber(001)<<endl;
    cout<<sumOfNumber(025)<<endl;
    cout<<sumOfNumber(000)<<endl;


    return 0;
}
