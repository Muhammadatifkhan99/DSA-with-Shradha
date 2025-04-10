#include <iostream>
using namespace std;

void powerOfTwo(int n){
    if(n > 0 && (n & (n - 1 )) == 0){
        cout<<n<<" is power of 2"<<endl;
    } else {
        cout<<n<<" is not power of 2"<<endl;
    }
}

int reverseNum(int n) {
    int digit {0};
    while (n > 0) {
        int rem = n % 10;
        n /= 10;
        digit = digit * 10 + rem;
    }
    return digit;
}

int powerOffTwo(int n) {
    if (n & (n - 1) != 0) {
        return -1;
    }
    return n;
}

// int x = 100; //global scope

int main() {

    powerOfTwo(2);
    powerOfTwo(4);
    powerOfTwo(5);
    powerOfTwo(6);
    powerOfTwo(7);
    powerOfTwo(8);
    powerOfTwo(9);
    powerOfTwo(10);

    cout << powerOffTwo(2) << endl;
    cout << powerOffTwo(4) << endl;;
    cout << powerOffTwo(5) << endl;;
    cout << powerOffTwo(6) << endl;;
    cout << powerOffTwo(7) << endl;;
    cout << powerOffTwo(8) << endl;;
    cout << powerOffTwo(9) << endl;;
    cout << powerOffTwo(10) << endl;;

    cout << reverseNum(521) << endl;

    //Reversing a number
//    int n {125};
//    int digit{0};
//    while(n > 0){
//        int rem = n % 10;
//        n /= 10;    ///used to update the variable n in the loop and this prevent an endless loop
//        digit = rem;
//        cout<<digit;
//    }


    cout<<"Operator Precendance"<<endl;

    cout<<5 - (2 * 6)<<endl;
    cout<<((5 - 2) * 6)<<endl;
    cout<<4 * 5 % 2<<endl;
    cout<<(4 * (5 % 2))<<endl;
    cout<<(5 % 2)<<endl;

    cout<<sizeof(long long int)<<endl;





    cout<<"The BitWise & is: "<<(6 & 10)<<endl;
    cout<<"The BitWise & is: "<<(4 & 8)<<endl;


    cout<<"The BitWise | is: "<<(6 | 10)<<endl;
    cout<<"The BitWise ^ is: "<<(6 ^ 10)<<endl;
    cout<<"The BitWise << is: "<<(10 << 2)<<endl;
    cout<<"The BitWise >> is:"<<(10 >> 1)<<endl;


    if (3 > 1) {
        int x = 10;
        cout << "x is: "<< x << endl;
    } else
        // cout << x << endl; //x cannot be accessed in the else block

    return 0;
}
