//you have to find the most frequent element in the array
#include<iostream>
#include<unordered_map>
using namespace std;

int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    unordered_map<int,int> freq;
    for(int i=0;i<n;i++){
        freq[arr[i]]++;
    }

    int maxFreq = 0;
    int ans = -1;
    for(auto it: freq){
        if(it.second > maxFreq){
            maxFreq = it.second;
            ans = it.first;
        }
    }

    cout<<ans<<" "<<maxFreq<<endl;

    return 0;
}   