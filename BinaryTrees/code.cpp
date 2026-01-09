#include<iostream>
#include<vector>
// #include <algorithm>
#include <queue>

using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val){
        data = val;
        left = right = NULL;
    }
};

static int idx = -1;

Node* buildTree(vector<int> preorder){
    idx ++;
    if(preorder[idx] == -1){
        return NULL;
    }
    Node* root = new Node(preorder[idx]);
    root->left = buildTree(preorder);
    root->right = buildTree(preorder);

    return root;
}


//preorder traversal
void preOrderTraversal(Node* root){
    if(root == NULL){
        return;
    }
    cout << root->data << " ";
    preOrderTraversal(root->left);
    preOrderTraversal(root->right);
}


//inorder traversal

void inorderTravsal(Node* root){
    if(root == NULL){
        return;
    }
    inorderTravsal(root->left);
    cout << root->data << " ";
    inorderTravsal(root->right);
}

//postorder traversal 

void postOrderTraversal(Node* root){
    if(root == NULL){
        return;
    }
    postOrderTraversal(root->left);
    postOrderTraversal(root->right);
    cout << root->data << " ";
}

//level order traversal of treee

void levelOrderTraversal(Node* root){
    queue<Node*> q;

    q.push(root);
    while(q.size() > 0){

        Node* curr = q.front();
        q.pop();

        cout << curr->data << " ";

        if(curr->left != NULL){
            q.push(curr->left);
        }
        if(curr->right != NULL){
            q.push(curr->right);
        }
        
    }

}

void levelOrderTraversalNewLine(Node* root){
    queue<Node*> q;

    q.push(root);
    q.push(NULL);
    while(q.size() > 0){

        Node* curr = q.front();
        q.pop();

        if(curr == NULL){
            if(!q.empty()){
                cout << endl;
                q.push(NULL);
                continue;
            }
            else {
                break;
            }
        }
        cout << curr->data << " ";

        if(curr->left != NULL){
            q.push(curr->left);
        }
        if(curr->right != NULL){
            q.push(curr->right);
        }
        
    }

}


//height of Binary tree

int height(Node* root){
    if(root == NULL){
        return 0;
    }
    int leftHt = height(root->left);
    int rightHt = height(root->right);

    return max(leftHt,rightHt) + 1;
}

//total nodes in a binary tree

int count(Node* root){
    if(root == NULL){
        return 0;
    }
    int leftCount =  count(root->left);
    int rightCount = count(root->right);

    return leftCount + rightCount + 1;
}

///Sum of all the nodes in binary tree

int sumOfNodes(Node* root){
    if(root == NULL){
        return 0;
    }
    int leftSum = sumOfNodes(root->left);
    int rightSum = sumOfNodes(root->right);
    return leftSum + rightSum + root->data;
}



int main(){
    vector<int> preorder = {1,2,-1,-1,3,4,-1,-1,5,-1,-1};
    Node *root = buildTree(preorder);

    cout << "PreOrderTraversal: ";
    preOrderTraversal(root);
    cout << endl;

    cout << "inorderTraversal: ";
    inorderTravsal(root);
    cout << endl;

    cout << "postOrderTraversal: ";
    postOrderTraversal(root);
    cout << endl;

    cout << "LevelOrderTraversal: ";
    levelOrderTraversal(root);
    cout << endl;

    cout << "LevelOrderTraversalNewLine: "<< endl;
    levelOrderTraversalNewLine(root);
    cout << endl;

    cout << "Height of the BT is: " ;
    cout << height(root) << endl;
    cout << endl;

    cout << "Total Nodes in BT: ";
    cout << count(root) << endl;
    cout << endl;

    cout << "Sum Nodes in BT: ";
    cout << sumOfNodes(root) << endl;
    cout << endl;




    // cout << root->data << endl;
    // cout << root->left->data << endl;
    // cout << root->right->data << endl;




    // cout << " Environment is Working" << endl;
    return 0;
}
