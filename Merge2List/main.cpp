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


    void pop_front() {
        //check if the LL is already empty or not
        if (head == NULL && tail == NULL) {
            return;
        }
        Node* temp = head; //temp is a pointer to a Node type, which is now pointing to head, where the two values are store, one is data and other is a pointer
        head = head->next;
        //temp = NULL; //store a null value at the temp pointer
        delete temp;
    }

    void pop_back() {
        if (head == NULL) {
            cout <<"Link List is empty\n" ;
            return;
        }
        if (head == tail) {  // only one node
            delete head;
            head = tail = NULL;
            return;
        }
        Node* temp = head;
        while (temp->next->next != NULL) {
            temp = temp->next;
        }
        temp->next = NULL;
        delete tail;
        tail = temp;

    }

    void insert(int val, int pos) {
        if (pos < 0) {
            cout << "Invalid Postion\n";
            return;
        }
        if (pos == 0) {
            push_front(val);
            return;
        }
        Node* temp = head;
        for (int i=0;i<pos -1;i++) {
            if (temp == NULL) {
                cout << "Invalid Position\n";
                return;
            }
            temp = temp->next;
        }
        Node* newNode = new Node(val);
        newNode->next = temp->next;
        temp->next = newNode;
    }


    void printLL() {
        Node* temp = head; // we do not want to lose the head pointer, because in linkedlist we can only move forward..

        while (temp != NULL) {
            cout << temp->data << "->" ;
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }

    int search(int key) {
        Node* temp = head;
        int index=0;
        while (temp != NULL) {
            if (temp->data == key) {
                return index;
            }
            temp = temp->next;
            index++;
        }
        return -1;
    }

    Node* mergeTwoSorted(Node *h1,Node* h2) {
        if (h1 == NULL || h2 == NULL) {
            return h1 == NULL ? h2 : h1;
        }
        if (h1->data <= h2->data ) {
            h1->next = mergeTwoSorted(h1->next,h2);
            return h1;
        } else {
            h2-next = mergeTwoSorted(h1,h2->next);
            return h2;
        }
    }

    Node* mergeTwoLists(Node* h1,Node* h2) {
        Node dummy(0);
        Node* tail = &dummy;
        while(h1 && h2){
            if(h1->data <= h2->data){
                tail->next = h1;
                h1 = h1->next;
            } else {
                tail->next = h2;
                h2 = h2->next;
            }
            tail = tail->next;
        }
        tail->next = h1 ? h1 : h2;
        return dummy.next;
    }
};

int main() {
    List ll;

    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);
    ll.insert(4,5);

    ll.printLL();
    cout << ll.search(1) << endl;
    return 0;
}
