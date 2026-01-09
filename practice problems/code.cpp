// #include<iostream>
// #include<vector>
// #include <algorithm>

// using namespace std;

// vector<int> lexicalOrder(int n){
//     vector<int> ans;
//     vector<string> strNum;


//     for(int i=1;i<n;i++){
//         strNum[i] = ans[i];
//     }

//     // for(int i{0};i<n;i++){
//     //     strNum[i] = ans[i];
//     // }

//     sort(strNum.begin(),strNum.end());

//     for(string n : strNum){
//         cout << n << " ";
//     }

//     // for(auto str: strNum){
//     //     ans.push_back(str);
//     // }

//     return ans;
// }

// int firstUniqChar(string s) {
//         int frequency[128] = {0}; 
//         // frquency counter -->
        
        
//         for(char ch : s){
//             frequency[ch - 'a']++;  // each frequency count -->
//         }
//         for(int i = 0 ; i < s.size();i++){
//             if(frequency[s[i] - 'a'] == 1)  // frequency match -->
//             return i;
//         }
//         return -1;
//     }



// int main(){
//     string str = "madam";    int firstUniqChar(string s) {
//         int frequency[128] = {0}; 
//         // frquency counter -->
        
        
//         for(char ch : s){
//             frequency[ch - 'a']++;  // each frequency count -->
//         }
//         for(int i = 0 ; i < s.size();i++){
//             if(frequency[s[i] - 'a'] == 1)  // frequency match -->
//             return i;
//         }
//         return -1;
//     }
//     cout << firstUniqChar(str) << endl;

//     // cout << " Hello World" << endl;
//     return 0;
// }





#include <iostream>
#include <iomanip> 
using namespace std;

int main() {
	int T; cin >> T;
	cout << setiosflags(ios::uppercase);
	cout << setw(0xf) << internal;
	while(T--) {
		double A; cin >> A;
		double B; cin >> B;
		double C; cin >> C;

		/* Enter your code here */
        int truncatedA = static_cast<int>(A);
        cout << showbase << nouppercase << hex << left << truncatedA << endl;
        cout << right << showpos << fixed << setprecision(2)<< setw(15) << setfill('_') << B << endl;
        cout << noshowpos << uppercase << scientific << setprecision(9) << C << endl;
	}
	return 0;

}