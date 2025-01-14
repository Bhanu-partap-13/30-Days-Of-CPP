# Day 28: Rethrowing an Exception and Templates in C++

## Beginner-Friendly Questions

1. What is rethrowing an exception in C++?
    - [ ] Catching an exception and ignoring it
    - [x] Catching an exception and throwing it again
    - [ ] Throwing a new exception
    - [ ] Handling an exception without rethrowing

2. Which keyword is used to rethrow an exception in C++?
    - [ ] throw_new
    - [ ] rethrow
    - [x] throw
    - [ ] catch

3. What is a template in C++?
    - [ ] A predefined function
    - [x] A blueprint for creating generic classes or functions
    - [ ] A type of exception
    - [ ] A library function

4. How do you define a function template in C++?
    - [ ] template <typename T> void functionName(T param)
    - [x] template <class T> void functionName(T param)
    - [ ] template <T> void functionName(T param)
    - [ ] template <typename> void functionName(T param)

5. What is the correct syntax to define a class template in C++?
    - [ ] template <class T> class ClassName { /* ... */ };
    - [x] template <typename T> class ClassName { /* ... */ };
    - [ ] template <T> class ClassName { /* ... */ };
    - [ ] template <class> class ClassName { /* ... */ };

6. Can templates be used with multiple types in C++?
    - [ ] No, templates can only be used with a single type
    - [x] Yes, templates can be used with multiple types
    - [ ] Only with integer types
    - [ ] Only with floating-point types

7. What is the purpose of using templates in C++?
    - [ ] To make the code more complex
    - [ ] To handle exceptions
    - [x] To write generic and reusable code
    - [ ] To define constants

## Code-Based Questions

1. What will be the output of the following code?
    ```cpp
    template <typename T>
    T add(T a, T b) {
         return a + b;
    }

    int main() {
         std::cout << add(3, 4);
         return 0;
    }
    ```
    - [ ] 34
    - [x] 7
    - [ ] 12
    - [ ] 0


    **Explain what you have to do in the question .**

    **Rethrowing an Exception in C++**

    **Input format:**
    - No input required

    **Output format:**
    - The output will be the exception message rethrown

    **Example:**

    | Input 1: | Output 1: |
    | -------- | --------- |
    | - | Exception caught: Division by zero |

    ```cpp
    #include <iostream>
    #include <stdexcept>

    void divide(int a, int b) {
        try {
            if (b == 0) {
                throw std::runtime_error("Division by zero");
            }
            std::cout << a / b << std::endl;
        } catch (const std::runtime_error& e) {
            std::cout << "Exception caught: " << e.what() << std::endl;
            throw; // Rethrow the exception
        }
    }

    int main() {
        try {
            divide(10, 0);
        } catch (const std::runtime_error& e) {
            std::cout << "Rethrown exception caught: " << e.what() << std::endl;
        }
        return 0;
    }
    ```

    **Explain what you have to do in the question .**

    **Function Template in C++**

    **Input format:**
    - Two integers or two floating-point numbers

    **Output format:**
    - The sum of the two numbers

    **Example:**

    | Input 1: | Output 1: |
    | -------- | --------- |
    | 3, 4 | 7 |
    | 5.5, 2.5 | 8 |

    ```cpp
    #include <iostream>

    template <typename T>
    T add(T a, T b) {
        return a + b;
    }

    int main() {
        std::cout << add(3, 4) << std::endl;
        std::cout << add(5.5, 2.5) << std::endl;
        return 0;
    }
    ```

    **Explain what you have to do in the question .**

    **Class Template in C++**

    **Input format:**
    - Two integers or two floating-point numbers

    **Output format:**
    - The product of the two numbers

    **Example:**

    | Input 1: | Output 1: |
    | -------- | --------- |
    | 3, 4 | 12 |
    | 5.5, 2.0 | 11 |

    ```cpp
    #include <iostream>

    template <typename T>
    class Multiply {
    public:
        T multiply(T a, T b) {
            return a * b;
        }
    };

    int main() {
        Multiply<int> intMultiplier;
        Multiply<double> doubleMultiplier;

        std::cout << intMultiplier.multiply(3, 4) << std::endl;
        std::cout << doubleMultiplier.multiply(5.5, 2.0) << std::endl;
        return 0;
    }
    ```
    