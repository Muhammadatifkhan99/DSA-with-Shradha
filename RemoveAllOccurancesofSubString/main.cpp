#include<iostream>
#include<string>

using namespace std;

string rmOccurances(string &str, const string & part) {
    //str.find(part) returns a position compare that position with str.length if its less then execute theloop otherwise exit the loop
    while (str.find(part) <= str.length()) {
        str.erase(str.find(part), part.length());
    }
    return str;

}

int main() {
    string s = "eemckxmckx";
    string part = "emckx";
    cout << s.length() << endl;
    cout << part.length() << endl;
    cout << s.find(part) << endl;
    cout << rmOccurances(s,part);
    return 0;
}