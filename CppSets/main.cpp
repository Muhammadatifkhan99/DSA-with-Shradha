#include <iostream>
#include <set>
using namespace std;



int main() {

    set<int> s;


    s.insert(2);
    s.insert(3);
    s.insert(5);

    for (int x: s) {
        cout << x << endl;
    }


    return 0;
}