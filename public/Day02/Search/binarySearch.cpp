// we will do binary search where we are having a key value to search in a sorted array

#include<iostream>
using namespace std;

int main() {
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int n = sizeof(arr)/sizeof(arr[0]);
    int key;
    cin>>key;

    int l=0;
    int h=n-1;
    bool found = false;

    while(l<=h){
        int mid = l+(h-l)/2;

        if(arr[mid]==key){
            found = true;
            cout<<"Element found at index "<<mid<<endl;
            break;
        }
        else if(arr[mid]<key){
            l=mid+1;
        }
        else{
            h=mid-1;
        }
    }

    if(!found){
        cout<<"Element not found"<<endl;
    }

    return 0;
}