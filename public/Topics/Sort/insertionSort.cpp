//In this we will discuss hoe does the insertion sort works and its implementation in CPP

#include<bits/stdc++.h>
using namespace std;

int main() {

    int arr[]={5,3,2,1,4};
    int n = sizeof(arr)/sizeof(arr[0]);

    for(int i=1;i<n;i++){
        int j=i;
        while(j>=1){
            if(arr[j]>=arr[j-1]){
                break;
            }
            if(arr[j]<arr[j-1]){
                swap(arr[j], arr[j-1]);
                j--;
            }
        }
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}