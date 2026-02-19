//M-I using 2 queues

#include<bits/stdc++.h>
using namespace std;

class Stacks{
    queue<int> q1, q2;
    public:
    void push(int x){
        q1.push(x);
        q2.push(q1.front());
        q1.pop();
        swap(q1, q2);
    }
    void pop(){
        if(q1.empty())return;
        q1.pop();
    }
    int top(){
        if(q1.empty())return -1;
        return q1.front();
    }
    int size(){
        return q1.size();
    }
};
int main(){
    Stacks st;
    st.push(3);
    cout<<st.top();
}

//M-II using 1 queue
#include<bits/stdc++.h>
using namespace std;

class Stacks{
    queue<int> q1;
    public:
    void push(int x){
        q1.push(x);
        int size = q1.size();
        for(int i=0;i<size-1;i++){
        q1.push(q1.front());
        q1.pop();
        }
    }
    void pop(){
        if(q1.empty())return;
        q1.pop();
    }
    int top(){
        if(q1.empty())return -1;
        return q1.front();
    }
    int size(){
        return q1.size();
    }
};
int main(){
    Stacks st;
    st.push(3);
    cout<<st.top();
}