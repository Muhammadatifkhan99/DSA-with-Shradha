//master header file is bits/stdc++.h when this headerfile is included its means
//all the headerfiles of c++ will be include in the code...for example check the given code

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n{};
    cin>>n;
    int a[n];
    for(size_t i{0};i<n;i++){
        cin>>a[i];
    }
    //the inbuilt sort function in c++
    sort(a,a+n);

    for (int (i) = 0; (i) < n; ++(i)) {
        cout<<a[i]<<" ";
    }
    return 0;
}