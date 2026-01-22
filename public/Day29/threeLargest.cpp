
#include <iostream>
#include<vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int max=INT_MIN;
    int smax=INT_MIN;
    int tmax=INT_MIN;
    for(int i=0;i<n;i++){
        if(max < v[i]) {
            max=smax;
            smax=tmax;
            tmax=v[i];
            continue;
        }
        if(smax < v[i] && v[i] != max) {
            smax=tmax;
            tmax=v[i];
            continue;
        }
        if(tmax < v[i] && v[i] != smax) {
            tmax=v[i];
        }
    }
    cout<<max<<" "<<smax<<" "<<tmax<<endl;
    return 0;
}