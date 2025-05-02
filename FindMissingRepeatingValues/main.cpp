#include<iostream>
#include <unordered_set>
#include<vector>

using namespace std;

vector<int> missingRepeatingValues(vector<vector<int>> grid) {
    unordered_set<int> s;
    vector<int> ans;
    int a {0};
    int b {0};
    int n = grid.size();
    //the sum of numbers from 1 to n given by the formula of (n*n)(n*n + 1)/2
    int expSum {0};
    //the sum this array will actually give
    int actualSum {0};

    //loops
    for (int i{0};i<n;i++) {
        for (int j{0};j<n;j++) {
            actualSum += grid[i][j];
            //if the missing value is in the set, assign it to a and then push it to the vector, otherwise continue on insertion into set
            if (s.find(grid[i][j]) != s.end()) {
                a = grid[i][j];
                ans.push_back(a);
            }
            s.insert(grid[i][j]);
        }
    }
    expSum = (n*n) * (n * n + 1)/2;
    b = expSum + a - actualSum;
    ans.push_back(b);
    return ans;
}


int main() {
    vector<vector<int>> grid = {{1,3},{2,2}};
    for (int val: missingRepeatingValues(grid)) {
        cout << val << endl;
    }
    return 0;
}