#include<iostream>
using namespace std;

int main(){
    string bin="";
    int n;
    cin>>n;
    while(n>0){
        int bit = n%2;
        bin.push_back('0' + bit);
        n/=2;
    }
    for(int i=bin.length()-1;i>=0;i--){
        cout<<bin[i];
    }
    return 0;
}