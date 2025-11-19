//reverse the vecvtor given to you

#include <iostream>
#include<vector>
using namespace std;

void display(vector<int> &a){
    for(int i=0;i<a.size();i++){
        cout<< a[i]<<" ";
    }
    cout<<endl;
}
void display1(vector<int> &a){
    for(int i=a.size()-1;i>=0;i--){
        cout<< a[i]<<" ";
    }
    cout<<endl;
}

int main() {
    // Write C++ code here
    int n;
    cin>>n;
    
    vector<int> v1(n);
    
    for(int i=0;i<n;i++){
        cin>>v1[i];
    }
    
    display(v1);
    /*
    //reverse using one array
    int i = 0;
    int j = n - 1;
    while(i <= j){
    int temp = v[i];
    v[i] = v[j];
    v[j] = temp;
    i++;
    j--;
    }

    //reverse(v.begin(), v.end());  //using STL function
    */
    vector<int> v2(v1.size());
    
    for(int i=0;i<n;i++){
        int j = n - 1 - i;
        v2[i]= v1[j];
    }
    //display1(v2)
    display(v2);
}