#include<iostream>
#include<string>
#include<sstream>
#include<vector>
#include<cmath>


using namespace std;

string primeNum(int a) {
    for (int i{2};i*i <= a;i++) {
        if (a % i == 0) {
            return "Non Prime";
        }
    }
    return "prime";
}

string primeNumforRange(int N) {
    std::ostringstream primes; // Use a string stream to collect prime numbers
    for (int n = 2;n <= N;n++) {
        bool isprime = true;
        for (int i{2};i*i <= n;i++) {
            if (n % i == 0) {
                isprime = false;
                break;
            }
        }
        if (isprime)
            primes << n << " "; // Add prime number to the st
    }
    return primes.str(); // Convert stream to a single string
}


//return the count of the prime numbers from 1 to N
int sieveofErathosthene(int n) {

    vector<bool> isPrime(n+1,true);
    int count {0};
    for (int i{2};i<n;i++) {
        if (isPrime[i]) {
            count++;
            for (int j= i*2;j<n; j= j+i) {
                isPrime[j] = false;
            }
        }
    }
    return count;
}

void printDigits(int n) {
    while (n > 0) {
        int digit = n % 10;
        cout << digit << endl;
        n = n / 10;
    }
}

//count the number of digits in integer

void countdigits(int n) {
    int count {0};
    while (n != 0) {
        int digit = n % 10;

        n = n / 10;
        count ++;
    }
    cout << count << endl;
}

void sumOfDigits(int n) {
    int sum {0};
    while (n != 0) {
        int digit = n % 10;
        sum = sum + digit;
        n = n / 10;
    }
    cout << sum << endl;
}

bool isArmstrong(int n) {
    int copyN = n;
    int sumCubes {0};
    while (n != 0) {
        int digit = n % 10;
        sumCubes = sumCubes + (digit * digit * digit);
        n = n / 10;
    }
    return copyN == sumCubes;
}

int gcd(int a,int b) {
    int gcd {1};
    if (a == 0) {
        gcd = b;
    }
    // else if (a == b) {
    //     gcd = a;
    // }
    else {
        gcd = a;
    }
    for (int i{1};i<= min(a,b);i++) {
        if (a % i == 0 && b % i == 0) {
            gcd = i;
        }
    }
    return gcd;
}

int euclidsalgorithm(int a,int b) {

    while (a > 0 && b > 0) {
        if (a > b) {
            a = a % b;
        } else
            b = b % a;
    }
    if ( a == 0) {
        return b;
    }
    return a;
}

int gcdRec(int a,int b) {
    if (b == 0) return a;
    return gcdRec(b,a%b);
}

int lcm(int a,int b) {
    int gcd = euclidsalgorithm(a,b);
    return (a * b) / gcd;
}

int main() {
    int a = 28;
    int b = 20;
    cout << lcm(a,b) << endl;
    cout << gcdRec(a,b) << endl;
    cout << euclidsalgorithm(a,b) << endl;
    cout << gcd(a,b) << endl;



    int n = 153;

    // if (isArmstrong(n)) {
    //     cout << n << " is an Armstrong Number" << endl;
    // } else {
    //     cout << n << " is not armstrong number" << endl;
    // }

    // countdigits(n);
    // sumOfDigits(n);
    // cout << (int)(log10(n) + 1) << endl;
    // cout << primeNum(n) << endl;
    // cout << primeNumforRange(n) << endl;
    // cout <<sieveofErathosthene(n) << endl;


    return 0;
}