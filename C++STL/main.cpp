#include<iostream>
#include<vector>

using namespace std;


int main() {
    vector<int> vec {1,2,3,4,5};

    vector<int>::iterator it;
    //with iterators we can access the direct memory address of these values
    //it functions the same as the for each loop or the normal for loop
    for (it = vec.begin();it != vec.end();it++) {
        cout << *(it) << endl;
    }

    vector<int>::reverse_iterator itr;
    for (itr = vec.rbegin();itr != vec.rend();itr ++) {
        cout << "printing in reverse fashion: " << *(itr) << endl;
    }

    cout << endl;
    cout << "Modern Approach " << endl;

    for (auto it1 = vec.begin();it1 != vec.end(); it1 ++) {
        cout << *(it1) << endl;
    }

    // vec.erase(vec.begin());
    // vec.erase((vec.begin() + 2));

    //deleting range of elements

    // vec.erase(vec.begin() + 1, vec.begin() + 3);

    //adding a value at a specific index
    vec.insert(vec.begin() + 2,100);

    // for (int val: vec) {
    //     cout << val << " ";
    // }
    // cout<< endl;




    return 0;
}