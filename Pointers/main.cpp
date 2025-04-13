#include <iostream>
#include <cmath>
using namespace std;

void solve(double meal, int tip, int tax) {
    double totalTip {0};
    double totalTax {0};

    double totalCost {0};
    totalTax = (static_cast<double>(tax)/100);
    totalTax = totalTax * meal;

    totalTip = (static_cast<double>(meal)/100.0);
    totalTip = totalTip * tip;
    totalCost = meal + totalTax + totalTip;
    // cout << totalTax << " " <<totalTip << " "<< meal << endl;
    cout << ceil(totalCost) << endl;
}


int main() {

    double a = 10.25;
    int b = 17;
    int c = 5;
    solve(a,b,c);

    //pointer to a pointer
    // int a {5};
    // int *p = &a;
    // int **q = &p;

    //NULL POINTER -> a pointer that does not point at any valid location
    int* nptr = NULL; // null pointers can not be dereferenced,as nullpointer do not point at any valid location/memory address

    cout << nptr << endl;

    // int* ptr = &a;
    // cout << *(&a) << endl;
    // cout << *(ptr) << endl;
    // cout<<a<<endl;
    // cout<<*p<<endl;
    // cout<<**q<<endl;
    // cout<<p<<endl;
    // cout<<*q<<endl;
    //dereference means extracting value at address
    int arr[] = {1,2,3,4};

    // cout << sizeof(arr) << endl;
    int size = sizeof(arr)/4;

    for (int i{0};i<size; i++){
        cout << *(arr + i) << endl;
    }


    //PASS BY REFERENCE

    return 0;
}
