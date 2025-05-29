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

//reverse an array using single pointers

void reverseArray(int i,int arr[],int n) {
    if (i >= n/2) {
        return;
    }
    swap(arr[i],arr[n-i-1]);
    reverseArray(i+1,arr,n-i-1);
}

//check if string is palindromic or not

bool ispalindrom(int i,string &s) {
    if (i>=s.size()-1/2) return true;
    if (s[i] != s[s.size()-i-1]) return false;
    return ispalindrom(i+1,s);
}



int main() {
    string s = "madsm";
    cout << ispalindrom(0,s);

    // for (int i{0};i<n;i++) cin >>arr[i];
    // reverseArray(0,arr,n);
    // for (int i{0};i<n;i++) cout << arr[i]<< " ";

    // int n = 10000;
    // cout << sum(n) << endl;
    // sum1(3,0);
    // cout << endl;
    // cout << fact(3) << endl;
    // cout << fact(4) << endl;
    // printName(0, 4);
    // cout << "\n";
    // printLinearly(1,10);
    // cout <<"\n";
    // printLinearBT(3);
    // cout <<"\n";
    // printToN(1,4);
    return 0;
}