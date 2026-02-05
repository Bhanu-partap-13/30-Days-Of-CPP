#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> nums(n);

    for(int i=0;i<n;i++){
        cin>>nums[i];
    }

    int k; cin>>k;
    double sum = 0, maxSum = DBL_MIN;
    for(int i=0;i<n;i++){
        sum+=nums[i];
        maxSum = sum;
    }
    for(int i=k;i<n;i++){
        sum+=nums[k]-nums[i-k];
        maxSum = max(maxSum, sum);
    }
    cout<<maxSum/k;
    return 0;
}