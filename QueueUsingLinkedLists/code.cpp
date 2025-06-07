#include<iostream>
#include<deque>
#include <queue>
using namespace std;

class Node {
    public:
    int data;
    Node * next;

    Node(int val){
        data = val;
        next = NULL;
    }
};

class Queue {
    Node * head;
    Node * tail;

    public:
    Queue(){
        head = tail = NULL;
    }

    void push(int data){
        Node * newNode = new Node(data);
        if (empty()){
            head = tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
        
    }

    void pop() {
        if(empty()){
            cout << "LL is empty\n";
        }
        Node* temp = head;
        head = head->next;
        delete temp;
    }

    int front() {
        return head->data;
    }

    bool empty(){
        return head == NULL;
    }
};



int main() {
    deque<int> dq;

    dq.push_back(1);
    dq.push_back(2);
    dq.push_back(3);

    dq.push_front(4);

    cout << dq.front() << " " << dq.back();
    dq.pop_back();
    cout << endl;
    cout << dq.front() << " " << dq.back();
    dq.pop_front();
    cout << endl;
    cout << dq.front() << " " << dq.back();




    // queue<int> q;
    // // Queue q;

    // q.push(1);
    // q.push(2);
    // q.push(3);

    // while(!q.empty()){
    //     cout << q.front() << " ";
    //     q.pop();
    // }
    // cout << endl;
    // cout << "Hello World" << endl;
}