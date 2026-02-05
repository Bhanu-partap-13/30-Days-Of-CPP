// Online C++ compiler to run C++ program online
// #include <bits/stdc++.h>
// using namespace std;

// M-I
// int main() {
//     // Write C++ code here
//     vector<int> arr={4,3,2,7,8,3,2,1};
//     unordered_map<int, int>mpp;
//     vector<int> duplicate;
    
//     for(int it : arr){
//         mpp[it]++;
//         if(mpp[it] == 2){ duplicate.push_back(it);
//         }
//     }
//     for(int it : duplicate){
//         cout << it <<" ";
//     }
//     cout<<endl;
//     return 0;
// }

// M - II

// #include<bits/stdc++.h>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;
//     vector<int> a(n);
//     unordered_map<int, int> mpp;
//     vector<int> d;

//     for(int i=0;i<n;i++){
//         cin>> a[i];
//     }

//     for(int i : a) {
//         mpp[i]++;
//         if(mpp[i] == 2) d.push_back(i);
//     }

//     for(int i : d){
//         cout<< i << " ";
//     }
//     cout<<endl;
//     return 0;
// }


//M-III (abs method)
/* Suppose we have an array and suppose we are hacing an integer 5 so we will store the integer 5 in (n-1) in 4th index,
 If the element is repeated so we will check like at that particular index the element is already negative , means that number is a repeating number*/

// #include<bits/stdc++.h>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;
//     vector<int> a(n);
//     unordered_map<int, int> mpp;
//     vector<int> d;

//     for(int i=0;i<n;i++){
//         cin>> a[i];
//     }

//     for(int i=0;i<n;i++){
//         int x = abs(a[i]);
//         int v = x-1;
//         if(a[v] < 0) d.push_back(i);
//         else a[v] =-a[v];
//     }

//     for(int i : d){
//         cout<< i << " ";
//     }
//     cout<<endl;
//     return 0;
// }

//M-IV
#include<iostream>
using namespace std;

int main() {
int arr[]= {2, 3, 1, 1, 3};
int n = arr[].length()+1;
for (int i = 0; i < n-1; i++) {
    int originalVal = arr[i] % n;
    arr[originalVal] += n;
}
for (int i = 0; i < n-1; i++) {
    if ((arr[i] / n) >= 2) {
        cout << i <<" ";
    }
}
    return 0;
}