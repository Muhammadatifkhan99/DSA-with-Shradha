#include<iostream>
#include<vector>

using namespace std;


int main() {
    vector<int> vec;

    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);

    cout<<"vec size: "<<vec.size()<<endl;
    cout<<"capacity: "<<vec.capacity()<<endl;

    cout<<"value at(0) "<< vec.at(0)<<endl;

    cout<<"Front of vector: "<<vec.front()<<endl;
    cout<<"back of vector: "<<vec.back()<<endl;

    

    return 0;
}