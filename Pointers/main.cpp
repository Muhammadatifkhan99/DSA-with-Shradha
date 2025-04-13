#include <iostream>
using namespace std;
int main() {

    //pointer to a pointer
    int a {5};
    int *p = &a;
    int **q = &p;

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
