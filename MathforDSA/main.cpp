#include<iostream>
#include<string>
#include<sstream>


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

int main() {
    int n = 50;
    // cout << primeNum(n) << endl;
    cout << primeNumforRange(n) << endl;


    return 0;
}