# Day 4: C++ Functions

## Topics Covered
- Inline Function (inlinefn.cpp)
- Non-inline Function (inlinefn.cpp)
- Static Member Function (static.cpp)

## Beginner Level Questions

1. **What is an inline function in C++?**
    - [ ] A function that is defined inside a class.
    - [ ] A function that is defined outside a class.
    - [x] A function that is expanded in line when it is called.
    - [ ] A function that is always static.

2. **Which keyword is used to define an inline function?**
    - [ ] static
    - [ ] const
    - [x] inline
    - [ ] friend

3. **What is a non-inline function?**
    - [ ] A function that is always static.
    - [x] A function that is not expanded in line when it is called.
    - [ ] A function that is defined inside a class.
    - [ ] A function that is always virtual.

4. **What is a static member function?**
    - [ ] A function that can only be called by an object.
    - [ ] A function that cannot access static data members.
    - [x] A function that can be called without an object.
    - [ ] A function that is always inline.

5. **Can a static member function access non-static data members?**
    - [ ] Yes
    - [x] No

6. **Which of the following is true about inline functions?**
    - [ ] They reduce the function call overhead.
    - [ ] They increase the function call overhead.
    - [x] They reduce the function call overhead.
    - [ ] They are always virtual.

7. **What is the main advantage of using static member functions?**
    - [ ] They can access non-static data members.
    - [ ] They can only be called by an object.
    - [x] They can be called without creating an object.
    - [ ] They are always inline.

## Advanced Level Questions

1. **Which of the following code correctly defines an inline function?**
    ```cpp
    class MyClass {
    public:
         inline void display() {
              std::cout << "Hello, World!";
         }
    };
    ```
    - [x] Correct
    - [ ] Incorrect

2. **What will be the output of the following code?**
    ```cpp
    class MyClass {
    public:
         static int count;
         static void increment() {
              count++;
         }
    };

    int MyClass::count = 0;

    int main() {
         MyClass::increment();
         MyClass::increment();
         std::cout << MyClass::count;
         return 0;
    }
    ```
    - [ ] 0
    - [ ] 1
    - [x] 2
    - [ ] 3

3. **Which of the following code correctly defines a non-inline function?**
    ```cpp
    class MyClass {
    public:
         void display();
    };

    void MyClass::display() {
         std::cout << "Hello, World!";
    }
    ```
    - [x] Correct
    - [ ] Incorrect

4. **What will be the output of the following code?**
    ```cpp
    class MyClass {
    public:
         static int count;
         static void increment() {
              count++;
         }
    };

    int MyClass::count = 10;

    int main() {
         MyClass::increment();
         std::cout << MyClass::count;
         return 0;
    }
    ```
    - [ ] 0
    - [ ] 1
    - [ ] 10
    - [x] 11

5. **Which of the following code correctly defines a static member function?**
    ```cpp
    class MyClass {
    public:
         static void display() {
              std::cout << "Hello, World!";
         }
    };
    ```
    - [x] Correct
    - [ ] Incorrect

6. **What will be the output of the following code?**
    ```cpp
    class MyClass {
    public:
         static int count;
         static void increment() {
              count++;
         }
    };

    int MyClass::count = 5;

    int main() {
         MyClass::increment();
         MyClass::increment();
         MyClass::increment();
         std::cout << MyClass::count;
         return 0;
    }
    ```
    - [ ] 5
    - [ ] 6
    - [ ] 7
    - [x] 8

7. **Which of the following code correctly defines an inline function inside a class?**
    ```cpp
    class MyClass {
    public:
         inline void display() {
              std::cout << "Hello, World!";
         }
    };
    ```
    - [x] Correct
    - [ ] Incorrect


## Coding Problems

    **Problem Statement:**

    Write a C++ program to define an inline function that calculates the square of a number. The program should prompt the user to enter a number and then display the square of that number using the inline function.

    **Function Name:** square

    **Input format:**
    - The first line contains an integer representing the number.

    **Output format:**
    - The first line displays the square of the number.

    **Example:**

    | Input 1: | Output 1: |
    | -------- | --------- |
    | 4 | 16 |

    | Input 2: | Output 2: |
    | -------- | --------- |
    | 7 | 49 |

    ---

    **Problem Statement:**

    Write a C++ program to define a class with a static data member that keeps track of the number of objects created. The program should create multiple objects and display the count of objects created.

    **Class Name:** Counter

    **Input format:**
    - No input required.

    **Output format:**
    - The first line displays the count of objects created.

    **Example:**

    | Output 1: |
    | --------- |
    | Number of objects created: 3 |

    ---

    **Problem Statement:**

    Write a C++ program to define an inline function that checks if a number is even or odd. The program should prompt the user to enter a number and then display whether the number is even or odd using the inline function.

    **Function Name:** isEven

    **Input format:**
    - The first line contains an integer representing the number.

    **Output format:**
    - The first line displays whether the number is even or odd.

    **Example:**

    | Input 1: | Output 1: |
    | -------- | --------- |
    | 4 | Even |

    | Input 2: | Output 2: |
    | -------- | --------- |
    | 7 | Odd |

    ---

    **Problem Statement:**

    Write a C++ program to define a class with a static member function that returns the larger of two numbers. The program should prompt the user to enter two numbers and then display the larger number using the static member function.

    **Class Name:** Compare

    **Input format:**
    - The first line contains an integer representing the first number.
    - The second line contains an integer representing the second number.

    **Output format:**
    - The first line displays the larger of the two numbers.

    **Example:**

    | Input 1: | Output 1: |
    | -------- | --------- |
    | 4 | 7 |
    | 7 | Larger number: 7 |

    | Input 2: | Output 2: |
    | -------- | --------- |
    | 10 | 5 |
    | 5 | Larger number: 10 |
    ---

**Solution:**

```cpp
    // Solution for Problem 1
    #include <iostream>
    inline int square(int num) {
        return num * num;
    }

    int main() {
        int number;
        std::cout << "Enter a number: ";
        std::cin >> number;
        std::cout << "Square of " << number << " is " << square(number) << std::endl;
        return 0;
    }
```

```cpp
    // Solution for Problem 2
    #include <iostream>

    class Counter {
    public:
        static int count;
        Counter() {
            count++;
        }
    };

    int Counter::count = 0;

    int main() {
        Counter obj1, obj2, obj3;
        std::cout << "Number of objects created: " << Counter::count << std::endl;
        return 0;
    }
```

```cpp
    // Solution for Problem 3
    #include <iostream>
    inline bool isEven(int num) {
        return num % 2 == 0;
    }

    int main() {
        int number;
        std::cout << "Enter a number: ";
        std::cin >> number;
        if (isEven(number)) {
            std::cout << number << " is Even" << std::endl;
        } else {
            std::cout << number << " is Odd" << std::endl;
        }
        return 0;
    }
```

```cpp
    // Solution for Problem 4
    #include <iostream>

    class Compare {
    public:
        static int larger(int a, int b) {
            return (a > b) ? a : b;
        }
    };

    int main() {
        int num1, num2;
        std::cout << "Enter first number: ";
        std::cin >> num1;
        std::cout << "Enter second number: ";
        std::cin >> num2;
        std::cout << "Larger number: " << Compare::larger(num1, num2) << std::endl;
        return 0;
    }
```

> ~This content was created by [Bhanu Partap](https://github.com/Bhanu-partap-13). If you have any questions or suggestions, feel free to reach out or contribute to the repository.