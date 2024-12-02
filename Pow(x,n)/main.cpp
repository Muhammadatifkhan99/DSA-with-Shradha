#include <iostream>
using namespace std;

double mypow(double x,int n){
    if (n == 0) return 1.0;
    if (x == 0) return 0.0;
    if (x == 1) return 1.0;
    if (x == -1 && n % 2 == 0) return 1.0;
    if (x == -1 && n % 2 != 0) return -1.0;

    int binForm{n};
    if(n < 0 ){
        x = 1/x;
        binForm = -binForm;
    }
    int ans{1};
    while(binForm > 0){
        if(binForm % 2 == 1){
            ans = ans * x;
        }
        x = x * x;
        binForm /= 2;
    }
    return ans;
}

int main() {
    cout<<mypow(2,0)<<endl;
    cout<<mypow(0,2)<<endl;
    cout<<mypow(1,2)<<endl;
    cout<<mypow(-1,4)<<endl;
    cout<<mypow(-1,5)<<endl;
    cout<<mypow(3,2)<<endl;
    return 0;
}
