#include <algorithm>
#include<iostream>


using namespace std;

bool isPalindrome(string str) {
    string rstr;
    rstr = str;
    reverse(rstr.begin(),rstr.end());
    if (rstr == str)
        return true;
    else
        return false;
}

int main() {
    string str = "110";

    if (isPalindrome(str)) {
        cout << str << " is a valid palindrome" << endl;
    } else
        cout << str << " is not a valid palindrome" << endl;










    // string str = "Hello World";
    //
    // cout << "Reversing a string using the reverse() function from STL: " << endl;
    //
    // reverse(str.begin(),str.end());
    // cout << "String reversed using the reverse function: " << str << endl;
    //
    // int start {0};
    // int end = str.length() - 1;
    // while (start <= end) {
    //     swap(str[start],str[end]);
    //     start ++;
    //     end --;
    // }
    // cout << "Reversed String: " << endl;
    // cout << str << endl;
    //
    // cout << "///////////////////////////";
    //
    // for (int i{0};i<str.length();i++) {
    //     if (str[i] == ' ') {
    //         cout << " ";
    //     } else
    //         cout << str[i];
    // }
    // cout << endl;
    // string str1 = ", inshallah very soon ";
    //
    // string str3 = str + str1;
    // cout << (str == str1) << endl;
    // cout << str3 << endl;

    return 0;
}