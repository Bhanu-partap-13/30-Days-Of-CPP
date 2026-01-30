// we will do binary search where we are having a key value to search in a sorted array

#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    vector<int> arr(n);
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int key;
    cin>>key;
    
    int low=0;
    int high = n-1;
    bool found = false;
    
    while(low<=high){
        int mid = low + (high-low)/2;
        if(arr[mid] == key) {
            found = true;
            cout<<"Element Found Successfully at "<<mid<<endl;
            break;
        }
        else if(arr[mid] < key){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    if (!found){
        cout<<"Element not found";
    }
    
    return 0;
}