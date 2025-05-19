#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = NULL;
    }
};
class List {
    Node* head;
    Node* tail;
public:
    List() {
        head = tail = NULL;
    }
    void push_front(int val) {
        Node* newNode = new Node(val); //dynamic object created, to persist in memory

        if (head == NULL) {
            head = tail = newNode;
            return;
        } else {
            //go to the next pointer of the newly created node and assigne the value of head there.
            newNode->next = head;
            //make the head points to the newnode so when we call the head it will points to the first node of the LL
            head = newNode;
        }
    }

    void push_back(int val) {
        Node * newNode = new Node(val); //new Node(val) allocates a new node object in heap memory, sets its data = val, and next = NULL Then newNode (a pointer) stores the address of that node.
        if (head == NULL) {
            head = tail = newNode;
        }else //head != NULL
        {
            tail->next = newNode;
            tail = newNode;
        }
    }


    void printLL() {
        Node* temp = head; // we do not want to lose the head pointer, because in linkedlist we can only move forward..

        while (temp != NULL) {
            cout << temp->data << "->" ;
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};

int main() {
    List ll;

    ll.push_front(1);
    ll.push_front(2);
    ll.push_front(3);
    ll.push_back(5);
    ll.push_back(8);

    ll.printLL();
    return 0;
}