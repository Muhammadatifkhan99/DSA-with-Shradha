#include <iostream>
using namespace std;

int main() {
    int num{};
    cout<<"Enter a number:";
    cin>>num;

    cout<<"Pattern for Numbers"<<endl;
    int number{1};
    for(int i{0};i<num;i++){
        for(int j{0};j<num;j++){
            cout<<number;
            number ++;
        }
        cout<<endl;
    }

    cout<<"Pattern for Characters"<<endl;
    char ch{'A'};
    for(int i{0};i<num;i++){
        for(int j{0};j<num;j++){
            cout<<ch;
            ch ++;
        }
        cout<<endl;
    }

    return 0;
}
