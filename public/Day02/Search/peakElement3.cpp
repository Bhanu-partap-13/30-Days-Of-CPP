// we have to find the min. element greater than the target gien input value

#include<bits/stdc++.h>
using namespace std;

// arr: 1 3 5 6 12 13 24 target: 6 output: 12
int bs(vector<int>arr,int target){ //search for next element to the given element in sorted array
    int l=0;
    int h=arr.size();
    int ans=-1;
    while(l<=h){
        int mid=l+(h-l)/2;
        if(arr[mid-1]==target){
            return ans=arr[mid];
        }
        else if(arr[mid]>target)h=mid-1;
        else l=mid+1;
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++)cin>>arr[i];
    int target;
    cin>>target;
    int ans=bs(arr,target);
    cout<<ans;
    return 0;
}
