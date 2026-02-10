#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int data){
        this->data = data;
        left = nullptr;
        right = nullptr;
    }
};

int height(Node* root){
    if(!root) return 0;
    int lHeight = height(root->left);
    int rHeight = height(root->right);

    return max(lHeight, rHeight) + 1;
}

bool balancedTree(Node* root){
   if(!root) return true;

   int lHeight = height(root-> left);
   int rHeight = height(root->right);

   if(abs(lHeight - rHeight) >  1) return false;

   return balancedTree(root->left) && balancedTree(root->right);
}

int main() {
    int n;
    cin>>n;
    Node* root = nullptr;
    for(int i=0;i<n;i++){
        int data;
        cin>>data;
        Node* newNode = new Node(data);
        if(root == nullptr){
            root = newNode;
        }
        else{
            queue<Node*> q;
            q.push(root);
            while(!q.empty()){
                Node* temp = q.front();
                q.pop();
                if(temp->left == nullptr){
                    temp->left = newNode;
                    break;
                }
                else{
                    q.push(temp->left);
                }
                if(temp->right == nullptr){
                    temp->right = newNode;
                    break;
                }
                else{
                    q.push(temp->right);
                }
            }
        }
    }
    if(balancedTree(root)){
        cout<<"The tree is balanced";
    }
    else{
        cout<<"The tree is not balanced";
    }
}   