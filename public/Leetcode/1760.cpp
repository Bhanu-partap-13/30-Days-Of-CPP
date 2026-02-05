#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minimumSize(vector<int>& nums, int maxOperations) {
     int n = nums.size();
     int low = 1;
     int high = *max_element(nums.begin(), nums.end());
     int ans=-1;
     while(low<=high){
        int mid = low+ (high-low)/2;
        if(maxOp(nums, maxOperations, mid)) {
        ans = mid;
        high = mid - 1;
    }
        else {
            low = mid + 1;
        }
    }
    return ans;   
    }

bool maxOp(vector<int>& nums, int maxOperations, int mid){
    int result = 0;
    for(int i=0; i<nums.size(); i++){
        result += (nums[i] - 1)/mid;
        if(result > maxOperations) {
            return false;
        }
    }
    return true;
}

};

int main() {
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    int maxOperations;
    cin>>maxOperations;
    Solution obj;
    cout<<obj.minimumSize(nums, maxOperations);
    return 0;
}