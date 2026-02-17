//In this code we will copy the linked list, we will create a new linked list and copy the values of the old linked list to the new linked list.

#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(int val){
        data= val;
        next = NULL;
    }
};

Node* copyList(Node* head){
    if(head == NULL) return NULL;
    Node* newHead = new Node(head->data);
    Node* temp = head->next;
    Node* newTemp = newHead;
    while(temp != NULL){
        newTemp->next = new Node(temp->data);
        newTemp = newTemp->next;
        temp = temp->next;
    }
    return newHead;
}

int main() {
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    
    Node* newHead = copyList(head);
    
    Node* temp = newHead;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}