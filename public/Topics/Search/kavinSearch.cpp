/// In the question there is a person kavin with the n number of buckets and m no. of fruits into it.

#include<bits/stdc++.h>
using namespace std;

bool Fruits(vector<int> &buckets, int mid) {
    int sum = 0;
    for(int i=0;i<buckets.size();i++) {
        sum += buckets[i]/mid;
    }
    if(sum>=mid) return true;
    return false;
}

int binarySearch(vector<int> &buckets, int m) {
    int low = 0;
    int high = *max_element(buckets.begin(), buckets.end());
    int ans = -1;

    while(low<=high) {
        int mid = low+ (high-low)/2;
        if(Fruits(buckets, mid)){
            ans = mid;
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return ans;
    }

int main() {
    int n;
    cin>>n;
    vector<int> buckets(n);
    for(int i=0;i<n;i++) {
        cin>>buckets[i];
    }
    int m;
    cin>>m;
    cout<<binarySearch(buckets, m);
    return 0;
}