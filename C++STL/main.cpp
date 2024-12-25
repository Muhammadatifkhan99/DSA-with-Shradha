#include<iostream>
#include<vector>

using namespace std;


int main() {
    vector<int> vec {1,2,3,4,5};

    // vec.erase(vec.begin());
    // vec.erase((vec.begin() + 2));

    //deleting range of elements

    // vec.erase(vec.begin() + 1, vec.begin() + 3);

    //adding a value at a specific index
    vec.insert(vec.begin() + 2,100);

    for (int val: vec) {
        cout << val << " ";
    }
    cout<< endl;




    return 0;
}