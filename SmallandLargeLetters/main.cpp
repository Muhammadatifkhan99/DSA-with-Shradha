#include <iostream>

int main() {
    char userInput;
    std::cin>>userInput;
    if(userInput >= 'a' && userInput <= 'z'){
        std::cout<<"This is a lowercase letter\n";
    } else if (userInput >= 'A' && userInput <= 'Z') {
        std::cout << "Uppercase letter\n";
    } else {
        std::cout<<"Input is not valid\n";
    }
    return 0;
}
