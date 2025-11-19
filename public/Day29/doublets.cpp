// Tn this code i will  print the doublets of a given sum: I will reutrn the index in which value is is equal to the sum of two numbers in the array

#include <iostream>
#include<vector>
using namespace std;

int main() {
    // Write C++ code here
    int target;
    cin>>target;
    
    int n;
    cin>>n;
    vector<int> v(n);
    
    for(int i=0;i<n;i++){
        cin >> v[i];
    }
    
    for(int i=0;i<v.size() ; i++) {
        for(int j = i+1; j< v.size() ; j++){
            if(v[i] + v[j] == target){
                    cout << "("<<i<<","<<j<<")"<<endl;
                    // cout << "("<<v[i]<<","<<v[j]<<")"<<endl;  [Return the values instead of index]
            }
        }        
    }
    // If you want to return the du[plicate indexes like the (7,0) and (0,7)]
    //  for(int i=0;i<v.size() ; i++){
    //     for(int j = 0; j< v.size() ; j++){
    //         if(v[i] + v[j] == target){
    //                 cout << "("<<i<<","<<j<<")"<<endl;
    //                 // cout << "("<<v[i]<<","<<v[j]<<")"<<endl;  [Return the values instead of index]
    //         }
    //     }        
    // }
}