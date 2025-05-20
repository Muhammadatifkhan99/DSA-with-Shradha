#include <iostream>
using namespace std;

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

    Node* reverseList(Node* head) {
        Node* prev = NULL;
        Node* curr = head;
        Node* next = NULL;

        while(curr != NULL){
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }
    Node* getHead() {
        return head;
    }
    //brute force appraoch
    Node* getMiddleNode() {
        Node* temp = head;
        int size = 0;

        // First pass: Count the total number of nodes
        while (temp != NULL) {
            temp = temp->next;
            size++;
        }

        // Reset temp to head
        temp = head;

        // Second pass: Traverse to the middle node
        for (int i = 0; i < size / 2; i++) {
            temp = temp->next;
        }

        return temp;  // This is the middle node
    }
    //optimized approach->the two pointer approach

    Node* getMidSlowFast() {
        Node* slow = head;
        Node* fast = head;

        while (fast != NULL && fast->next != NULL) {
            fast = fast->next->next;
        }
        return slow;
    }



};

int main() {
    List ll;
    ll.push_back(1);
    ll.push_back(2);
    ll.push_back(3);
    ll.push_back(4);
    ll.push_back(5);

    Node* middle = ll.getMiddleNode();
    if (middle != NULL) {
        cout << "Middle node data: " << middle->data << endl;
    }
    cout <<"Using the slow fast pointer approach" << endl;

    Node* mid = ll.getMidSlowFast();
    if (mid != NULL) {
        cout << "Middle node data (Slow-Fast method): " << mid->data << endl;
    }
    return 0;
}
