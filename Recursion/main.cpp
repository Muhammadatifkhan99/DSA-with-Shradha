#include<iostream>


using namespace std;

void printNum(int n) {
    if (n == 1) {
        cout << n << endl;
        return;
    }
    cout << n << " ";
    return printNum(n-1);
}

int factorial(int n) {
    if (n < 0 ) {
        cout << "Enter a positive number: ";
        return -1;
    }
    if (n == 0) {
        return 1;
    }

    return n * factorial(n - 1);
}

int main() {
    // printNum(50);

    cout << factorial(-12) << endl;

    return 0;
}