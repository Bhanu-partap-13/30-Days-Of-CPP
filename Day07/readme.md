# Day 7: Functions, Pointers, Recursion, and Call by Value/Reference in C++

## Beginner-Friendly MCQs

1. **What is a function in C++?**
    - [ ] A variable that stores data
    - [ ] A loop that iterates over a sequence
    - [x] A block of code that performs a specific task
    - [ ] A type of pointer

2. **Which of the following is the correct syntax to declare a pointer?**
    - [ ] int pointer;
    - [x] int *pointer;
    - [ ] int &pointer;
    - [ ] int pointer*;

3. **What is recursion in C++?**
    - [ ] A function that calls itself
    - [ ] A loop that iterates indefinitely
    - [x] A function that calls itself
    - [ ] A type of pointer

4. **What does 'call by value' mean?**
    - [x] Passing a copy of the argument to the function
    - [ ] Passing the address of the argument to the function
    - [ ] Passing a reference to the argument to the function
    - [ ] Passing a pointer to the argument to the function

5. **What does 'call by reference' mean?**
    - [ ] Passing a copy of the argument to the function
    - [ ] Passing the address of the argument to the function
    - [x] Passing a reference to the argument to the function
    - [ ] Passing a pointer to the argument to the function

6. **Which of the following is the correct way to declare a function in C++?**
    - [ ] function int add(int a, int b);
    - [ ] int add(int a, int b);
    - [x] int add(int a, int b);
    - [ ] int add(a, b);

7. **What is the output of the following code?**
    ```cpp
    int add(int a, int b) {
         return a + b;
    }
    int main() {
         int result = add(3, 4);
         cout << result;
         return 0;
    }
    ```
    - [ ] 34
    - [ ] 7
    - [x] 7
    - [ ] 12

## More MCQs

1. **What is the main difference between call by value and call by reference?**
    - [ ] Call by value passes a pointer, call by reference passes a copy
    - [x] Call by value passes a copy, call by reference passes a reference
    - [ ] Call by value passes a reference, call by reference passes a copy
    - [ ] There is no difference

2. **Which of the following is true about call by reference?**
    - [ ] It creates a new copy of the argument
    - [ ] It does not allow the function to modify the argument
    - [x] It allows the function to modify the argument
    - [ ] It is slower than call by value

3. **What is the output of the following code?**
    ```cpp
    void swap(int &a, int &b) {
         int temp = a;
         a = b;
         b = temp;
    }
    int main() {
         int x = 5, y = 10;
         swap(x, y);
         cout << x << " " << y;
         return 0;
    }
    ```
    - [ ] 5 10
    - [ ] 10 5
    - [x] 10 5
    - [ ] 5 5

4. **Which of the following is a benefit of using call by reference?**
    - [ ] It is easier to understand
    - [ ] It is always faster
    - [x] It allows the function to modify the original argument
    - [ ] It uses less memory

5. **What is the output of the following code?**
    ```cpp
    void increment(int &a) {
         a++;
    }
    int main() {
         int num = 5;
         increment(num);
         cout << num;
         return 0;
    }
    ```
    - [ ] 4
    - [ ] 5
    - [x] 6
    - [ ] 7

6. **Which of the following is true about call by value?**
    - [x] It passes a copy of the argument
    - [ ] It passes a reference to the argument
    - [ ] It allows the function to modify the original argument
    - [ ] It is slower than call by reference

7. **What is the output of the following code?**
    ```cpp
    void setValue(int a) {
         a = 10;
    }
    int main() {
         int num = 5;
         setValue(num);
         cout << num;
         return 0;
    }
    ```
    - [ ] 10
    - [ ] 0
    - [x] 5
    - [ ] 15


    ## Coding-Based Questions - Solutions are provided after all the questions

    1. **Write a C++ program that defines a recursive function to calculate the factorial of a number. The program should prompt the user to enter a number and then display the factorial using the function.**

        **Function Name:** factorial

        **Input format:**
        - The first line contains an integer representing the number.

        **Output format:**
        - The first line displays the factorial of the number.

        **Example:**

        | Input 1: | Output 1: |
        | -------- | --------- |
        | 5 | 120 |

        | Input 2: | Output 2: |
        | -------- | --------- |
        | 3 | 6 |

    2. **Write a C++ program that defines a function to swap two integers using pointers. The program should prompt the user to enter two integers and then display the swapped values using the function.**

        **Function Name:** swap

        **Input format:**
        - The first line contains an integer representing the first number.
        - The second line contains an integer representing the second number.

        **Output format:**
        - The first line displays the swapped values of the two numbers.

        **Example:**

        | Input 1: | Output 1: |
        | -------- | --------- |
        | 5 | 10 |
        | 10 | 5 |

        | Input 2: | Output 2: |
        | -------- | --------- |
        | 3 | 8 |
        | 8 | 3 |

    3. **Write a C++ program that defines a function to reverse a string using pointers. The program should prompt the user to enter a string and then display the reversed string using the function.**

        **Function Name:** reverseString

        **Input format:**
        - The first line contains a string.

        **Output format:**
        - The first line displays the reversed string.

        **Example:**

        | Input 1: | Output 1: |
        | -------- | --------- |
        | hello | olleh |

        | Input 2: | Output 2: |
        | -------- | --------- |
        | world | dlrow |


