#include <iostream>
using namespace std;


int minOfTwo(int a, int b){
    if( a > b){
        return a;
    }
    else
        return b;
}
//
////function to find the sum of numbers to n

int sumOfNumbers(int number){
    int sum{0};
    for(int i{0};i<=number;i++){
        sum += i;
    }
    return sum;
}


//factorial

int factorial(int n){
    int fact{1};
    for(int i{1};i<=n;i++){
        fact *= i;
    }
    return fact;
    // int i {0};
    // while (i<=n) {
    //     fact = fact * i;
    //     i++;
    // }
}

int nCr(int n, int r){
    return factorial(n)/(factorial(r)*factorial(n-r));
}


//sum of digits of a number
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

//finding the nth fibonacci using iterative method
int nthFib(int number){
    if (number == 0) return 0;
    else if ( number == 1) return 1;

    int d = 0, b = 1, fib =0;
    for(int i = 2; i<=number; i++){
        fib = d + b;
        d = b;
        b = fib;
    }
    return b;
}

void isPrime(int number) {
    //we are not checking for 1 and n
    for(int i{2};i<number;i++){
        if(number % i == 0){
            cout<<"Prime"<<endl;
    }
    else {
        cout<<"Not Prime"<<endl;
    }
}
}

int decimalToBinary(int decNum) {
    int ans {0};
    int pow {1};
    while(decNum > 0){
        int rem = decNum % 2;
        decNum /= 2;
        ans += (rem * pow); // ans = ans + (rem * pow)
        pow = pow * 10;
    }
    return ans;
}

int binaryToDecimal(int decNum){
    int ans{};
    int pow{1};
    while(decNum > 0){
        int rem = decNum % 10;
        decNum /= 10;
        ans += (rem*pow);
        pow *= 2;
    }
    return ans;
}

int main() {
    int num=110;
    int n = 8;
    int r = 2;
    cout << nCr(n,r) << endl;
    int fib {4};
    cout << nthFib(fib) << endl;
    cout<<binaryToDecimal(num);
    return 0;
}
