#include <iostream>
#include<string>
#include <bits/parse_numbers.h>

using namespace std;

int reverseNum(int n) {
    int number = n;
    if (n < 0) {
        n = n  * -1;
    }
    int digit = 0;
    int reverse = {0};
    while (n > 0) {
        digit = n % 10;
        reverse = reverse * 10 + digit;
        n /= 10;
    }
    if (number < 0) {
        return reverse * -1;
    }
    return reverse;
}
//two pointer approach
// int stringNum(int &x) {
//     string str = to_string(x);
//     int start = 0;
//     int end = str.length();
//     while (start <= end) {
//         if (str[start] >= '0' && str[start] <= '9' && str[end] >= '0' && str[start] <= '9' ) {
//             swap(str[start],str[end]);
//             start ++;
//             end --;
//         } else {
//             start ++;
//             end --;
//         }
//     }
//     int value = stoi(str);
//     return value;
// }

int main() {
    int n = -321;
    cout << reverseNum(n) << endl;




    return 0;
}