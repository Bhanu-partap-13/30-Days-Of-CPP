//in this code we have to maximize the minimum distance between any two cows placed in the stalls

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++)cin>>arr[i];
    
    sort(arr.begin(),arr.end());

    for(int i=1;i<(1 << n); i++){
        vector<int> temp;
        for(int j=0;j<n;j++){
            if(i & (1 << j)){
                temp.push_back(arr[j]);
            }
        }
        //process temp
    for(int i=0;i<temp.size();i++) cout<<temp[i]<<" ";
    cout<<endl;
    }
    return 0;
}

