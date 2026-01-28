#include <bits/stdc++.h>
using namespace std;

int main() {
   int n;
   cin>>n;
   int target;
   cin>>target;
   vector<int>arr(n);
   for(int i=0;i<n;i++){
       cin>>arr[i];
   }
   int i=0;
   int j=arr.size()-1;
   while(i<j){
       if(arr[i]+arr[j]==target){
           cout<<i<<" "<<j;
           return 0;
       }
       else if (arr[i]+arr[j]<target)i++;
       else j--;
   }
   cout<<"No indices found";
   return 0;
}