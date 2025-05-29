#include <iostream>
#include<stack>
#include<vector>

using namespace std;

int largestRectangleArea(vector<int>& heights) {
    int n = heights.size();
    vector<int> right(n,0);
    vector<int> left(n,0);
    stack<int> s;

    //calculate the smaller elements on the right side

    for(int i=n-1;i>=0;i--){
        while(s.size()>0 && heights[s.top()] >= heights[i]){
            s.pop();
        }
        right[i] = s.empty() ? n : s.top();
        s.push(i);
    }

    while(!s.empty()){
        s.pop();
    }

    for(int i{0};i<n;i++){
        while(s.size()>0 && heights[s.top()] >= heights[i]){
            s.pop();
        }
        left[i] = s.empty() ? -1 : s.top();
        s.push(i);
    }
    int ans=0;

    for(int i{0};i<n;i++){
        int width = right[i] - left[i] - 1;
        int currArea = heights[i] * width;
        ans = max(ans,currArea);
    }
    return ans;
}


int main() {
    vector<int> heights = {2,1,5,6,2,3};
    cout << largestRectangleArea(heights) << endl;
    return 0;
}