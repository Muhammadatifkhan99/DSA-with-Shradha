#include <iostream>
#include <vector>
using namespace std;

int compressStr(vector<char> chars) {
    int indx {0};
    for (int i{0};i<chars.size();i++) {
        int count {0};
        char ch = chars[i];
        while (i < chars.size() && chars[i] == ch) {
            if (chars[i] == ch) {
                count ++;
                i++;
            }
        }
        if (count == 1) {
            chars[indx++] = ch;
        } else {
            chars[indx++] = ch;
            string str = to_string(count);
            for (char dig: str) {
                chars[indx++] = dig;
            }
        }
        i--;
    }
    chars.resize(indx);
    return indx;
}

int main() {
    vector<char> chars {'a','a','b','b','b','c','c'};
    cout << compressStr(chars) << endl;



    return 0;
}