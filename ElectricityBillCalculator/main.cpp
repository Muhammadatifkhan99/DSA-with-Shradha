#include <iostream>
using namespace std;




int main() {
    int units = 0;
    cout << "Enter the total units consumed: ";
    cin >> units;

    int cost =0;

    if (units <= 100) {
        cost = 0;
    } else if (units <= 200) {
        cost = 0 + (units - 100)*5;
    } else if (units <= 300) {
        cost = 0 + (100*5) + (units - 200)*10;
    } else {
        cost = 0 + (100*5) + (100*10) + (units - 300)*12;
    }
    cout << "The total cost of your electricity is: " << cost << endl;

    return 0;
}