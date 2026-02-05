// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    vector<int> arr(n);
    int target; cin>>target;
    for(int i=0;i<n;i++) cin>>arr[i];
    int l=0;
    int r=0;
    int sum = arr[0];
    while(r<n){
        if(sum<target){
            r++;
            sum+=arr[r];
        }
        else{
            n = min(n, r-l+1);
            sum-=arr[l];
            l--;
        }
    cout<<n;
    }
    return 0;
}