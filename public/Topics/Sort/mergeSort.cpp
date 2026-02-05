#include<bits/stdc++.h>
using namespace std;

int mergeSort(vector<int>& arr, int low, int mid, int high){
    vector<int> temp;
    int left = low;
    int right = mid + 1;
    while(left<=mid && right<=high){
        if(arr[left]<=arr[right]) {
            temp.push_back(arr[left]);
            left++;
        }
        else{
            temp.push_back(arr[right]);
            right++;
        }
    }
    while(left<=mid){
            temp.push_back(arr[left]);
            left++;
    }
    while(right<=high){
            temp.push_back(arr[right]);
            right++;
    }
    for(int i=low;i<=high;i++){
        arr[i] = temp[i - low];
    }
    return 0;
}

int sort1(vector<int>& a, int low, int high) {
    if(low>=high) return -1;
    int mid = low+(high-low)/2;
    sort1(a, low, mid);
    sort1(a, mid+1, high);
    mergeSort(a, low,mid,high);
    return 0;
}

int main() {
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort1(arr, 0, n-1);
    
    for(int i=0;i<n;i++){
        cout<<arr[i]<< " ";
    }
    
}
