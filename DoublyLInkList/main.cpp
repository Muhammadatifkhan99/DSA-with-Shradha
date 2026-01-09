#include <iostream>
using namespace std;



class Node{
public:
    int data;
    Node * next;
    Node * prev;

    Node(int val) {
        data = val;
        next = prev = NULL;
    }

};

class DoublyList {
    Node * head;
    Node * tail;

public:
    DoublyList() {
        head  = tail = NULL;
    }

    void push_front(int val) {
        Node* newNode = new Node(val);

        if (head == NULL) {
            head = tail = newNode;
        } else {
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
        }
    }

    //push_back()

    void push_back(int val) {
        Node * newNode = new Node(val);
        if (head == NULL) {
            head = tail = newNode;
        } else {
            tail->next = newNode;
            newNode->prev = tail;
            tail = tail->next;
        }
    }

    void pop_front() {
        if (head == NULL) {
            return;
        }
        Node *temp = head;
        head = head->next;
        if (head != NULL) {
            head->prev = NULL;
        }
        temp->next = NULL;
        delete temp;
    }

    void pop_back() {
        if (head == NULL) {
            cout << "DLL is empty\n";
            return;
        }
        Node* temp = tail;
        tail = tail->prev;
        if (tail != NULL) {
            tail->next = NULL;
        }
        temp->prev = NULL;
        delete temp;
    }

    void print() {
        Node* temp = head;
        while (temp != NULL) {
            cout << temp->data << " <=> ";
            temp = temp->next;
        }
        cout << "NULL\n";
    }

    Node * flatten(Node * head) {
        if (head == NULL) {
            return;
        }
        Node * curr = head;
        while (curr != NULL) {
            if (curr->child != NULL) {
                //flatten the child node
                Node * next = curr->next;
                curr->next =  flatten(curr->child);
                curr->next->prev = curr;
                curr->child = NULL;
            }
            while (curr->next != NULL) {
                curr = curr->next;
            }
            if (next != NULL) {
                curr->next = next;
                next->prev = curr;
            }
            curr = curr->next;
        }
        return head;
    }

    Node* flatten(Node* head) {
        if(head == NULL){
            return head;
        }
        Node * curr = head;
        while(curr != NULL){
            if(curr->child != NULL){
                Node * next = curr->next;
                curr->next = flatten(curr->child);
                curr->next->prev = curr;
                curr->child = NULL;

                while(curr->next != NULL){
                    curr =  curr->next;
                }
                if(next != NULL){
                    curr->next = next;
                    next->prev = curr;
                }
            }
            curr = curr->next;
        }
        return head;
    }


    Node* reverseKGroup(Node* head, int k) {
        Node* temp = head;
        int count = 0;

        while(count < k){
            if(temp == NULL){
                return head;
            }
            temp = temp->next;
            count ++;
        }
        Node * prevNode = reverseKGroup(temp,k);
        temp = head; count = 0;
        while(count < k){
            Node * next = temp->next;
            temp->next = prevNode;
            prevNode = temp;
            temp = next;
            count ++;
        }
        return prevNode;
    }
};

int main() {
    DoublyList dll;

    dll.push_front(1);
    dll.push_front(2);
    dll.push_front(3);
    dll.push_front(4);

    dll.print();

    dll.push_back(9);
    dll.push_back(8);
    dll.push_back(7);
    dll.print();

    dll.pop_back();
    dll.pop_back();
    dll.print();


    return 0;
}