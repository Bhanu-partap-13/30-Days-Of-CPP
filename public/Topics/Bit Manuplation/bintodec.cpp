#include<iostream>
using namespace std;
int main(){
    int arr[5]={1,0,1,1,0};
    int sum = 0;
    for(int i=0;i<5;i++){
        if(arr[i]==1){
            sum = sum | (1<<(5-i-1));
        }
    }
    cout<<sum;
}
