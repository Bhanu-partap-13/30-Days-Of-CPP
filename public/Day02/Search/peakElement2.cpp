//in this question we have to find the target element in the mountain array it can be before the peak element and also after the peak element

// we will do binary search where we are having a key value to search in a sorted array

#include<bits/stdc++.h>
using namespace std;

int sorted(vector<int> &arr, int low, int high, int target){
    while(low<=high){
        int mid = low + (high-low)/2;
        if(arr[mid]==target){
            return mid;
        }
        else if(arr[mid]<target){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return -1;
}

int reverseSorted(vector<int> &arr, int low, int high, int target){
    
    while(low <= high){
        int mid = low + (high-low)/2;
        if(arr[mid]==target){
             return mid;
        }
        else if(arr[mid]>target){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return -1;
}

int Peak(vector<int> &a) {
    int low = 0, high = a.size() - 1;
    while (low < high) {
        int mid = low + (high - low) / 2;
        if (a[mid] < a[mid + 1]) low = mid + 1;
        else high = mid - 1;
    }
    return low;
}

int main() {
    int n;
    cin>>n;
    vector<int> arr(n);
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int key;
    cin>>key;
    
    int pea = Peak(arr);
    int result = sorted(arr,0,pea,key);
    if(result==-1) {
        result = reverseSorted(arr,pea+1,n-1,key);
    }
    
    cout<<"Index: "<<result<<endl;
    return 0;
}

