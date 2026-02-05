// the code is of the pascal triangle

#include<iostream>
using namespace std;

int fact(int x) {
    int f=1;
    for(int i=2;i<=x;i++){
        f*=i;
    }
    return f;
}
int main() {
    int n = 5; // row number
    int r = 2; // column number


    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            int val = fact(i)/(fact(j)*fact(i-j));
            cout<<val<<" ";
        }
        cout<<endl;
    }

    return 0;
}
//how to run the code
// g++ pascal.cpp -o pascal
// ./pascal