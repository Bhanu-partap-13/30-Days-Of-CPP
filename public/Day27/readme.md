# Day 27: Exception Handling in C++

## Beginner-Friendly Questions

1. What is the purpose of exception handling in C++?
    - [ ] To handle syntax errors
    - [x] To handle runtime errors
    - [ ] To handle logical errors
    - [ ] To handle compilation errors

2. Which keyword is used to throw an exception in C++?
    - [ ] catch
    - [ ] try
    - [x] throw
    - [ ] finally

3. Which block is used to handle exceptions in C++?
    - [ ] try
    - [x] catch
    - [ ] throw
    - [ ] finally

4. What will happen if an exception is not caught in C++?
    - [ ] The program will continue running
    - [ ] The exception will be ignored
    - [x] The program will terminate
    - [ ] The exception will be logged

5. Can a single try block have multiple catch blocks in C++?
    - [x] Yes
    - [ ] No

6. What is the correct syntax to catch all exceptions in C++?
    - [ ] catch(...)
    - [x] catch(...)
    - [ ] catch(Exception e)
    - [ ] catch(...Exception)

7. Which of the following is the correct way to throw an integer exception?
    - [ ] throw "Exception";
    - [ ] throw 3.14;
    - [x] throw 10;
    - [ ] throw true;

## Code-Based Questions

1. What will be the output of the following code?
    ```cpp
    try {
         throw 20;
    } catch (int e) {
         std::cout << "Exception: " << e << std::endl;
    }
    ```
    - [ ] Exception: 10
    - [x] Exception: 20
    - [ ] Exception: 30
    - [ ] No output

2. What will be the output of the following code?
    ```cpp
    try {
         throw "An error occurred";
    } catch (const char* msg) {
         std::cout << msg << std::endl;
    }
    ```
    - [x] An error occurred
    - [ ] Exception: An error occurred
    - [ ] Error
    - [ ] No output

3. What will be the output of the following code?
    ```cpp
    try {
         int x = 0;
         if (x == 0) {
              throw x;
         }
    } catch (int e) {
         std::cout << "Caught exception: " << e << std::endl;
    }
    ```
    - [x] Caught exception: 0
    - [ ] Caught exception: 1
    - [ ] No output
    - [ ] Runtime error

4. What will be the output of the following code?
    ```cpp
    try {
         throw 3.14;
    } catch (double e) {
         std::cout << "Caught exception: " << e << std::endl;
    }
    ```
    - [ ] Caught exception: 3
    - [x] Caught exception: 3.14
    - [ ] Caught exception: 3.14159
    - [ ] No output

5. What will be the output of the following code?
    ```cpp
    try {
         throw std::string("Error");
    } catch (std::string& e) {
         std::cout << "Caught exception: " << e << std::endl;
    }
    ```
    - [x] Caught exception: Error
    - [ ] Caught exception: error
    - [ ] Caught exception: Exception
    - [ ] No output

6. What will be the output of the following code?
    ```cpp
    try {
         throw 100;
    } catch (int e) {
         std::cout << "Caught exception: " << e << std::endl;
    } catch (...) {
         std::cout << "Caught unknown exception" << std::endl;
    }
    ```
    - [x] Caught exception: 100
    - [ ] Caught unknown exception
    - [ ] No output
    - [ ] Runtime error

7. What will be the output of the following code?
    ```cpp
    try {
         throw 1;
    } catch (double e) {
         std::cout << "Caught exception: " << e << std::endl;
    } catch (...) {
         std::cout << "Caught unknown exception" << std::endl;
    }
    ```
    - [ ] Caught exception: 1
    - [ ] No output
    - [x] Caught unknown exception
    - [ ] Runtime error

    <br></br>

    ## Problem Statements
   
    ### Problem Statement 1
    **Handling Division by Zero**

    **Input format:**
    - Two integers, `a` and `b`.

    **Output format:**
    - The result of `a / b` if `b` is not zero.
    - An error message if `b` is zero.

    **Example:**

    | Input 1: | Output 1: |
    | -------- | --------- |
    | 10 2     | 5         |
    | 10 0     | Division by zero error |

    ```cpp
    #include <iostream>
    #include <stdexcept>

    int main() {
        int a, b;
        std::cin >> a >> b;
        try {
            if (b == 0) {
                throw std::runtime_error("Division by zero error");
            }
            std::cout << a / b << std::endl;
        } catch (const std::runtime_error& e) {
            std::cout << e.what() << std::endl;
        }
        return 0;
    }
    ```

    
    ### Problem Statement 2
    **Handling Invalid Array Index**

    **Input format:**
    - An integer `n` representing the size of the array.
    - `n` integers representing the elements of the array.
    - An integer `index` to access the array element.

    **Output format:**
    - The array element at the given `index` if it is valid.
    - An error message if the `index` is out of bounds.

    **Example:**

    | Input 1: | Output 1: |
    | -------- | --------- |
    | 5 1 2 3 4 5 2 | 3 |
    | 5 1 2 3 4 5 6 | Index out of bounds |

    ```cpp
    #include <iostream>
    #include <vector>
    #include <stdexcept>

    int main() {
        int n, index;
        std::cin >> n;
        std::vector<int> arr(n);
        for (int i = 0; i < n; ++i) {
            std::cin >> arr[i];
        }
        std::cin >> index;
        try {
            if (index < 0 || index >= n) {
                throw std::out_of_range("Index out of bounds");
            }
            std::cout << arr[index] << std::endl;
        } catch (const std::out_of_range& e) {
            std::cout << e.what() << std::endl;
        }
        return 0;
    }
    ```

    ### Problem Statement 3
    **Handling Invalid Input Type**

    **Input format:**
    - A single integer.

    **Output format:**
    - The integer if the input is valid.
    - An error message if the input is not an integer.

    **Example:**

    | Input 1: | Output 1: |
    | -------- | --------- |
    | 10       | 10        |
    | abc      | Invalid input type |

    ```cpp
    #include <iostream>
    #include <stdexcept>

    int main() {
        int num;
        try {
            if (!(std::cin >> num)) {
                throw std::invalid_argument("Invalid input type");
            }
            std::cout << num << std::endl;
        } catch (const std::invalid_argument& e) {
            std::cout << e.what() << std::endl;
        }
        return 0;
    }
    ```

    ### Problem Statement 4
    **Handling File Not Found**

    **Input format:**
    - A string representing the file name.

    **Output format:**
    - The content of the file if it exists.
    - An error message if the file does not exist.

    **Example:**

    | Input 1: | Output 1: |
    | -------- | --------- |
    | file.txt | File content |
    | nofile.txt | File not found |

    ```cpp
    #include <iostream>
    #include <fstream>
    #include <stdexcept>

    int main() {
        std::string filename;
        std::cin >> filename;
        std::ifstream file(filename);
        try {
            if (!file) {
                throw std::runtime_error("File not found");
            }
            std::string content((std::istreambuf_iterator<char>(file)), std::istreambuf_iterator<char>());
            std::cout << content << std::endl;
        } catch (const std::runtime_error& e) {
            std::cout << e.what() << std::endl;
        }
        return 0;
    }
    ```