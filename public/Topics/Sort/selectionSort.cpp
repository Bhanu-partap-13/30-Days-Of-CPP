//here we will showcase how the selection sort algorithm works in c++
#include<bits/stdc++.h>
using namespace std;

int main() {
    int arr[] = {5,3,4,1,2};
    int n = sizeof(arr)/sizeof(arr[0]);

    for(int i=0;i<n;i++){
        int min = INT_MAX;
        int mindx=-1; //index of min. element

        for(int j=i;j<n;j++){
            if(arr[j]<min){
                min=arr[j];
                mindx=j;
            }
        }
        swap(arr[i], arr[mindx]); //placing min. element in the correct position
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

//time complexity = O(n^2)
//space complexity = O(1)