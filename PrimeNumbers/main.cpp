#include <iostream>
#include <cmath> // For  using the function of sqrt()
#include <vector>


using namespace std;

bool isPrime(int n) {
    if (n <= 1)
        return false; // Numbers <= 1 are not prime
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0)
            return false; // If divisible by i, it's not prime
    }
    return true; // Otherwise, it's prime
}

int main() {
    vector<int> arr = {4,1,2,1,2};
    int ans = 0;
    for (int val: arr) {
        ans = ans ^ val;
    }
    cout<<"The Single number in the Array: "<<ans<<endl;


    // int num;
    // std::cout << "Enter a number: ";
    // std::cin >> num;
    //
    // if (isPrime(num))
    //     std::cout << num << " is a prime number.\n";
    // else
    //     std::cout << num << " is not a prime number.\n";

    return 0;
}
