    // In this question we have to return the sub array in which the array contains only 0,1 and
    // we have to return the subarray in which the no. of 0's and 1's are equal.

    //in this we cannot use the concept of the sort bcz of subarray, we have to do it without using map.

#include<bits/stdc++.h>
using namespace std;

int max_len(int arr[], int n){
    int count_0 = 0;
    int count_1 = 0;
    int ans = 0;
    unordered_map<int, int> map;
    map[0] = -1;

    for(int i = 0; i < n; i++){
        if(arr[i] == 0){
            count_0++;
        }
        else{
            count_1++;
        }

        int diff = count_1 - count_0;

        if(map.find(diff) != map.end()){
            if(i - map[diff] > ans){
                ans = i - map[diff];
            }
        }
        else{
            map[diff] = i;
        }
    }
    return ans;
}

int main(){
    int arr[] = {0, 0, 0, 1, 1, 0, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    std::cout << max_len(arr, n) << "\n";
}
