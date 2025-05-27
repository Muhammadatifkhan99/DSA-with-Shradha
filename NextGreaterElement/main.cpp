#include <iostream>
#include<vector>
#include<stack>

using namespace std;



int main() {
    vector<int> arr = {6,8,0,1,3};
    vector<int> ng;

    stack<int> s;

    for (int i=arr.size()-1;i>=0;i--) {
        //if there is no element on the stack
        if (s.empty()) {
            ng.push_back(-1);
        } else if (arr[i] < s.top()) {
            ng.push_back(s.top());
        }
        else {
            while (!s.empty()) {
                s.pop();
            }
            ng.push_back(-1);
        }
        s.push(arr[i]);
    }
    cout << endl;
    for (int a: ng) {
        cout << " " << a;
    }
    return 0;
}