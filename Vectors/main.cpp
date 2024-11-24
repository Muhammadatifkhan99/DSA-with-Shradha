#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> vec = {1,2,3,4,5};
    vector<char> vector = {'a','b','c','d','e'};
//    cout<<vec[0]<<endl;
    for(int value : vec){
        cout<<value<<endl;
    }
    cout<<endl;
    for(char value : vector){
        cout<<value<<endl;
    }
    return 0;
}
