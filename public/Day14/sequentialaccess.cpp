//---------------------------------------------------------Sequential Access---------------------------------------------------------------

//What is Sequential Access? 
/*
Data is read or written in a linear order, from the beginning of the file to the end.
This method is similar to reading a book page by page; you cannot skip to a specific location without reading all the data before it.
**Used As reading to a file.**
*/

/*
Advantages                                                                                       Disadvantages
Simple to implement.                                                         Inefficient for accessing specific data points within a large file.
Useful when the structure of the file is straightforward.
*/

/*
How to perform Sequential Access> (In Detail)
1. Include Necessary Libraries
#include <iostream>   // input/output operations ke liye
#include <fstream>    // file handling operations ke liye
#include <string>     // string objects ke liye

2. Open the File for Reading
ifstream inFile("data.txt"); // file ko reading ke liye open krta hai

3. Check if File is Opened Successfully
if (!inFile) {
    cout << "File could not be opened!" << endl; //file ko check krta hai ki ache se khul gyi ya nhi
    return 1; //agar file nhi khuli toh error message ayega and program will return 1 while exiting
}

4. Read the File Sequentially
string line;
// line by line file ko read krna
while (getline(inFile, line)) {
    cout << line << endl;
}

5. Close the File
inFile.close();
 */

/*
Example Code
*/
//Writing File Sequentially

#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream outFile("data.txt", ios::app); // Open file for writing
    if (!outFile) {
        cout << "File could not be opened!" << endl;
        return 1;
    }

    outFile << "New data is added sequentially.\n";
    outFile.close();
    cout << "New data is added sequentially.\n";
    return 0;
}



