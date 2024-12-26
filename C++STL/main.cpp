#include<iostream>
#include<vector>
#include<list>
#include<deque>
#include<stack>
#include<queue>
#include<map>
#include<unordered_map>





using namespace std;


int main() {
    unordered_map<string,int> m;

    m.emplace("tv",21);
    m.emplace("laptop ",23);
    m.emplace("headphones", 34);
    m.emplace("fridge", 56);
    m.emplace("shoes",67);
    // m.erase(m.find("tv"));

    for (auto val: m) {
        cout<< val.first << " " << val.second << endl;
    }


    //
    // m.insert({"camera", 22});
    // m.emplace("watches", 129);
    // for (auto p: m) {
    //     cout<< p.first << " " << p.second << endl;
    // }
    // cout << "Count : " << m.count("camera") << endl;
    //
    // string str {""};
    // cout << "Enter the name to search in map: " << endl;
    // cin >> str;
    //
    // if (m.find(str) != m.end()) {
    //     cout << str << " found in map " << endl;
    // } else {
    //     cout << "Not Found" << endl;
    // }




    // priority_queue<int> q;
    //
    // //building a reverse priority_queue
    // priority_queue<int, vector<int>,greater<int>> q1;
    //
    //
    // q1.push(10);
    // q1.push(4);
    // q1.push(5);
    // q1.push(3);
    //
    // while (!q1.empty()) {
    //     cout << q1.top() << " ";
    //     q1.pop();
    // }

    //  stack<int> s;
    //
    // s.push(1);
    // s.push(2);
    // s.push(3);
    //
    // cout<< " size of s before swap " << s.size() << endl;
    //
    // stack<int> s2;
    //
    // s2.swap(s);
    // cout<< " s size " << s.size() << endl;
    // cout<< " s2 size " << s2.size() << endl;
    // while (!s.empty()) {
    //     cout << s.top() << " ";
    //     s.pop();
    // }
    // cout<< endl;
    // cout<< s.size() << endl;
    // cout<< s.empty() << endl;







    // vector<pair<int,int>> vec {{1,2},{3,4},{4,5},{6,7}};
    //
    // //pushing a pair using the push_back function
    // //for push_back you have to convert the value to the pair it cannot do it
    // vec.push_back({8,9});
    // //pushing a pair using the emplace_back function which will insert it inplace and creates the object at the time of creation
    // //emplace_back convert a value into a pair
    // vec.emplace_back(10,11);
    //
    // for (pair<int,int> p : vec) {
    //     cout << p.first << " " << p.second << endl;
    // }
    // cout << endl;





    // pair<int,int> p = {1,2};
    // cout << p.first << endl;
    // cout << p.second << endl;
    //
    // pair<int,pair<int,int>> p2 = {1,{12,21}};
    // cout << p2.first << endl;
    // cout << p2.second.first << endl;
    // cout << p2.second.second << endl;


    // deque<int> d {1,2,3};
    //
    // for (int val: d) {
    //     cout << val << endl;
    // }
    // cout<< d[2] << endl;



    // list<int> l {1,2,3};
    //
    // for (int val: l) {
    //     cout << val << " ";
    // }
    // cout<< endl;
    //
    // list<int> l1;
    //
    // l1.emplace_back(0);
    // l1.push_back(1);
    // l1.push_back(2);
    // l1.push_front(3);
    // l1.push_front(5);
    //
    // l1.pop_back();
    // l1.pop_front();
    //
    //
    // for (int val: l1) {
    //     cout << val << " ";
    // }
    // cout << endl;



    // vector<int> vec {1,2,3,4,5};
    //
    // vector<int>::iterator it;
    // //with iterators we can access the direct memory address of these values
    // //it functions the same as the for each loop or the normal for loop
    // for (it = vec.begin();it != vec.end();it++) {
    //     cout << *(it) << endl;
    // }
    //
    // vector<int>::reverse_iterator itr;
    // for (itr = vec.rbegin();itr != vec.rend();itr ++) {
    //     cout << "printing in reverse fashion: " << *(itr) << endl;
    // }
    //
    // cout << endl;
    // cout << "Modern Approach " << endl;
    //
    // for (auto it1 = vec.begin();it1 != vec.end(); it1 ++) {
    //     cout << *(it1) << endl;
    // }

    // vec.erase(vec.begin());
    // vec.erase((vec.begin() + 2));

    //deleting range of elements

    // vec.erase(vec.begin() + 1, vec.begin() + 3);

    //adding a value at a specific index
    // vec.insert(vec.begin() + 2,100);

    // for (int val: vec) {
    //     cout << val << " ";
    // }
    // cout<< endl;




    return 0;
}