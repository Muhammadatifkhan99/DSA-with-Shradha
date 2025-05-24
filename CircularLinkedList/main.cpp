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

    void insertAtTail(int val) {
        Node* newNode = new Node(val);
        if (tail == NULL) {
            head = tail = newNode;
            tail->next = head;
        } else {
            newNode->next = head;
            tail->next = newNode;
            tail = newNode;
        }
    }

    void deleteAtHead() {
        if (head == NULL) {
            return;
        } else if (head == tail) {
            delete head;
            head = tail = NULL;
        } else {
            Node * temp = head;
            head = head->next;
            tail->next = head;
            temp->next = NULL;
            delete temp;
        }
    }



    void print() {
        if (head == NULL) {
            return;
        }
        std::cout << head -> data << "->";
        Node *temp = head->next;
        while (temp!=head) {
            std::cout << temp->data << "->";
            temp = temp->next;
        }
        std::cout<<temp->data<<std::endl;
    }

};


int main() {
    CircularList cll;
    cll.insertAtTail(1);
    cll.insertAtTail(2);
    cll.insertAtTail(3);

    cll.deleteAtHead();
    cll.deleteAtHead();

    cll.print();
    return 0;
}
