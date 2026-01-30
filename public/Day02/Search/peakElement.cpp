//we have to print the peak element in the array
//peak element is the element which is greater than its neighbours

#include<bits/stdc++.h>
using namespace std;

int funL(vector<int> &a, int n){
    int low = 0;
    int high = n-1;
    int ans=-1;
    while(low<=high){
        int mid = low+ (high-low)/2;
        if((a[mid] > a[mid+1]) && (a[mid] > a[mid-1])){
            ans=a[mid];
            break;
        }
        else if(a[mid] < a[mid+1]){
            low = mid + 1;
        }
        else if(a[mid] < a[mid-1]){
            high = mid - 1;
        }
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
    int count = funL(arr, n);
    
    cout<<count<<" ";
}