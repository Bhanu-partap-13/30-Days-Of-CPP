//------------------------------------------------------File Handling---------------------------------------------------------------
// 30 Days of C++ - By bhanu partap - learn more about me at https://github.com/Bhanu-partap-13
//What is File handling ? (In simple way)
/*
Imagine you have a notebook where you write things down so you don’t forget them, and later, you read from it to remember.
  In C++, file handling is just like that. Instead of a notebook, you use files on your computer.
  You can write data into a file (like jotting down notes) or read data from a file (like reading your notes). 
  This way, your data is saved even after the program stops running, so you can access it anytime you want.
*/
//actual definition 
/*
1. File handling is a way to read and write data to a file.
2. With file handling, you can store and retrieve data persistently.
3. File handling in C++ refers to the process of performing input (reading data) and output (writing data) operations on files.
*/

// How we perform File Handling ??
/*
To perform file handling in C++, we use the <fstream> header, which provides:
1. ofstream: For writing to files.
2. ifstream: For reading from files.
3. fstream: For both reading and writing.
*/

/*
Syntax:            [Slight Right->]

1. fstream                2. Declare a file stream object (ofstream, ifstream, or fstream)         3. Using open() function      4.Perform file operations (read/write)   5. Close the file using close():
#include <fstream>                  ofstream outFile;  // For writing                             outFile.open("example.txt");         outFile << "Hello, File!";                 outFile.close();
#include <iostream>                 ifstream inFile;   // For reading
using namespace std;
*/


/*
Common Syntax:
1. ofstream file("filename.txt", ios::out); // For what need we are using it write here ->  ...........
2. ifstream file("filename.txt", ios::in); //  For what need we are using it write here ->  ...........
3. fstream file("filename.txt", ios::in | ios::out); // Reading and writing ->  (Remember)
*/

/* File is Opened Successfully
if (!file.is_open()) {
    cout << "Failed to open the file." << endl;
    return;
}
*/
/*
Reading Data From File
string data;
while (getline(inFile, data)) {
    cout << data << endl;
}

*/

/*
Example Codes Ahead
*/

//Example Code 1
#include <fstream>
#include <iostream>
using namespace std;

int main() {
    ofstream outfile("example.txt"); // Open file for writing
    if (!outfile) {
        cout << "Error opening file for writing!" << endl;
        return 1;
    }

    outfile << "Hello, this is a file handling example." << endl;
    outfile << "Writing data to a file in C++." << endl;

    outfile.close(); // Close the file
    cout << "Data written successfully!" << endl;

    return 0;
}
//Writing to a file
//Outupt : Hello, this is a file handling example.
//         Writing data to a file in C++.


//Example Code 2
#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main() {
    ifstream infile("example.txt"); // Open file for reading
    if (!infile) {
        cout << "Error opening file for reading!" << endl;
        return 1;
    }

    string line;
    while (getline(infile, line)) { // Read line by line
        cout << line << endl;
    }

    infile.close(); // Close the file
    return 0;
}
//Reading From a file
//Read Content from example.txt and print it line by line


//Example Code 3
#include <fstream>
#include <iostream>
using namespace std;

int main() {
    fstream file("example.txt", ios::app); // Open file in append mode
    if (!file) {
        cout << "Error opening file for appending!" << endl;
        return 1;
    }

    file << "Appending new data to the file." << endl;
    file.close(); // Close the file
    cout << "Data appended successfully!" << endl;

    return 0;
}
//Appending to a file
//Output : Data appended successfully!


