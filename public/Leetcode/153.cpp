//we have to find the min. in Rotated Sorted Array
//in this we will think of something with the mid element 

#include<bits/stdc++.h>
using namespace std;

int findMin(vector<int> &nums){
    int low = 0;
    int high = nums.size() - 1;
    while(low<high){
        int mid = low+(high-low)/2;
        if(nums[mid] > nums[high]){
            low=mid+1;
        }
        else{
            high=mid;
        }
    }
    return nums[low];
}

int main(){
    int n;
    cin>>n;
    vector<int> arr(n);

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());
    int ans = findMin(arr);
    cout<<ans;
    return 0;
}