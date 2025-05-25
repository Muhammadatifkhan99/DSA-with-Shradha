#include <iostream>
#include<vector>
#include<list>

using namespace std;

class Stack {
    list<int> v;

public:
    void push(int val) {
        v.push_front(val);
    }

    void pop() {
        v.pop_front();
    }

    int top() {
        return v.front(); //needs to return the actual element
    }

    bool empty() {
        return v.size() == 0;
    }
};
int main() {
    Stack s;

    s.push(10);
    s.push(20);
    s.push(30);

    while (!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl; // 30 20 10
    return 0;
}