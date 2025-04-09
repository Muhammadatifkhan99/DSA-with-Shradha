#include <iostream>

using namespace std;

int main() {
    // int a = 2;
    // int b = 4;
    //
    // if (a > b) {
    //     cout << "a is greater then b in this case"<<endl;
    // } else if (b > a) {
    //     cout << "b is greater then a in this case" <<endl;
    // } else {
    //     cout <<"a and b are equal in this case"<<endl;
    // }
    int n = 78;
    int sum {0};
    int prod = {0};
    prod = n  *(n + 1);
    sum = prod / 2;
    cout << sum << endl;

    //sum of numbers from 1 to n
    cout <<"\nSum of numbers with out using the formala:"<<endl;
    int ns = 10;
    int summ {0};
    for (int i{0};i<=ns;i++) {
        summ += i;
    }
    cout <<summ<<"\n";


    cout << (5 / 2) << endl;
    cout << (5 /(double)2)<< endl;


    //Ternary Operators
    int a = 12;
    a >= 0 ? cout <<"positive" : cout <<"negative";

    //LOOPS
    cout <<"\n";
    int count = 1;
    while (count <= 5) {
        cout <<"Apna College"<<endl;
        count ++;
    }

    //Sum of odd numbers from 1 to N

    cout<<endl;
    int uptoN = 10;
    int sumN {0};
    for (int i{0};i <= uptoN; i++) {
        if (i % 2 != 0) {
            sumN += i;
        }
    }
    cout <<"Sum of odd numbers from 1 to "<<uptoN<<" is: "<< sumN <<endl;
    cout <<"Sum of numbers from 1 to "<<ns<<" is: " <<summ <<endl;


    cout<<"Check if a number is prime or not"<<endl;
    cout << boolalpha;
    int primeNum {8};
    bool isPrime = true;
    for (int i{2};i*i<=primeNum -1;i++) { //checks till the square root of that number and then stop the loop, a little optimization
        if (primeNum % i ==0) {
            isPrime = false;
            break;
        }
    }
    // cout << primeNum <<" is prime or non-prime: "<<isPrime << endl;

    if (isPrime) {
        cout << primeNum << " is a prime number"<<endl;
    } else {
        cout <<primeNum << " is a non-prime number"<<endl;
    }



    //VECTORS
    // cout << "Hello World"<<endl;
    //ARRAYS
//    float n[3] = {12.3,3.3,0.2};
    // const string s = "atif";
    // cout << s << endl;
    // int index {0};
    // cin >> index;
    // cout<<n[index]<<endl;
//    cout<<n[0]<<endl;



    // for (int i= 0; i < 3; i++) {
    //     cout<<n[i]<<" ";
    // }





    //FOR LOOP
    // int a;
    // double b {12.12};
    // float c {12.12};
    // string d { "HEELOO"};
    // char ch = 'a';
    //
    // int marks {0};
    // cin>>marks;
    // if ( marks <= 30) {
    //     cout<<"FAIL"<<endl;
    // }
    // else if ( marks > 30) {
    //     cout<<"PASS"<<endl;
    // }


    return 0;
}