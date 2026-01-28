//we have to print the diamond structure using star pattern
#include<iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int arr[n][n];
    int nst=1;
    int nsp = n-1;

    for(int i=0;i<2*n-1;i++){
        for(int j=0; j<nsp; j++){
            cout<<" ";
        }
        for(int j=0; j<nst; j++){
            cout<<"*";
        }
        cout<<endl;
        if(i<n-1){
            nst+=2;
            nsp--;
        }
        else{
            nst-=2;
            nsp++;
    }
}
    return 0;
}