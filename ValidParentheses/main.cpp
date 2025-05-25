#include <iostream>
#include<stack>

using namespace std;


bool checkValidString(string &str) {
    stack<char> s;
    for(int i{0};i<str.size();i++){
        if(str[i] == '(' || str[i] == '{' || str[i] == '['){
            s.push(str[i]);
        } else { // no opening parentheses detected
            if(s.size() == 0){
                return false;
            }
            if(s.top() == '(' && str[i] == ')' || s.top() == '{' && str[i] == '}' || s.top() == '[' && str[i] == ']'){
                s.pop();
            } else {
                return false; // not  a valid match could be found;
            }
        }
    }
    return s.size() == 0;
}





int main() {
    string str = "({[]}";
    cout << boolalpha;

    cout << checkValidString(str);
    return 0;
}
