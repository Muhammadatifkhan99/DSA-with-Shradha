#include<iostream>
#include<string>

using namespace std;

bool isFreqSame(int freq1[],int freq2[]) {
    for (int i{0};i<26;i++) {
        if (freq1[i] != freq2[i] )
            return false;
    }
    return true;
}

bool checkInclusion(string s1, string s2) {
    int freq[26] = {0};
    for (int i=0;i< s1.length();i++) {
        int idx = s1[i] - 'a';
        freq[idx]++;
    }
    int windSize = s1.length();
    for (int i{0};i<s2.length();i++) {
        int windindex = 0;
        int index = i;
        int windFreq[26] = {0};
        while (windindex < windSize && index < s2.length()) {
            windFreq[s2[index] - 'a']++;
            windindex ++;
            index ++;
        }
        if (isFreqSame(freq, windFreq)) {
            return true;
        }
    }
    return false;
}

int main() {
    string s = "ab";
    string s2= "eidbaooo";
    cout << checkInclusion(s,s2) << endl;





    return 0;
}