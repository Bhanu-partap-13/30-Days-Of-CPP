class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int>arr;
        int n=nums.size();

        class Node{
            public:
            int data;
            Node* prev;
            Node* next;

            Node(int data){
                this->data=data;
                prev=next=nullptr;

            }
        };

        class Dequeue{
            Node* front;
            Node* rear;
            int size;

            public:
            Dequeue(){
                front=rear=nullptr;
                size=0;
            }
            bool isEmpty(){
                return front==nullptr;
            }
            
            void insertFront(int data){
                Node* obj= new Node(data);
                if(isEmpty()){
                    front=rear=obj;
                }
                else{
                obj->next=front;
                front->prev=obj;
                front=obj;
                }
                size++;
            }

            void insertRear(int data){
                Node* obj= new Node(data);
                if(isEmpty()){
                    front=rear=obj;
                }
                else{
                obj->prev=rear;
                rear->next=obj;
                rear=obj;
                }
                size++;
            }

            int getBack(){
                if(isEmpty()){
                    return -1;
                }
                else{
                    return rear->data;
                }
            }

            int getFront(){
                if(isEmpty()){
                    return -1;
                }
                else{
                    return front->data;
                }
            }

            void deleteFront(){
                if(isEmpty()){
                    return;
                }
                Node* temp=front;
                front=front->next;

                if(front){
                    front->prev=nullptr;
                }
                else{
                    rear=nullptr;
                }
                delete temp;
                size--;
            }

            void deleteRear(){
                if(isEmpty()){
                    return;
                }
                Node* temp=rear;
                rear=rear->prev;

                if(rear){
                    rear->next=nullptr;
                }
                else{
                    front=nullptr;
                }
                delete temp;
                size--;
            }
        };

        
        Dequeue q;
        for(int i=0;i<n;i++){
            while(!q.isEmpty() && nums[q.getBack()]<=nums[i])
            {q.deleteRear();}
            while(!q.isEmpty() && i-k+1>q.getFront()){
                q.deleteFront();
            }
            q.insertRear(i);
            if(i-k+1>=0){
                arr.push_back(nums[q.getFront()]);
            }
        }
        return arr;
    }
};