#include<bits/stdc++.h>
using namespace std;


class Node{
    public:
    int data;
    Node* prev;
    Node* next;
    Node(int data){
        this.data->data;
        next=prev=null;
    }
};
class LRU{
    public:
    int capacity;
    int size;
    Node* headD;
    Node* tailD;
    unordered_map<int, Node*> mpp;
    LRU(int size, int capacity){
        this.size -> size;
        this.capacity -> capacity;
        headD = tailD = NULL;
    }
    void removeNode(Node* &head, int pos){
        if(head==NULL) return;
        Node* temp = head;
       for(int i=0;i<pos-1 && temp!=NULL;i++){
           temp = temp->next;
       }
       Node* deleteTemp = temp->next;
       Node* next = temp->next->next;
       temp->next = next;
       next->prev = temp;
       delete deleteTemp;
       
    }
    void insertAtEnd(Node* &head, int value){
        Node* tail = new Node(val);
        if(head == NULL){
        head = tail;
        return;
        }    
        Node* temp = head;
        while(temp->next!=NULL){
            temp = temp->next;
        }
        temp->next=tail;
        tail->prev = temp;
    }
};
