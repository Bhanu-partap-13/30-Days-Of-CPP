#include<vector>
#include<iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++) {
        cin>>v[i];
    }

    int count = 0;
    int x;
    cin>>x;
    for(int i=1; i<n ;i++) {
        if(v[i]>x) {
            count++;
        }
    }
    cout<<count<<endl;
}