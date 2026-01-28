#include<iostream>
using namespace std;

bool isPrime(int n){
    if(n<=1) return false;

    if(n%2==0 && n!=2) return false;

    for(int i=3;i*i<=n;i+=2){
        if(n%i==0) return false;
    }
    return true;
}

int main(){
    int n;
    cin>>n;
    int a =3;
// we have to print the two prime numbers less than 15 as there difference should be 6
    while((a+6)<=n){
        if(isPrime(a) && isPrime(a+6)){
            cout<<a<<" "<<a+6<<endl;
        }
        a++;
    }
}
