#include<iostream>
using namespace std;

void hanoi(int n, char a, char b, char c){
    if(n==0) return;
    hanoi(n-1, a, c, b);
    cout<<a<<"->"<<c<<endl;
    hanoi(n-1, b, a, c);
}

int main(){
    int n;
    cin>>n;
    hanoi(n, 'A', 'B', 'C');
}

// how to run on compiler - 
// 1. Save the file with a .cpp extension (e.g., towerofHanoi.cpp)
// 2. Open a terminal or command prompt
// 3. Navigate to the directory where the file is saved
// 4. Compile using g++: g++ towerofHanoi.cpp -o towerofHanoi
// 5. Run the executable: ./towerofHanoi