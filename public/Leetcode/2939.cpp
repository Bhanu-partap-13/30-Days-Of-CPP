// complex code
// #include<bits/stdc++.h>
    // using namespace std;


    // //  Definition for a binary tree node.
    //   struct TreeNode {
    //       int val;
    //       TreeNode *left;
    //       TreeNode *right;
    //       TreeNode() : val(0), left(nullptr), right(nullptr) {}
    //       TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    //       TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
    //   };
    
    
    // class Solution {
    // public:
    //     long long binToDeci(vector<long long>& arr) {
    //         long long sum = 0;
    //         long long p = 1;
    //         for (int i = 0; i < arr.size(); i++) {
    //             if (arr[i] == 1)
    //                 sum += p;
    //             p <<= 1;
    //         }
    //         return sum;
    //     }
    //     vector<long long> DeciToBin(long long num, int n) {
    //         vector<long long> ans(n, 0);
    //         for (int i = 0; i < n; i++) {
    //             ans[i] = (num >> i) & 1;
    //         }
    //         return ans;
    //     }

    //     long long helper(vector<long long>& arr, int pos) {
    //         long long sum = 0;
    //         long long p = 1;
    //         for (int i = pos; i < arr.size(); i++) {
    //             if (arr[i] == 1)
    //                 sum += p;
    //             p <<= 1;
    //         }
    //         return sum;
    //     }
    //     int maximumXorProduct(long long a, long long b, int n) {
    //         long long mod = 1e9 + 7;
    //         vector<long long> arr(n);
    //         vector<long long> brr(n);
    //         arr = DeciToBin(a, n);
    //         brr = DeciToBin(b, n);

    //         long long highA = (a >> n) << n;
    //         long long highB = (b >> n) << n;

    //         long long ans;
    //         for (int i = n - 1; i >= 0; i--) {
    //             if (brr[i] == 0 && arr[i] == 0) {
    //                 arr[i] = 1;
    //                 brr[i] = 1;
    //             } else if (brr[i] == 0 && arr[i] == 1) {
    //                 long long valA = helper(arr, i) + highA;
    //                 long long valB = helper(brr, i) + highB;
    //                 if (valA > valB) {
    //                     arr[i] = 0;
    //                     brr[i] = 1;
    //                 }
    //             } else if (brr[i] == 1 && arr[i] == 0) {
    //                 long long valA = helper(arr, i) + highA;
    //                 long long valB = helper(brr, i) + highB;
    //                 if (valA < valB) {
    //                     arr[i] = 1;
    //                     brr[i] = 0;
    //                 }
    //             }
    //         }
    //         long long p = binToDeci(arr) + highA;
    //         long long q = binToDeci(brr) + highB;
    //         ans = ((p % mod) * (q % mod)) % mod;
    //         return (int)ans;
    //     }
    // };

    // int main(){
    //     return 0;
    // }

