#include <iostream>
using namespace std;




int main() {
    int n = 15;
    int i;
    for (i = 0;i<n - 1;i++) {
        if (n % i == 0) {
            cout << n << " is prime number" << endl;
        }
    }
    if (i==n) {
        cout << n << " is not a prime number" << endl;
    }
    return 0;
}
