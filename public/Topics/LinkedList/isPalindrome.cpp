#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(int data){
        this->data = data;
        next = nullptr;
    }
};
bool isPalindrome(Node* head){
    Node* slow = head;
    Node* fast = head;
    while(fast!=NULL && fast->next!=NULL){
        slow = slow->next;
        fast = fast->next->next;
    }
    Node* prev = NULL;
    Node* future = NULL;
    while(slow!=NULL){
        future = slow->next;
        slow->next = prev;
        prev = slow;
        slow = future;
    }
    Node* left = head;
    Node* right = prev;
    while(right!=NULL){
    if(left->data != right->data) return false;
    left=left->next;
    right=right->next;  
    }   
    return true;
    }
    
int main() {
    int n;
    cin>>n;
    Node* head = nullptr;
    Node* tail = nullptr;
    for(int i=0;i<n;i++){
        int data;
        cin>>data;
        Node* newNode = new Node(data);
        if(head == nullptr){
            head = newNode;
            tail = newNode;
        }
        else{
            tail->next = newNode;
            tail = newNode;
        }
    }
    if(isPalindrome(head)){
        cout<<"The linked list is a palindrome";
    }
    else{
        cout<<"The linked list is not a palindrome";
    }
}