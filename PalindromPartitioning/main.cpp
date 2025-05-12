#include <algorithm>
#include <iostream>
#include<vector>

using namespace std;

bool isPlin(string part) {
    string s = part;
    reverse(s.begin(),s.end());

    return s == part;
}

void getAllParts(string s, vector<string> &partitions, vector<vector<string>> &ans) {

    if (s.size() == 0) {
        ans.push_back(partitions);
        return;
    }
    for (int i{0};i<s.size();i++) {
        string part = s.substr(0,i+1);
        if (isPlin(part)) {
            partitions.push_back(part);
            getAllParts(s.substr(i+1),partitions,ans);
            partitions.pop_back();
        }
    }


}

vector<vector<string>> partition(string s) {
    vector<vector<string>> ans;
    vector<string> partitions;

    getAllParts(s,partitions,ans);
    return ans;
}

int main() {
    string s = "aab";
    vector<vector<string>> ans;

    ans = partition(s);

    for (auto a : ans) {
        for (auto b : a) {
            cout << b << endl;
        }
    }

    return 0;
}