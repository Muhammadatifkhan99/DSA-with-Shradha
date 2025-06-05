#include <iostream>
#include<vector>
using namespace std;

int trap(vector<int>& height) {
    int n = height.size();


    int ans = 0;
    int lmax =0;
    int rmax = 0;
    int l = 0;
    int r = n-1;

    while(l < r){
        lmax = max(lmax,height[l]);
        rmax = max(rmax,height[r]);

        if(lmax < rmax){
            ans += lmax - height[l];
            l++;
        } else {
            ans += rmax - height[r];
            r--;
        }
    }
    return ans;
}



int main() {
    vector<int> heights = {4,2,0,3,2,5};
    vector<int> heights1 = {0,1,0,2,1,0,1,3,2,1,2,1};
    cout << trap(heights1) << endl;
    int n = heights.size();

    vector<int> lmax(n,0);
    vector<int> rmax(n,0);

    lmax[0] = heights[0];
    rmax[n-1] = heights[n-1];

    for (int i=1;i<n;i++) {
        lmax[i] = max(lmax[i-1],heights[i]);
    }
    for (int i=n-2;i>=0;i--) {
        rmax[i] = max(rmax[i+1],heights[i]);
    }
    //
    // for (int v: lmax) {
    //     cout << v << " " ;
    // }
    // cout << endl;
    // for (int v: rmax) {
    //     cout << v << " " ;
    // }

    int ans = 0;
    for (int i=0;i<n;i++) {
        ans += min(lmax[i],rmax[i]) - heights[i];
    }
    cout << ans << endl;
    return 0;
}