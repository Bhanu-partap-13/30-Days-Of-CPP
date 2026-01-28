// in this question we have t print all the prime numbers less than or equal to n, excluding the non-prime numbers and multiples of prime numbers like 2,3 in case of 15.


#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n){
    if(n<=1) return false;

    if(n%2==0 && n!=2) return false;
    if(n%3==0 && n!=3) return false;

    for(int i=3;i*i<=n;i+=2){
        if(n%i==0) return false;
    }
    return true;
}

int main(){
    int n;
    cin>>n;
    vector<bool>arr(n+1,true);
    arr[0]=false;
    arr[1]=false;
    for(int i=2;i*i<=n;i++){
        if(isPrime(i)) {
        for(int j=i*i;j<=n;j+=i){
            arr[j]=false;
        }
    }
}
    for(int i=0;i<n+1;i++){
        cout<<arr[i]<<" ";
    }
}