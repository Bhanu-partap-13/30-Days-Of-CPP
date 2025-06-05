# Day 5: Manipulators and Functions with Default Arguments in C++

## Multiple Choice Questions

### Beginner Friendly Questions

1. Which of the following is a manipulator in C++?
    - [ ] `cin`
    - [x] `endl`
    - [ ] `cout`
    - [ ] `return`

2. What does the `setw` manipulator do?
    - [ ] Sets the width of the output stream
    - [x] Sets the width of the next input/output field
    - [ ] Sets the width of the console window
    - [ ] Sets the width of the variable

3. Which manipulator is used to set the precision of floating-point numbers?
    - [ ] `setw`
    - [ ] `endl`
    - [x] `setprecision`
    - [ ] `fixed`

4. What is the default value of the second argument in the function `int add(int a, int b = 5)` when called as `add(3)`?
    - [ ] 3
    - [x] 5
    - [ ] 8
    - [ ] 0

5. Which of the following is true about default arguments in C++?
    - [x] They must be specified in the function declaration
    - [ ] They must be specified in the function definition
    - [ ] They can be specified in both declaration and definition
    - [ ] They cannot be used in C++

6. How do you call a function with default arguments `void display(int a = 10, int b = 20)` with only the first argument?
    - [ ] `display()`
    - [x] `display(5)`
    - [ ] `display(5, 10)`
    - [ ] `display(, 10)`

7. What will be the output of the following code?
    ```cpp
    #include <iostream>
    using namespace std;
    int main() {
         cout << setw(5) << 42 << endl;
         return 0;
    }
    ```
    - [ ] `42`
    - [ ] ` 42`
    - [x] `   42`
    - [ ] `42   `

### Code-Based Questions

1. What will be the output of the following code?
    ```cpp
    #include <iostream>
    #include <iomanip>
    using namespace std;
    int main() {
         cout << setprecision(3) << 3.14159 << endl;
         return 0;
    }
    ```
    - [ ] `3.14`
    - [x] `3.14`
    - [ ] `3.141`
    - [ ] `3.1415`

2. What will be the output of the following code?
    ```cpp
    #include <iostream>
    using namespace std;
    void print(int a, int b = 10) {
         cout << a << " " << b << endl;
    }
    int main() {
         print(5);
         return 0;
    }
    ```
    - [ ] `5 5`
    - [x] `5 10`
    - [ ] `10 5`
    - [ ] `10 10`

3. What will be the output of the following code?
    ```cpp
    #include <iostream>
    #include <iomanip>
    using namespace std;
    int main() {
         cout << setw(4) << setfill('*') << 7 << endl;
         return 0;
    }
    ```
    - [ ] `7`
    - [ ] `*7`
    - [ ] `**7`
    - [x] `***7`

4. What will be the output of the following code?
    ```cpp
    #include <iostream>
    using namespace std;
    void display(int a = 1, int b = 2, int c = 3) {
         cout << a << " " << b << " " << c << endl;
    }
    int main() {
         display(5, 6);
         return 0;
    }
    ```
    - [ ] `1 2 3`
    - [ ] `5 6 3`
    - [x] `5 6 3`
    - [ ] `5 6 1`

5. What will be the output of the following code?
    ```cpp
    #include <iostream>
    using namespace std;
    void show(int a, int b = 20, int c = 30) {
         cout << a << " " << b << " " << c << endl;
    }
    int main() {
         show(10, 15);
         return 0;
    }
    ```
    - [ ] `10 20 30`
    - [ ] `10 15 20`
    - [x] `10 15 30`
    - [ ] `10 30 15`

6. What will be the output of the following code?
    ```cpp
    #include <iostream>
    using namespace std;
    void func(int x = 5, int y = 10) {
         cout << x << " " << y << endl;
    }
    int main() {
         func();
         return 0;
    }
    ```
    - [ ] `0 0`
    - [ ] `5 0`
    - [x] `5 10`
    - [ ] `10 5`

7. What will be the output of the following code?
    ```cpp
    #include <iostream>
    using namespace std;
    void test(int a = 2, int b = 4, int c = 6) {
         cout << a << " " << b << " " << c << endl;
    }
    int main() {
         test(8);
         return 0;
    }
    ```
    - [ ] `2 4 6`
    - [ ] `8 4 6`
    - [x] `8 4 6`
    - [ ] `8 6 4`

