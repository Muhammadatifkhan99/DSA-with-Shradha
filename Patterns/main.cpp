#include <iostream>
using namespace std;

int main() {
    int num{};
    cout<<"Enter a number:";
    cin>>num;


    //Square Pattern

    for (int i{1};i<=num;i++) {
        char ch = 'A';
        for (int j{1};j<=num;j++) {
            cout << ch;
            ch ++;
        }
        cout << endl;
    }
    cout << endl;

    //square patthern for 1 to 9 numbers

    int number {1};
    for (int i{1};i<=num;i++) {
        //variables defined outside the inner loop get reset after the inner loop ends execution
        for (int j{1};j<=num;j++) {
            cout << number;
            number ++;
        }
        cout << endl;
    }

    //TRIANGLE PATTERN
    int a = 1;
    for (int i{1};i<=num;i++) {
        for (int j{1};j<=i;j++) {
            cout << a ;
        }
        a++;
        cout << endl;
    }

    //TRIANGLE PATTERN

    for (int i{1};i<=num;i++) {
        int a = 1;
        for (int j{1};j<=i;j++) {
            cout << a ;
            a++;
        }
        cout << endl;
    }
    cout << endl;
    cout << "Printing Reverse Triangle"<<endl;

    for (int i{0};i<num;i++) {
        char ab = 'A' + i;
        for (int j{i + 1};j>0;j--) {
            cout <<ab<<" ";
            ab --;
        }
        cout << endl;
    }
    for (int i{0};i<=num;i++){
        for (int j{0};j<=i;j++){
            cout << " ";
        }
        for(int j{i};j<=num-1;j++){
            cout << i + 1;
        }
        cout << endl;
    }

    cout << endl;
    //num = 4
    char ch1 = 'A';
    for (int i{0};i<=num;i++){
        //this loop won't execute for i = 0, since we do not need space at that postion
        for (int j{0};j<i;j++){
            cout << " ";
        }
        for(int j{i};j<=num-1;j++){
            cout << ch1;
        }
        ch1 ++;
        cout << endl;
    }

    //Printing pyramid structure
    cout << endl;
    cout << "Printing Pyramid Structure" << endl;
    for (int i{0};i< num;i++) {
        //n - i -1 spaces needs to be printed
        for (int j{0};j< num - i -1;j++) {
            cout << " ";
        } for (int k{1};k<=i+1;k++) {
            cout << k ;
        } for (int l{i};l>0;l--) {
            cout << l;
        }
        cout << endl;
    }


    cout << endl;

    cout << "Printing a Hollow Diamond Structure" << endl;

    for (int i{0};i<num;i++) {
        for (int j{0};j<(num-i-1);j++) {
            cout << " ";
        }
        cout << "*";
        if (i != 0) {
            //spaces
            for (int j{0};j<2*i-1;j++) {
                cout << " ";
            }
            cout << "*";
        }
        cout << endl;
    }

    //bottom
    for (int i{0};i<num -1;i++) {
        //spaces
        for (int j=0;j<i+1;j++) {
            cout << " ";
        }
        cout << "*";

        if (i != num -2) {
            //spaces
            for (int j{0};j<2*(num -i) -5;j++) {
                cout <<" ";
            }
            cout <<"*";
        }
        cout << endl;
    }







    //CONDITION
//    if (num > 0) {
//        cout << "STAR PATTERN IS HERE" << endl;
//    } else
//        cout<<"Enter an integer greater than 0 for the pattern to be made"<<endl;

    cout << endl;
    for(int i{0};i<num;i++){
        /////////spaces: n-i-1
        for(int j=0;j<num -1 -i;j++){
            cout<<" ";
        }
        //nums 1
        for(int j=1;j<=i+1;j++){
            cout<<j;
        }
        for (int (j) = i; (j) > 0; --(j)) {
            cout<<j;
        }
        cout<<endl;
    }
    cout <<endl;
    cout << "Printing Floyd's Triangle"<<endl;
    int b = 1;
    for (int i{0};i<num;i++) {
        for (int j{0};j<i+1;j++) {
            cout << b <<" ";
            b++;
        }
        cout << endl;
    }

    cout <<endl;
    cout << "Printing Floyd's Triangle character version"<<endl;
    char ch = 'A';
    for (int i{0};i<num;i++) {
        for (int j{0};j<i+1;j++) {
            cout << ch <<" ";
            ch++;
        }
        cout << endl;
    }

    return 0;
}
