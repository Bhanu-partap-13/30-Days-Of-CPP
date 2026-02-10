#include<iostream>
#include<climits>
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