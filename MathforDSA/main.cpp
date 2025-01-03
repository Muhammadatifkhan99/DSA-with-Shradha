#include<iostream>

using namespace std;

string primeNum(int a) {
    for (int i{2};i*i <= a;i++) {
        if (a % i == 0) {
            return "Non Prime";
        }
    }
    return "prime";
}

int main() {
    int n = 5;
    cout << primeNum(n) << endl;


    return 0;
}