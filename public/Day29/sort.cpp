// Online C++ compiler to run C++ program online
#include <iostream>
#include<vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int i;
    for(i=0;i<n-1;i++){
        if(v[i] > v[i+1]) break;
    }
    if(i == n - 1) cout << "The Array is sorted.";
    else cout<<"The Array is unsorted.";
    return 0;
}

// to check if the vector is sorted or not