#include <iostream>

int main() {
//    char grade = 'a';
//    //this conversion which is implicitly done by the compiler
//    int value = grade;
//    std::cout<<value;

//    double price {100.99};
//    int newprice {0};
//    newprice = (int) price;
//    std::cout<<newprice;


//Increment and decrement operators
//post increment operator
//    int a {10};
//
//    int b {a++};    //pehlay kaam hoga, phir update hogi value b mai...
//    std::cout<<b<<std::endl;
//    std::cout<<a<<std::endl;

    //Pre increment OPERATOR
    int a {10};

    int b {++a};    //pehly update hoga, phir kaam hoga
    std::cout<<b<<std::endl;
    std::cout<<a<<std::endl;


    return 0;
}