**Problem Statement 1:**

    Write a C++ program to define a function with default arguments that calculates the area of a rectangle. The program should prompt the user to enter the length and width of the rectangle, and then display the area using the function. If the width is not provided, it should default to 10.

    **Function Name:** calculateArea

    **Input format:**
    - The first line contains an integer representing the length.
    - The second line contains an integer representing the width (optional).

    **Output format:**
    - The first line displays the area of the rectangle.

    **Example:**

    | Input 1: | Output 1: |
    | -------- | --------- |
    | 5 | 50 |

    | Input 2: | Output 2: |
    | -------- | --------- |
    | 7 | 70 |

**Solution:**

```cpp
    #include <iostream>
    using namespace std;

    int calculateArea(int length, int width = 10) {
        return length * width;
    }

    int main() {
        int length, width;
        cout << "Enter the length of the rectangle: ";
        cin >> length;
        cout << "Enter the width of the rectangle (or press enter to use default width 10): ";
        if (cin.peek() == '\n') {
            width = 10;
        } else {
            cin >> width;
        }
        int area = calculateArea(length, width);
        cout << "The area of the rectangle is: " << area << endl;
        return 0;
    }
```

**Problem Statement 2:**

    Write a C++ program that uses manipulators to format the output of a table displaying the names and ages of three people. The program should align the names to the left and the ages to the right within a width of 10 characters.

    **Function Name:** displayTable

    **Input format:**
    - The program does not take any input.

    **Output format:**
    - The program displays a table with names and ages formatted as specified.

    **Example:**

    | Output: |
    | ------- |
    | Name      Age |
    | Alice       25 |
    | Bob         30 |
    | Charlie     22 |

**Solution:**

```cpp
    #include <iostream>
    #include <iomanip>
    using namespace std;

    void displayTable() {
        cout << left << setw(10) << "Name" << right << setw(10) << "Age" << endl;
        cout << left << setw(10) << "Alice" << right << setw(10) << 25 << endl;
        cout << left << setw(10) << "Bob" << right << setw(10) << 30 << endl;
        cout << left << setw(10) << "Charlie" << right << setw(10) << 22 << endl;
    }

    int main() {
        displayTable();
        return 0;
    }
```

**Problem Statement 3:**

    Write a C++ program that uses manipulators to display a floating-point number with a fixed precision of 2 decimal places. The program should prompt the user to enter a floating-point number and then display it formatted as specified.

    **Function Name:** displayNumber

    **Input format:**
    - The first line contains a floating-point number.

    **Output format:**
    - The first line displays the floating-point number with 2 decimal places.

    **Example:**

    | Input: | Output: |
    | ------ | ------- |
    | 3.14159 | 3.14 |

**Solution:**

```cpp
    #include <iostream>
    #include <iomanip>
    using namespace std;

    void displayNumber(double number) {
        cout << fixed << setprecision(2) << number << endl;
    }

    int main() {
        double number;
        cout << "Enter a floating-point number: ";
        cin >> number;
        displayNumber(number);
        return 0;
    }
```
**HOMEWORK QUESTION**

    Write a C++ program that defines a function with default arguments to calculate the volume of a box. The program should prompt the user to enter the length, width, and height of the box, and then display the volume using the function. If the height is not provided, it should default to 1.

    **Function Name:** calculateVolume

    **Input format:**
    - The first line contains an integer representing the length.
    - The second line contains an integer representing the width.
    - The third line contains an integer representing the height (optional).

    **Output format:**
    - The first line displays the volume of the box.

    **Example:**

    | Input 1: | Output 1: |
    | -------- | --------- |
    | 5 | 50 |
    | 4 |  |
    | 2 |  |

    | Input 2: | Output 2: |
    | -------- | --------- |
    | 7 | 70 |
    | 5 |  |
    | 2 |  |

    > ~This content was created by [Bhanu Partap](https://github.com/Bhanu-partap-13). If you have any questions or suggestions, feel free to reach out or contribute to the repository.