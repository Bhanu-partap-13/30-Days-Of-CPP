//In this question we have to find the target element's started index and last index in sorted array
//input
//6 size
//1 2 2 2 2 3 array 
//2 target
//output: 1 4 starting ending index

#include<bits/stdc++.h>
using namespace std;

int funL(vector<int> &a, int n, int target){
    int low = 0;
    int high = n-1;
    int ans=-1;
    while(low<=high){
        int mid = low+ (high-low)/2;
        if(a[mid] == target){
            ans=mid;
            low = mid + 1;
        }
        else if(a[mid] < target){
            low = mid + 1;
        }
        else high = mid - 1;
    }
    return ans;
}

int funH(vector<int> &a, int n, int target){
    int low = 0;
    int high = n-1;
    int ans=-1;
    while(low<=high){
        int mid = low+ (high-low)/2;
        if(a[mid] == target){
            ans=mid;
            high = mid - 1;
        }
        else if(a[mid] < target){
            low = mid + 1;
        }
        else high = mid - 1;
    }
    return ans;
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
    int lower = funL(arr, n, key);
    int higher = funH(arr, n, key);
    
    cout<<higher<<" "<<lower;
}