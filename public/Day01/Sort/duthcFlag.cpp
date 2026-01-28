// #include<bits/stdc++.h>
// using namespace std;

// int main() {
//     int n;
//     cin>>n;
    
//     vector<int> arr(n);
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
    
//     stable_sort(arr.begin(), arr.end());
    
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<< " ";
//     }
//     // the time complexity is the n(log(n))
// }

// two pointers algorithm
// #include<bits/stdc++.h>
// using namespace std;

// int main() {
//     int n;
//     cin>>n;
//     vector<int> arr(n);
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int c0=0, c1=0, c2=0;

//     for(int i=0;i<n;i++) {
//         if(arr[i]==0)c0++;
//         else if(arr[i]==1)c1++;
//         else c2++;
//     }
    
//     for(int i=0;i<c0;i++){
//         arr[i]==0;
//     }
//     for(int i=c0;i<c0+c1;i++){
//         arr[i]==1;
//     }
//     for(int i=c0+c1;i<n;i++){
//         arr[i]==2;
//     }
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }

// }

//Dutch flag algorithm

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int l=0;
    int mid=0;
    int h=n-1;

    while(mid<=h){
        if(arr[mid]==0){
            swap(arr[l], arr[mid]);
            l++;
            mid++;
        }
        else if(arr[mid]==1){
            mid++;
        }   
        else{
            swap(arr[mid], arr[h]);
            h--;
        }
    }

    for(int i=0;i<n;i++) {
        cout<< arr[i] <<" ";
    }
    return 0;
}