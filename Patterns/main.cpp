#include <iostream>
using namespace std;

int main() {
    int num{};
    cout<<"Enter a number:";
    cin>>num;

    //CONDITION
//    if (num > 0) {
//        cout << "STAR PATTERN IS HERE" << endl;
//    } else
//        cout<<"Enter an integer greater than 0 for the pattern to be made"<<endl;


    for(int i{0};i<num;i++) {
        ///printing spaces
        for (int j = 0; j < i; ++j) {
            cout << " ";
        }
        for (int j = 0; j < num - i; ++j) {
            cout << i + 1;
        }
        cout << endl;
    }
    return 0;
}
