#include <iostream>
using namespace std;
int main() {


    //sum of numbers from 1 to N that are divisable by 3
//    int n{};
//    cout<<"Enter a number: ";
//    cin>>n;
//    int sum{0};
//    for(int i{1};i <= n; i++){
//        if( i % 3 ==0 ){
//            sum += i;
//        }
//    }
//    cout<<"Sum of it is: "<<sum<<endl;

//factorial of N
int factorial {0};
int num{6};
for(int i{1};i<=num;i++){
    factorial = (num * (num-1));
}
cout<<factorial<<endl;
    return 0;
}
