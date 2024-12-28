#include<iostream>


using namespace std;


int main() {
    char str [21];
    cout<< "enter a char array" << endl;
    cin.getline(str,21,'.');
    cout<<str<<endl;
    for (char val: str) {
        cout << val ;
    }
    cout << endl;





    //taking strings input using cin
    // char str[100];
    // char str1[100];
    // cin >> str;
    // cout<< str << endl;
    // cout<< "Taking input using cin.getline: " << endl;
    // cin.getline(str1,100);
    // cout<< str1 << endl;

    // char str[5] = {'a','t','i','f','\0'};
    // //C-Style strings are stored this way
    // //C-Style strings ends with a null character represented by "\0"
    //
    //
    // int arr [5] = {1,2,3,4,5};
    // //couting the name of an array prints the memory address of where its stored in the memory
    // cout<< arr << endl;
    // cout<<str<< endl;



    return 0;
}