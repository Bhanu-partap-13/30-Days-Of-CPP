// Online C++ compiler to run C++ program online
#include <iostream>
#include<vector>
using namespace std;

int main() {
    int n = 5;
    int a=1;
    int arr[n][n];
    for(int i=0;i<n;i++){
        for(int j=1; j<=i; j++){
            cout<<(char)(a+64);
            a++;
    }
    cout<<endl;
    }

    return 0;
}