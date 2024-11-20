#include <iostream>
using namespace std;

void powerOfTwo(int n){
    if(n > 0 && (n & (n - 1 )) == 0){
        cout<<n<<" is power of 2"<<endl;
    } else {
        cout<<n<<" is not power of 2"<<endl;
    }
}

int main() {

    powerOfTwo(2);
    powerOfTwo(4);
    powerOfTwo(5);
    powerOfTwo(6);
    powerOfTwo(7);
    powerOfTwo(8);
    powerOfTwo(9);
    powerOfTwo(10);

    //Reversing a number
//    int n {125};
//    int digit{0};
//    while(n > 0){
//        int rem = n % 10;
//        n /= 10;    ///used to update the variable in the loop and this prevent an endless loop
//        digit = rem;
//        cout<<digit;
//    }


//    cout<<"Operator Precendance"<<endl;
//
//    cout<<5 - (2 * 6)<<endl;
//    cout<<((5 - 2) * 6)<<endl;
//    cout<<4 * 5 % 2<<endl;
//    cout<<(4 * (5 % 2))<<endl;
//    cout<<(5 % 2)<<endl;

 //   cout<<sizeof(long long int)<<endl;





//    cout<<"The BitWise & is: "<<(6 & 10)<<endl;
//    cout<<"The BitWise | is: "<<(6 | 10)<<endl;
//    cout<<"The BitWise ^ is: "<<(6 ^ 10)<<endl;
//    cout<<"The BitWise << is: "<<(10 << 2)<<endl;
//    cout<<"The BitWise >> is:"<<(10 >> 1)<<endl;

    return 0;
}
