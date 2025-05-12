#include <iostream>
using namespace std;


int main() {
    int n = 4;

    for (int i{1};i<=n;i++) {
        //spaces
        for (int c{1};c<=n-i;c++) {
            cout << " ";
        }
        //incrementing Numbers
        int val = i;
        for (int c{1};c<=i;c++) {
            cout << val;
            val ++;
        }
        //decrementing
        val = val - 2;
        for (int c{1};c<=i-1;c++) {
            cout << val ;
            val --;
        }
        cout << endl;
    }
    return 0;
}