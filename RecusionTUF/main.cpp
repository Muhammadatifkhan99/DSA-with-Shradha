#include <iostream>
using namespace std;

void printName(int i,int n){
    if (i>n) {
        return;
    }
    cout << "Atif " ;
    printName(i+1,n);
}
void printLinearly(int i,int n) {
    if (i > n) {
        return;
    }
    cout << i <<" " ;
    printLinearly(i+1,n);
}

void printLinearBT(int n) {
    if (n == 0) {
        return;
    }
    printLinearBT(n-1);
    cout << n << " ";
}

void printToN(int i,int n) {
    if (i > n) {
        return;
    }
    printToN(i+1,n);
    cout << i;
}

void sum1(int i,int n) {
    if (i < 0) {
        cout << n;
        return;
    }
    sum1(i-1,n+i);
}


//Functional Way of doing recursion
int sum (int n) {
    if (n == 0) {
        return 0;
    }
    return n + sum(n-1);
}

int fact(int n) {
    if (n == 0) return 1;
    return n * fact(n-1);
}



int main() {
    int n = 10000;
    cout << sum(n) << endl;
    sum1(3,0);
    cout << endl;
    cout << fact(3) << endl;
    cout << fact(4) << endl;
    // printName(0, 4);
    // cout << "\n";
    // printLinearly(1,10);
    // cout <<"\n";
    // printLinearBT(3);
    // cout <<"\n";
    // printToN(1,4);
    return 0;
}