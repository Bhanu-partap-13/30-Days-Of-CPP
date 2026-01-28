// pushing zeros to end using bubble sort in relative order

#include<bits/stdc++.h>
using namespace std;

int main() {
    int arr[] = {1,0,2,0,3,0,4,0,0,5};
    int n = sizeof(arr)/sizeof(arr[0]);

    for(int i=0;i<n;i++){
        for(int j=0;j<n-1-i;j++){
            if(arr[j] == 0){
                swap(arr[j], arr[j+1]);
            }
        }
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}