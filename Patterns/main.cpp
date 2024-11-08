#include <iostream>
using namespace std;

int main() {
    int num{};
    cout<<"Enter a number:";
    cin>>num;

    //out for loop
//    for(int i{1};i<=num;i++){
//        for(int j{1};j<=num;j++){
//            cout<<j<<" ";
//        }
//        cout<<endl;
//    }
    for(int i{0};i<num;i++){
        char ch = 'A';
        for(int j{1};j<=num;j++){
            cout<<ch;
            ch = ch + 1;
        }
        cout<<endl;
    }

    return 0;
}
