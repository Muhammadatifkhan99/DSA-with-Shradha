#include <iostream>

bool validation(int n) {

    if (n <=1 || n >= 5) {
        return false;
    }
        return true;
}


int main() {
    std::cout << "Hello, World!" << std::endl;

    int n = 2;
    while (validation(2)) {
        std::cout <<"Enter an integer between 1 and 5: " << std::endl;
        std :: cin >> n;
        if (n <= 1 || n >= 5) {
            std:: cout << "Out of range, try again! "<< std:: endl;
        } else {
            std :: cout << "Thanks" << std::endl;
            return true;
        }
    }
    if (validation(n)) {
        std::cout << "input is in the range" << std::endl;
    } else
        std:: cout << "Input is not in the rang" << std::endl;
    return 0;
}