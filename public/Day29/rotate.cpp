//how to rotate the array
#include<iostream>
#include<vector>
using namespace std;

void reversePart(int i,int j, vector<int> &a){
    while(i<=j){
        int temp = a[i];
        a[i] = a[j];
        a[j] = temp;
        i++;
        j--;
    }
}

int main() {
    int n;
    cin>>n;
    vector<int> v(n);

    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int k;
    cin>>k;
    if(k>=n){
        k = k % n;
    }

    reversePart(0,n-k-1,v);
    reversePart(n-k,n-1,v);
    reversePart(0,n-1,v);

    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

