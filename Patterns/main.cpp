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

    return 0;
}
