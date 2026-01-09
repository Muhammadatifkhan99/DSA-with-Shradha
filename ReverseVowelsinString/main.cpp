#include<iostream>
#include<string>
#include<algorithm>


using namespace std;


bool isVowel(char c) {
    c = tolower(c);
    char vowel[5] = {'a','e','i','o','u'};
    for (char v : vowel) {
        if (c == v) return true;
    }
    return false;
}
int main() {
    string str = "IceCreAm";
    int start {0};
    int n = str.length();
    int end = n - 1;
    while (start <= end) {
        if (!isVowel(str[start])) {
            start ++;
        } else if (!isVowel(str[end])) {
            end --;
        } else {
            swap(str[start], str[end]);
            start ++;
            end --;
        }
    }
    cout << str << endl;

    return 0;
}