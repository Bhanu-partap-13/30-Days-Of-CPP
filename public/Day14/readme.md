# Day 14: File Handling, Random Access, and Sequential Access in C++

## Beginner-Friendly Questions

1. What is the purpose of file handling in C++?
    - [ ] To create a new programming language
    - [x] To read from and write to files
    - [ ] To handle memory allocation
    - [ ] To manage network connections

2. Which header file is required for file handling in C++?
    - [ ] <iostream>
    - [x] <fstream>
    - [ ] <vector>
    - [ ] <string>

3. What is the correct way to open a file for reading in C++?
    - [ ] `ifstream file("example.txt", ios::out);`
    - [x] `ifstream file("example.txt", ios::in);`
    - [ ] `ofstream file("example.txt", ios::in);`
    - [ ] `fstream file("example.txt", ios::app);`

4. How do you check if a file was successfully opened in C++?
    - [ ] `file.open()`
    - [ ] `file.is_open()`
    - [x] `file.is_open()`
    - [ ] `file.close()`

5. What is sequential access in file handling?
    - [ ] Accessing file data in a random order
    - [x] Accessing file data in a linear order
    - [ ] Accessing file data in reverse order
    - [ ] Accessing file data based on a key

6. What is random access in file handling?
    - [x] Accessing file data at any position
    - [ ] Accessing file data in a linear order
    - [ ] Accessing file data in reverse order
    - [ ] Accessing file data based on a key

7. Which function is used to move the file pointer to a specific location in a file?
    - [ ] `file.seekg()`
    - [x] `file.seekg()`
    - [ ] `file.tellg()`
    - [ ] `file.read()`

## Questions Based on Code

1. What does the following code do?
    ```cpp
    ofstream file("example.txt");
    file << "Hello, World!";
    file.close();
    ```
    - [x] Writes "Hello, World!" to "example.txt"
    - [ ] Reads "Hello, World!" from "example.txt"
    - [ ] Appends "Hello, World!" to "example.txt"
    - [ ] Deletes "example.txt"

2. What is the output of the following code?
    ```cpp
    ifstream file("example.txt");
    string line;
    getline(file, line);
    cout << line;
    file.close();
    ```
    - [ ] Writes "Hello, World!" to the console
    - [x] Reads the first line from "example.txt" and prints it
    - [ ] Appends a line to "example.txt"
    - [ ] Deletes "example.txt"

3. What does the following code do?
    ```cpp
    fstream file("example.txt", ios::in | ios::out);
    file.seekg(5, ios::beg);
    char ch;
    file.get(ch);
    cout << ch;
    file.close();
    ```
    - [ ] Moves the file pointer to the beginning of the file
    - [x] Moves the file pointer to the 5th character and reads it
    - [ ] Writes a character to the file
    - [ ] Deletes "example.txt"

4. What is the purpose of `file.tellg()` in the following code?
    ```cpp
    ifstream file("example.txt");
    file.seekg(0, ios::end);
    streampos size = file.tellg();
    file.close();
    ```
    - [ ] To move the file pointer to the beginning
    - [ ] To write data to the file
    - [x] To get the current position of the file pointer
    - [ ] To close the file

5. What does the following code do?
    ```cpp
    ofstream file("example.txt", ios::app);
    file << "Appending text.";
    file.close();
    ```
    - [ ] Overwrites the file with "Appending text."
    - [x] Appends "Appending text." to the file
    - [ ] Reads "Appending text." from the file
    - [ ] Deletes "example.txt"

6. What is the output of the following code?
    ```cpp
    fstream file("example.txt", ios::in | ios::out);
    file.seekp(0, ios::end);
    file << "End of file.";
    file.close();
    ```
    - [ ] Writes "End of file." at the beginning of the file
    - [ ] Reads "End of file." from the file
    - [x] Writes "End of file." at the end of the file
    - [ ] Deletes "example.txt"

7. What does the following code do?
    ```cpp
    ifstream file("example.txt");
    file.seekg(10, ios::beg);
    string line;
    getline(file, line);
    cout << line;
    file.close();
    ```
    - [ ] Moves the file pointer to the end of the file
    - [ ] Writes a line to the file
    - [x] Moves the file pointer to the 10th character and reads the line
    - [ ] Deletes "example.txt"

## Coding Problems

**Problem 1: Write to a File**

**Explain what to do in the question:**
    Write a program that opens a file named "output.txt" and writes the string "Hello, C++!" to it.

**Topic name:**
    File Handling

**Input format:**
    - No input required

**Output format:**
    - No output to console

**Example:**

    | Input 1: | Output 1: |
    | -------- | --------- |
    | No input | No output |

**Solution:**
```cpp
    #include <fstream>
    using namespace std;

    int main() {
        ofstream file("output.txt");
        file << "Hello, C++!";
        file.close();
        return 0;
    }
```

**Problem 2: Read from a File**

**Explain what to do in the question:**
    Write a program that opens a file named "input.txt", reads the first line, and prints it to the console.

**Topic name:**
    File Handling

**Input format:**
    - No input required

**Output format:**
    - The first line of the file "input.txt"

**Example:**

    | Input 1: | Output 1: |
    | -------- | --------- |
    | No input | First line of input.txt |

**Solution:**
```cpp
    #include <fstream>
    #include <iostream>
    using namespace std;

    int main() {
        ifstream file("input.txt");
        string line;
        getline(file, line);
        cout << line;
        file.close();
        return 0;
    }
```

    **Problem 3: Random Access in a File**

**Explain what to do in the question:**
    Write a program that opens a file named "data.txt", moves the file pointer to the 10th character, reads the next character, and prints it to the console.

**Topic name:**
    Random Access

**Input format:**
    - No input required

**Output format:**
    - The character at the 10th position in the file "data.txt"

**Example:**

    | Input 1: | Output 1: |
    | -------- | --------- |
    | No input | Character at position 10 |

**Solution:**
```cpp
    #include <fstream>
    #include <iostream>
    using namespace std;

    int main() {
        fstream file("data.txt", ios::in);
        file.seekg(10, ios::beg);
        char ch;
        file.get(ch);
        cout << ch;
        file.close();
        return 0;
    }
```