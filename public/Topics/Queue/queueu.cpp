#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* next;
    Node(int val){
        data = val;
        next =  nullptr;
    }
};
struct Queue{
    Node* head;
    Node* tail;
    int size;
    Queue(){
        this->size = 0;
        head=tail=nullptr;
    }
    void push(int val){
        Node* newNode = new Node(val);
        if(head == nullptr){
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        tail = newNode;
        size++;
    }
    void pop(){
        if(head==NULL || size<0) return;
        if(head->next==NULL){
            delete head;
            head=NULL;
            return;
        }
        Node* temp = head;
        head = head->next;
        delete temp;
        size--;
    }
    int sz(){
        return size;
    }
    int front(){
        if(head) return head->data;
    return -1;
    }
    void printQueue(){
        Node* temp = head;
        while(temp != nullptr){
            cout<<temp->data<<" ";
            temp = temp->next;
        }
    }
};
int main(){
    Queue q1;
    q1.push(2);
    q1.printQueue();
}