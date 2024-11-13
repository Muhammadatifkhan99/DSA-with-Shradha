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
//factorial

int factorial(int n){
    int fact{1};
    for(int i{1};i<=n;i++){
        fact *= i;
    }
    return fact;
}

int nCr(int n, int r){
    int nFact = factorial(n);
    int rFact = factorial(r);
    int d {0};
    d = n - r;
    int nmrFact = factorial(n-r);
    int nCr{0};
    return nFact/(rFact*nmrFact);
}


//sumofdigits of a number
//int sumOfNumber(int num){
//    int digitSum {0};
//    while (num > 0){
//        int lastDigit = {0};
//        lastDigit = num % 10;
//        num = num / 10;
//        digitSum += lastDigit;
//    }
//    return digitSum;
//}

int main() {
//    cout<<factorial(4)<<endl;
    cout<<"nCr for n = 8, r = 2 is: "<<nCr(8,2)<<endl;
    cout<<"nCr for n = 6, r = 3 is: "<<nCr(6,3)<<endl;
    return 0;
}
