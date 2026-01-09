#include <iostream>
#include <vector>
using namespace std;


//brute force appraoch
int maxArea(vector<int>& height){
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

//optimal solution using two pointer approach
int maxAreaa(vector<int>& height){
    int maxWater {0};
    int lp {0}; //left pointer
    int size = height.size(); //calculate the size of vector
    int rp {size - 1}; //right pointer starts at n - 1;
    while(lp < rp){
        //calculate the width
        int width = rp - lp;
        int ht = min(height[lp],height[rp]);
        int area = width * ht;
        maxWater = max(maxWater,area);
        height[lp] < height[rp] ? lp++ : rp--;
    }
    return maxWater;
}

int main() {

    vector<int> lengths {1,2,3,7,5,9,3,6,4,9};
    cout<<maxAreaa(lengths)<<endl;
    cout<<maxAreaa(lengths)<<endl;
    return 0;
}
