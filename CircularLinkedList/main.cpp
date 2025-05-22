#include <iostream>


class Node {
public:
    int data;
    Node *next;

    Node(int val) {
        data = val;
        next = NULL;
    }

};

class CircularList {

    Node * head;
    Node * tail;
public:
    CircularList() {
        head = tail = NULL;
    }
    void insertAtHead(int val) {
        Node * newNode = new Node(val);
        if (head == NULL) {
            head = tail = newNode;
            tail->next = head;
        }
        newNode->next = head;
        head = newNode;
        tail->next = head;
    }
    void print() {
        if (head == NULL) {
            return;
        }
        Node *temp = head->next;
        while (temp!=head) {
            std::cout << temp->data << "->";
            temp = temp->next;
        }
        std::cout<< temp->data;
    }
};


int main() {
    CircularList cll;
    cll.insertAtHead(1);
    cll.insertAtHead(2);
    cll.insertAtHead(3);

    cll.print();
    return 0;
}
