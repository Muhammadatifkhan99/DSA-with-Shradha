#include<iostream>
#include<string>
#include<sstream>
#include<vector>


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




int main() {
    int n = 50;
    // cout << primeNum(n) << endl;
    cout << primeNumforRange(n) << endl;
    cout <<sieveofErathosthene(n) << endl;


    return 0;
}