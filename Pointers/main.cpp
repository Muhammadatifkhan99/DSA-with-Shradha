#include <iostream>
using namespace std;
int main() {

    //predict the output
    int a {5};
    int *p = &a;
    int **q = &p;

    cout<<a<<endl;
    cout<<*p<<endl;
    cout<<**q<<endl;
    cout<<p<<endl;
    cout<<*q<<endl;

    return 0;
}
