#include<iostream>
#include<vector>
#include <algorithm>
#include <queue>
#include<map>
#include <climits>

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

Node* insert(Node* root,int val){
    if(root == NULL){
        return new Node(val);
    }
    if(val < root->data){
        root->left = insert(root->left,val);
    } else {
        root->right = insert(root->right,val);
    }

    return root;
}


Node* buildBST(vector<int> arr){
    Node* root = NULL;

    for(int val: arr){
        root = insert(root,val);
    }
    return root;
}

void inOrder(Node* root){
    if(root == NULL){
        return;
    }

    inOrder(root->left);
    cout << root->data << " ";
    inOrder(root->right);
}

bool searchInBST(Node* root, int key){
    if(root->data == key){
        return true;
    }
    if(root == NULL){
        return false;
    }

    if(key < root->data){
        return searchInBST(root->left,key);
    } else {
        return searchInBST(root->right,key);
    }
}

Node* getInorderSuccessor(Node* root){
    while(root->left != NULL && root == NULL)
    {
        root = root->left;
    }
    return root;
    
}

Node* delNode(Node* root,int key){
    if(root == NULL){
        return NULL;
    }
    if(key < root->data){
        root->left = delNode(root->left,key);
    }else if(key > root->data){
        root->right = delNode(root->right,key);
    } else {
        if(root->left == NULL){
            Node* temp = root->right;
            delete root;
            return temp;
        } else if(root->right == NULL){
            Node* temp = root->left;
            delete root;
            return temp;
        } else {
            Node* IS = getInorderSuccessor(root->right);
            root->data = IS->data;
            root->right = delNode(root->right,IS->data);
        }
    }
    return root;
}


Node* sortedArrayToBST(vector<int>& nums,int st, int end) {
    if(st > end){
        return NULL;
    }

    int mid = st + (end - st)/2;

    Node* root = new Node(nums[mid]);
    root->left = sortedArrayToBST(nums,st,mid-1);
    root->right = sortedArrayToBST(nums,mid+1,end);
    return root;

}

bool validBST(Node* root,Node* min,Node* max){
    if(root == NULL){
        return false;
    }
    if(min != NULL && root->data <= min->data){
        return false;
    }
    if(max != NULL && root->data >= max->data){
        return false;
    }

    return validBST(root->left,min,root) && validBST(root->right,root,max);
}

bool isValidBST(Node* root){
    return validBST(root,NULL,NULL);
}

    // Node* prev = NULL;
    // int minDiffInBST(Node* root) {
    //     if(root==NULL){
    //         return INT_MAX;
    //     }
    //     int ans = INT_MAX;
    //     if(root->left){
    //         int leftMin = minDiffInBST(root->left);
    //         ans = min(ans,leftMin);
    //     }

    //     if(prev != NULL){
    //         ans = min(ans,(root->data) - (prev->data));
    //     }
    //     prev = root;

    //     if(root->right){
    //         int rightMin = minDiffInBST(root->right);
    //         ans = min (ans,rightMin);
    //     }
    //     return ans;
    // }


int prevOrder = 0;
int kthSmallest(Node* root, int k) {
    if(root == NULL){
        return -1;
    }
    if(root->left){
        int leftAns = kthSmallest(root->left,k);
        if(leftAns != -1){
            return leftAns;
        }
    }
    if(prevOrder + 1 == k){
        return root->data;
    }
    prevOrder = prevOrder+1;

    if(root->right){
        int rightAns = kthSmallest(root->right,k);
        if(rightAns != -1){
            return rightAns;
        }
    }
    return -1;
}


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

void allPaths(Node* root,string path,vector<string> &ans){
        if(root->left == NULL && root->right == NULL){
            ans.push_back(path);
            return;
        }
        if(root->left){
            allPaths(root->left,path + "->"+to_string(root->left->data),ans);
        }
        if(root->right){
            allPaths(root->right,path + "->"+to_string(root->right->data),ans);
        }
    }
vector<string> binaryTreePaths(Node* root) {
        vector<string> ans;
        string path = to_string(root->data);

        allPaths(root,path,ans);
        return ans;
    }

int maxWidth(Node* root){
    queue<pair<Node*,int>> q;
    q.push({root,0});
    int maxWid = 0;
    while(q.size() > 0){
        int currLevelSize = q.size();
        int stdIdx = q.front().second;
        int endIdx = q.back().second;

        maxWid = max(maxWid,endIdx - stdIdx + 1);
        for(int i{0};i<currLevelSize;i++){
            auto curr = q.front();
            q.pop();

            if(curr.first->left){
                q.push({curr.first->left, curr.second*2+1});
            }
            if(curr.first->right){
                q.push({curr.first->right, curr.second*2+1});
            }
        }
    }
    return maxWid;
    
}
vector<int> inorderTraversal(Node* root) {
        vector<int> ans;
        Node* curr = root;

        while(curr != NULL){
            if(curr->left == NULL){
                ans.push_back(curr->data);
                curr = curr->right;
            }
            else {
                //find IP
                Node* IP = curr->left;
                while(IP -> right != NULL && IP -> right != curr){
                    IP = IP->right;
                }
                if(IP -> right == NULL){
                    IP->right = curr;
                    curr = curr->left;
                }
                else {
                    //set the IP->right to NULL
                    IP -> right = NULL;
                    ans.push_back(curr->data);
                    curr = curr->right;
                }
            }
        }
    return ans;
}

Node* NR = NULL;
void flatten(Node* root){
    if(root == NULL){
        return;
    }
    flatten(root->right);
    flatten(root->left);

    root->left = NULL;
    root->right = NR;
    NR = root;
}

void printNos(int n) {
    // Code here
    if(n <= 0){
        return;
    }
    // cout << n << " ";
    printNos(n-1);
    cout << n << " ";
}

int main(){
    int n = 10;
    printNos(n);


    // vector<int> arr = {3,2,1,5,6,4};
    // // int key = 4;

    // // cout << boolalpha;
    // Node* root = buildBST(arr);

    // // cout << searchInBST(root,key);
    // // cout << endl;

    // inOrder(root);
    // cout << endl;

    // delNode(root,3);



    // inOrder(root);
    // cout << endl;



    return 0;
}