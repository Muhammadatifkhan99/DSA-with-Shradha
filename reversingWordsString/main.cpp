#include <algorithm>
#include<iostream>
#include<string>

using namespace std;


string reverseString(string s) {
    reverse(s.begin(),s.end());
    string ans = " ";
    for (int i{0};i<s.length();i++) {
        string word = " ";
        while (i < s.length() && s[i] != ' ') {
            word += s[i];
            i++;
        }
        reverse(word.begin(), word.end());
        if (word.length() > 0) {
            ans += " " + word;
        }
    }
    return ans.substr(1);
}

int main() {
    string s = "the pen";
    cout << reverseString(s) << endl;

    cout << "Length of a String: " << s.length() << endl; //length counts empty spaces as well.

    return 0;
}
