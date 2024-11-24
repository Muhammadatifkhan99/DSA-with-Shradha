#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> vec = {1,2,3,4,5};
    vector<char> vector = {'a','b','c','d','e'};
//    cout<<vec[0]<<endl;

    cout<<"The size of int vector is: "<<vec.size()<<endl;
    cout<<"The size of char vector is: "<<vector.size()<<endl;


    for(int value : vec){
        cout<<value<<endl;
    }
    cout<<endl;
    for(char value : vector){
        cout<<value<<endl;
    }

    cout<<"After push_back"<<endl;
    vec.push_back(12);
    vector.push_back('g');

    for(int value : vec){
        cout<<value<<endl;
    }
    cout<<endl;
    for(char value : vector){
        cout<<value<<endl;
    }

    cout<<"Vector after pop_back"<<endl;
    vec.pop_back();
    vector.pop_back();
    for(int value : vec){
        cout<<value<<endl;
    }
    cout<<endl;
    for(char value : vector){
        cout<<value<<endl;
    }
    cout<<"Vector front"<<endl;
    vec.front();
    vector.front();
    for(int value : vec){
        cout<<value<<endl;
    }
    cout<<endl;
    for(char value : vector){
        cout<<value<<endl;
    }
    cout<<"The at function of vector"<<endl;
    cout<<vec.at(2)<<endl;
    cout<<vector.at(4)<<endl;
    return 0;
}
