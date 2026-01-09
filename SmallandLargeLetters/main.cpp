#include <iostream>

int main() {
//    char userInput;
//    std::cin>>userInput;
//    if(userInput >= 'a' && userInput <= 'z'){
//        std::cout<<"This is a lowercase letter\n";
//    } else if (userInput >= 'A' && userInput <= 'Z') {
//        std::cout << "Uppercase letter\n";
//    } else {
//        std::cout<<"Input is not valid\n";
//    }
//int n{-35};
//std::cout<<(n >= 0 ? "Positive" : "Negative");
//int i{1};
//int n{10000};
//while(i<=n){
//    std::cout<<i<<std::endl;
//    i++;
//}
//



///sum of the numbers from 1 to n
//int sum{0};
//int num{5};
//for(int i=1;i<=num;i++){
//    sum +=i;
//}
//std::cout<<sum<<"\n";


////////////////////SUM of all odd numbers from 1 to N///////////////////////////////////

//int number{50};
//int sum{0};
//for(int i{0};i<=number;i++){
//    if(i%2 != 0){
//        std::cout<<i<<"\n";
//        sum += i;
//    }
//}
//std::cout<<"The sum of odd numbers is: "<<sum<<std::endl;


/////////////////////////////////////Check if a number is prime or not/////////////////////////
int n{9};
int i{1};
bool isPrime{true};
for(i = 2;i* i<= n; i++){
    if (n % i == 0){
        isPrime = false;
        break;
    }
}
    if (isPrime){
        std::cout<<"Prime Number";
    } else {
        std::cout<<"Not Prime Number";
    }
    return 0;
}
