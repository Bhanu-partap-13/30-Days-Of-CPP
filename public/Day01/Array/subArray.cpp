// 


//M-2

#include <iostream>
#include <vector>
#include <unordered_set> // Hamara "Bag"

using namespace std;

bool hasZeroSum(vector<int> arr) {
    unordered_set<int> s; // Sums ko yaad rakhne ke liye
    int sum = 0;

    for (int x : arr) {
        sum += x; // 1. Naya sum nikalo

        // 2. Check: Kya sum 0 hai ya pehle aa chuka hai?
        if (sum == 0 || s.find(sum) != s.end()) {
            return true; 
        }

        // 3. Sum ko bag mein daal do
        s.insert(sum);
    }

    return false; // Agar loop khatam ho gaya aur kuch nahi mila
}

int main() {
    vector<int> arr = {4, 2, -3, 1, 6};
    
    if (hasZeroSum(arr)) cout << "True";
    else cout << "False";

    return 0;
}


// 1. Start: Sum = 0. Bag = { } (Khali).
// 2. Number 3: Sum $0+3 = \mathbf{3}$. Bag mein 3 nahi hai. Bag mein daal do. Bag: {3}.
// 3. Number 2: Sum $3+2 = \mathbf{5}$. Bag mein 5 nahi hai. Bag mein daal do. Bag: {3, 5}.
// 4. Number -1: Sum $5-1 = \mathbf{4}$. Bag mein 4 nahi hai. Bag mein daal do. Bag: {3, 5, 4}.
// 5. Number 4: Sum $4+4 = \mathbf{8}$. Bag mein 8 nahi hai. Bag mein daal do. Bag: {3, 5, 4, 8}.
// 6. Number -3: Sum $8-3 = \mathbf{5}$. Ruko! Bag check karo... 5 pehle se hai! Iska matlab humein zero-sum subarray mil gaya.
//                             Result: True.

