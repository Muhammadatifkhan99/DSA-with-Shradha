#include<iostream>
#include<vector>
#include <algorithm>
#include <queue>
#include<map>

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
bool isIdentical(Node* p,Node* q){
    if(p == NULL || q == NULL){
        return p==q;
    }

    bool isLeftSame = isIdentical(p->left,q->left);
    bool isRightSame = isIdentical(p->right,q->right);

    return isLeftSame && isRightSame && p->data == q->data;
}

bool isSubTree(Node* root,Node* subRoot){
    if(root == NULL || subRoot == NULL){
        return root == subRoot;
    }

    if(root->data == subRoot->data && isIdentical(root,subRoot)){
        return true;
    }
    return isSubTree(root->left,subRoot) || isSubTree(root->right,subRoot);
}

int ans = 0;
int height(Node* root){
    if(root == NULL){
        return 0;
    }
    int leftHt = height(root->left);
    int rightHt = height(root->right);
    ans = max(leftHt + rightHt, ans);
    return max(leftHt,rightHt) + 1;
}


int Diameter(Node* root){
    height(root);

    return ans;
}

void topViewTree(Node * root){
    queue<pair<Node*,int>> q;
    map<int,int> m;

    q.push({root,0});

    while(q.size()>0){
        Node* curr = q.front().first;
        int currHD = q.front().second;
        q.pop();

        if(m.find(currHD) ==  m.end()){
            m[currHD] = curr->data;
        }

        if(curr->left != NULL){
            q.push({curr->left,currHD - 1});
        }
        if(curr->right != NULL){
            q.push({curr->right,currHD + 1});
        }
    }

    for(auto it:m){
        cout << it.second << " ";
    }
    cout << endl;

}

void kthLevel (Node* root,int k){
    if(root == NULL || k < 1){
        return;
    }
    if(k==1){
        cout << root->data << " ";
        return;
    }
    kthLevel(root->left,k-1);
    kthLevel(root->right,k-1);
}

Node* lowestCommonAncestor(Node *root, Node* p, Node* q){
    if(root == NULL){
        return NULL;
    }
    if(root->data == p->data && root->data == q->data){
        return root;
    }
    Node* leftLCA = lowestCommonAncestor(root->left,p,q);
    Node* rightLCA = lowestCommonAncestor(root->right,p,q);

    if(leftLCA && rightLCA){
        return root;
    }
    else if (leftLCA != NULL)
    {
        return leftLCA;
    }
    else {
        return rightLCA;
    }
    
}

int search(vector<int> inorder,int left,int right,int val){
        for(int i{left};i<=right;i++){
            if(inorder[i] == val){
                return i;
            }
        }
        return -1;
    }
    Node* helper(vector<int> &preorder, vector<int> &inorder,int &preIdx,int left,int right){
        if(left>right) {
            return NULL;
        }
        Node* root = new Node(preorder[preIdx]);

        int inIdx = search(inorder,left,right,preorder[preIdx]);
        preIdx++;

        root->left = helper(preorder,inorder,preIdx,left,inIdx-1);
        root->right = helper(preorder,inorder,preIdx,inIdx+1,right);

        return root;

    }
    // Node* buildTree(vector<int>& preorder, vector<int>& inorder) {
    //     int preIdx = 0;
    //     return helper(preorder,inorder,preIdx,0,inorder.size()-1);
    // }

    int SumOfTree(Node*root){
        if(root == NULL){
            return 0;
        }

        int leftSum = SumOfTree(root->left);
        int rightSum = SumOfTree(root->right);

        root->data += leftSum + rightSum;
        return root->data;
    }

    void preOrder(Node* root){
        if(root == NULL){
            return;
        }
        cout << root->data << endl;
        preOrder(root->left);
        preOrder(root->right);
    }


int main(){
    vector<int> preorder0 = {1,2,7,-1,-1,3,4,-1,-1,5,-1,-1};
    // vector<int> preorder1 = {1,20,-1,-1,30,40,-1,-1,50,-1,-1};

    Node* r1 = buildTree(preorder0);

    cout << "Before Conversion " << endl;
    preOrder(r1);
    cout << endl;

    cout << SumOfTree(r1) << endl;
    // topViewTree(r1); 
    // kthLevel(r1,3);

    cout << "After Conversion " << endl;
    preOrder(r1);
    cout << endl;

    cout << "Hello World" << endl;


    return 0;
}
