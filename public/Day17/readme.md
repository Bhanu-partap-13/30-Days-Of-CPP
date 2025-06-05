# Day 17: Type Conversions in C++

## Beginner-Friendly Questions

1. **What is type conversion in C++?**
    - [ ] A process of converting one function to another
    - [x] A process of converting one data type to another
    - [ ] A process of converting one class to another
    - [ ] A process of converting one object to another

2. **Which type of conversion is done automatically by the compiler?**
    - [x] Implicit conversion
    - [ ] Explicit conversion
    - [ ] Manual conversion
    - [ ] Static conversion

3. **Which keyword is used for explicit type conversion in C++?**
    - [ ] convert
    - [ ] cast
    - [x] static_cast
    - [ ] change

4. **What is another name for implicit type conversion?**
    - [ ] Manual conversion
    - [ ] Forced conversion
    - [x] Automatic conversion
    - [ ] User-defined conversion

5. **Which of the following is an example of implicit type conversion?**
    - [x] int a = 5.5;
    - [ ] int a = static_cast<int>(5.5);
    - [ ] int a = (int)5.5;
    - [ ] int a = int(5.5);

6. **What is the result of the following code? `int a = 3.14;`**
    - [ ] a = 3.14
    - [ ] a = 3.1
    - [x] a = 3
    - [ ] a = 4

7. **Which of the following is not a type conversion in C++?**
    - [ ] Implicit conversion
    - [ ] Explicit conversion
    - [ ] Dynamic conversion
    - [x] Static conversion

## Questions Based on Code

1. **What will be the output of the following code?**
    ```cpp
    int a = 10;
    double b = a;
    std::cout << b;
    ```
    - [ ] 10.0
    - [x] 10
    - [ ] 10.00
    - [ ] 10.000

2. **What will be the output of the following code?**
    ```cpp
    double a = 5.5;
    int b = static_cast<int>(a);
    std::cout << b;
    ```
    - [ ] 5.5
    - [ ] 6
    - [x] 5
    - [ ] 0

3. **What will be the output of the following code?**
    ```cpp
    float a = 3.14f;
    int b = (int)a;
    std::cout << b;
    ```
    - [ ] 3.14
    - [ ] 3.1
    - [x] 3
    - [ ] 4

4. **What will be the output of the following code?**
    ```cpp
    int a = 7;
    double b = static_cast<double>(a) / 2;
    std::cout << b;
    ```
    - [ ] 3
    - [ ] 3.5
    - [x] 3.5
    - [ ] 4

5. **What will be the output of the following code?**
    ```cpp
    char c = 'A';
    int a = static_cast<int>(c);
    std::cout << a;
    ```
    - [ ] 65
    - [x] 65
    - [ ] 66
    - [ ] 64

6. **What will be the output of the following code?**
    ```cpp
    int a = 5;
    float b = static_cast<float>(a) / 2;
    std::cout << b;
    ```
    - [ ] 2
    - [ ] 2.5
    - [x] 2.5
    - [ ] 3

7. **What will be the output of the following code?**
    ```cpp
    double a = 9.99;
    int b = static_cast<int>(a);
    std::cout << b;
    ```
    - [ ] 9.99
    - [ ] 10
    - [x] 9
    - [ ] 0

    ## Homework Problems

    ### Problem 1: Convert Float to Integer

    **Explain what to do in the question:**
    Write a program that takes a floating-point number as input and converts it to an integer using explicit type conversion.

    **Topic Name:**
    Explicit Type Conversion

    **Input format:**
    - A single floating-point number.

    **Output format:**
    - The integer value after conversion.

    **Example:**

    | Input 1: | Output 1: |
    | -------- | --------- |
    | 5.75     | 5         |
    | 3.14     | 3         |

    | Input 2: | Output 2: |
    | -------- | --------- |
    | 7.99     | 7         |
    | 2.5      | 2         |

    ### Problem 2: Implicit Conversion in Expressions

    **Explain what to do in the question:**
    Write a program that takes two integers and performs division. Observe the result of implicit type conversion when storing the result in a double variable.

    **Topic Name:**
    Implicit Type Conversion

    **Input format:**
    - Two integers.

    **Output format:**
    - The result of the division stored in a double variable.

    **Example:**

    | Input 1: | Output 1: |
    | -------- | --------- |
    | 10 3     | 3.33333   |
    | 7 2      | 3.5       |

    | Input 2: | Output 2: |
    | -------- | --------- |
    | 9 4      | 2.25      |
    | 5 2      | 2.5       |

    ### Problem 3: Character to ASCII Conversion

    **Explain what to do in the question:**
    Write a program that takes a character as input and converts it to its corresponding ASCII value using explicit type conversion.

    **Topic Name:**
    Character to Integer Conversion

    **Input format:**
    - A single character.

    **Output format:**
    - The ASCII value of the character.

    **Example:**

    | Input 1: | Output 1: |
    | -------- | --------- |
    | A        | 65        |
    | b        | 98        |

    | Input 2: | Output 2: |
    | -------- | --------- |
    | Z        | 90        |
    | c        | 99        |
    ### Solution 1: Convert Float to Integer

    ```cpp
    #include <iostream>

    int main() {
        float input;
        std::cout << "Enter a floating-point number: ";
        std::cin >> input;
        int output = static_cast<int>(input);
        std::cout << "The integer value is: " << output << std::endl;
        return 0;
    }
    ```

    ### Solution 2: Implicit Conversion in Expressions

    ```cpp
    #include <iostream>

    int main() {
        int num1, num2;
        std::cout << "Enter two integers: ";
        std::cin >> num1 >> num2;
        double result = num1 / static_cast<double>(num2);
        std::cout << "The result of the division is: " << result << std::endl;
        return 0;
    }
    ```

    ### Solution 3: Character to ASCII Conversion

    ```cpp
    #include <iostream>

    int main() {
        char input;
        std::cout << "Enter a character: ";
        std::cin >> input;
        int asciiValue = static_cast<int>(input);
        std::cout << "The ASCII value is: " << asciiValue << std::endl;
        return 0;
    }
    ```