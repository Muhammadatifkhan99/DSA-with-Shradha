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


int main() {
    printName(0, 4);
    cout << "\n";
    printLinearly(1,10);
    cout <<"\n";
    printLinearBT(3);
    cout <<"\n";
    printToN(1,4);
    return 0;
}