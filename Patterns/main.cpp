#include <iostream>
using namespace std;

int main() {
    int num{};
    cout<<"Enter a number:";
    cin>>num;

    //CONDITION
    if (num > 0) {
        cout << "STAR PATTERN IS HERE" << endl;
    } else
        cout<<"Enter an integer greater than 0 for the pattern to be made"<<endl;
    for (int i = 0; i < num; ++i) {
        for(int j=i+1;j>0;j--){
            cout<<j<<" ";
        }
        cout<<endl;

    }
    return 0;
}
