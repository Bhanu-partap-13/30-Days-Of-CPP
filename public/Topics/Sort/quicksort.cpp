#include<bits/stdc++.h>
    using namespace std;
    
    int index(vector<int>& arr, int low, int high){
        int pivot = arr[high];
        int j = low;
        int i = low-1;
        while(j < high){
            if(arr[j] <= pivot){
                i++;
                swap(arr[j], arr[i]);
            }
        j++;
        }
        i++;
        swap(arr[i], arr[high]);
        return i;
    }
    void divide(vector<int>& arr, int low, int high){
        if(low > high) return;
        int id = index(arr, low, high);
        divide(arr,low,id-1);
        divide(arr,id+1, high);
    }
    
    int main(){
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin >> arr[i];
        }
       divide(arr, 0, n-1);
        for(int i=0;i<n;i++){
            cout << arr[i]<<" ";
        }
       
    }