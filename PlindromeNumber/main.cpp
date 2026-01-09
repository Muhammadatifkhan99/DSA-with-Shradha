#include <iostream>

using namespace std;

bool isPlindrome(int &x) {
    if (x < 0) return false;
    int original {x};
    int rnum = {0};
    while (x > 0) {
        int rdigit = x % 10;
        rnum = rnum * 10 +  rdigit;
        x = x / 10;
    }
    if (original == rnum) {
        return true;
    }
    return false;
}


int main() {
    int number {111};

    if (isPlindrome(number)) {
        cout << "its a valid plindrome" << endl;
    } else
        cout << " Not a valid plindrome " << endl;



    return 0;
}