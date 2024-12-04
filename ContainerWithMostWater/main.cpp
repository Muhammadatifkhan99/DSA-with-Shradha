#include <iostream>
#include <vector>
using namespace std;


//brute force appraoch
int maxArea(vector<int> & height){
    int maxWater {0};
    for(int i=0;i<height.size();i++){
        for(int j=i+1;j<height.size();j++){
            //calculate width
            int width = j - i;
            //calculate height
            int ht = min(height[i],height[j]);
            int area = width * ht;
            maxWater = max(maxWater,area);
        }
    }
    return maxWater;
}

//optimal solution
int maxAreaa(vector<int> & height){
    int maxWater {0};
    int lp {0};
    int size = height.size();
    int rp {size - 1};
    while(lp < rp){
        //calculate the width
        int width = lp - rp;
        int ht = min(height[lp],height[rp]);
        int area = width * ht;
        maxWater = max(maxWater,area);
        height[lp] < height[rp] ? lp++ : rp--;
    }
    return maxWater;
}

int main() {

    vector<int> height {1,2,3,7,5,9,3,6,4,9};
    cout<<maxAreaa(height)<<endl;
    cout<<maxAreaa(height)<<endl;
    return 0;
}
