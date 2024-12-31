//----------------------------------------------------Random Access--------------------------------------------------------------

//What is Random Access?
/* 
Data can be accessed at any position in the file without reading the preceding data.
Similar to jumping directly to a specific chapter in a book.
*/

/*
How It Works ??🤔🤔
Uses file pointers (seekg for input and seekp for output) to move to a specific position within the file.
*/

/*
Advantages                                                                                       Disadvantages
Efficient for accessing or modifying specific data points.                 Slightly more complex to implement compared to sequential access.
Reduces read/write time for large files.
*/

/*
1. seekg (seek get) - It moves the input pointer. 
2. seekp (Seek Put) - It moves the output pointer.
*/

/*
Kaise Kaam Karta Hai?

1.File Open Karna Random Access Ke Liye:
    fstream file("data.txt", ios::in | ios::out);
//ios::in: File ko read karne ke liye.
//ios::out: File ko write karne ke liye.

2.Pointer Ko Move Karna:
    file.seekg(10, ios::beg);
//seekg: Input pointer ko move karna.
//ios::beg: Starting se 10th byte par le jao.
//Similar tarike se seekp output pointer ke liye hota hai.

3.Position Check Karna:
    int pos = file.tellg();
    cout << "Current position: " << pos << endl;
//tellg() aur tellp() se pata chalta hai ki pointer ka current position kya hai.

4.Specific Data Read Karna:
    char ch;
    file.get(ch);
//File ke specific location ka data read karke variable me save karte hain.

5. Data Overwrite Karna:
    file.seekp(5, ios::beg);    
    file << "NewData";
*/

/*
Example Code
*/
//Writing in a file sequentially -
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    fstream outFile("data.txt", ios::in | ios::out); // Open for reading and writing
    if (!outFile) {
        cout << "File could not be opened!" << endl;
        return 1;
    }

    outFile.seekp(5); // Move output pointer to the 5th byte
    outFile << "New"; // Overwrite data at the 5th byte

    outFile.close();
    return 0;
}
