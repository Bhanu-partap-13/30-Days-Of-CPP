// In this code we have to return the difference between the highest and the lowest of  'k' scores is minimized.
#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
    int minDifference(vector<int>& nums, int k){
        int mini = INT_MAX;
        for(int i=0;i<nums.size()-k;i++){
            int cDiff = nums[i+k-1] - nums[i];
            mini = min(mini, cDiff);
        }
        return mini;
    }
};
        
int main() {
    int n, k;
    cin>>n>>k;
    vector<int> nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    Solution s;
    cout<<s.minDifference(nums, k);
}