#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* next;
    Node(int data){
        this->data = data;
        next = nullptr;
    }
};
struct stack{
    int size;
    Node* head;
    Stack(int size){
        this->size = size;
        head = NULL;
    }
    void push(int size){
        Node* newNode = new Node(0);
        if(head == NULL) return;
        newNode->next = head;
        head = newNode;
        size++;
    }
    int pop(int size){
        if(head==NULL || size==0) return -1;
        int val = head->data;
        Node* newNode = head;
        head = head->next;
        delete newNode;
        size--;
    return val;
    }
    int isEmpty(int size){
        return size==0;
    }
    // int size(){
    //     return size;
    // }
    int top(){
        if (size==0){
            return -1;
        }
        return head->data;
    }
    int main(){
        stack<int> st;
        st.push(12);
        st.push(2);
        st.push(1);
        st.pop()
    }
};