## Important Concept

4. **Write a C++ program that defines a recursive function to solve the Tower of Hanoi problem. The program should prompt the user to enter the number of disks and then display the sequence of moves required to solve the problem.**

        **Function Name:** towerOfHanoi

        **Input format:**
        - The first line contains an integer representing the number of disks.

        **Output format:**
        - The sequence of moves required to solve the Tower of Hanoi problem.

        **Example:**

        | Input 1: | Output 1: |
        | -------- | --------- |
        | 3 | Move disk 1 from rod A to rod C <br> Move disk 2 from rod A to rod B <br> Move disk 1 from rod C to rod B <br> Move disk 3 from rod A to rod C <br> Move disk 1 from rod B to rod A <br> Move disk 2 from rod B to rod C <br> Move disk 1 from rod A to rod C |

        | Input 2: | Output 2: |
        | -------- | --------- |
        | 2 | Move disk 1 from rod A to rod B <br> Move disk 2 from rod A to rod C <br> Move disk 1 from rod B to rod C |

## Solutions

1. **Solution for calculating the factorial of a number using recursion:**

```cpp
    #include <iostream>
    using namespace std;
    int factorial(int n) {
        if (n <= 1)
            return 1;
        else
           return n * factorial(n - 1);
    }

    int main() {
        int number;
        cout << "Enter a number: ";
        cin >> number;
        cout << "Factorial of " << number << " is " << factorial(number) << endl;
        return 0;
    }
```

2. **Solution for swapping two integers using pointers:**

```cpp
            #include <iostream>
            using namespace std;

            void swap(int *a, int *b) {
                int temp = *a;
                *a = *b;
                *b = temp;
            }

            int main() {
                int num1, num2;
                cout << "Enter first number: ";
                cin >> num1;
                cout << "Enter second number: ";
                cin >> num2;
                swap(&num1, &num2);
                cout << "Swapped values: " << num1 << " " << num2 << endl;
                return 0;
            }
```

3. **Solution for reversing a string using pointers:**

```cpp
            #include <iostream>
            #include <cstring>
            using namespace std;

            void reverseString(char *str) {
                int n = strlen(str);
                for (int i = 0; i < n / 2; i++) {
                    char temp = str[i];
                    str[i] = str[n - i - 1];
                    str[n - i - 1] = temp;
                }
            }

            int main() {
                char str[100];
                cout << "Enter a string: ";
                cin >> str;
                reverseString(str);
                cout << "Reversed string: " << str << endl;
                return 0;
            }
```

4. **Solution for solving the Tower of Hanoi problem using recursion:**

```cpp
            #include <iostream>
            using namespace std;

            void towerOfHanoi(int n, char from_rod, char to_rod, char aux_rod) {
                if (n == 1) {
                    cout << "Move disk 1 from rod " << from_rod << " to rod " << to_rod << endl;
                    return;
                }
                towerOfHanoi(n - 1, from_rod, aux_rod, to_rod);
                cout << "Move disk " << n << " from rod " << from_rod << " to rod " << to_rod << endl;
                towerOfHanoi(n - 1, aux_rod, to_rod, from_rod);
            }

            int main() {
                int n;
                cout << "Enter the number of disks: ";
                cin >> n;
                towerOfHanoi(n, 'A', 'C', 'B');
                return 0;
            }
```

## Homework Question
5. **Write a C++ program that defines a recursive function to generate the nth Fibonacci number. The program should prompt the user to enter a number and then display the nth Fibonacci number using the function.**

    **Function Name:** fibonacci

    **Input format:**
    - The first line contains an integer representing the position in the Fibonacci sequence.

    **Output format:**
    - The first line displays the nth Fibonacci number.

    **Example:**

    | Input 1: | Output 1: |
    | -------- | --------- |
    | 5 | 5 |

    | Input 2: | Output 2: |
    | -------- | --------- |
    | 7 | 13 |


> ~This content was created by [Bhanu Partap](https://github.com/Bhanu-partap-13). If you have any questions or suggestions, feel free to reach out or contribute to the repository.