# Day 11: Member Functions and Modifiers in C++

## Beginner-Friendly Questions

1. What is a member function in C++?
    - [ ] A function that is defined outside a class.
    - [x] A function that is defined inside a class.
    - [ ] A function that is used to modify data members.
    - [ ] A function that is used to access private members.

2. Which keyword is used to define a member function outside the class?
    - [ ] `class`
    - [ ] `public`
    - [x] `::`
    - [ ] `->`

3. How do you declare a constant member function?
    - [ ] By using the `static` keyword.
    - [ ] By using the `virtual` keyword.
    - [x] By using the `const` keyword.
    - [ ] By using the `friend` keyword.

4. What is the purpose of the `private` access modifier?
    - [ ] To allow access to members from anywhere in the program.
    - [ ] To allow access to members only from derived classes.
    - [x] To restrict access to members within the same class.
    - [ ] To allow access to members from the same package.

5. Which of the following is a correct way to define a member function inside a class?
    - [x] `void display() { cout << "Hello"; }`
    - [ ] `void display() { cout << "Hello" }`
    - [ ] `void display { cout << "Hello"; }`
    - [ ] `void display() cout << "Hello";`

6. What is the default access level of members in a class?
    - [ ] `public`
    - [ ] `protected`
    - [x] `private`
    - [ ] `friend`

7. Which of the following is true about member functions?
    - [ ] They cannot access private data members.
    - [ ] They must be defined outside the class.
    - [x] They can be defined inside or outside the class.
    - [ ] They cannot be overloaded.

## Code-Based Questions

1. Given the following code, what will be the output?
    ```cpp
    class Test {
    public:
         void display() {
              cout << "Hello, World!";
         }
    };
    int main() {
         Test t;
         t.display();
         return 0;
    }
    ```
    - [x] `Hello, World!`
    - [ ] `Hello`
    - [ ] `World`
    - [ ] `Error`

2. What is the error in the following code?
    ```cpp
    class Test {
    private:
         int x;
    public:
         void setX(int a) {
              x = a;
         }
         int getX() {
              return x;
         }
    };
    int main() {
         Test t;
         t.x = 10;
         cout << t.getX();
         return 0;
    }
    ```
    - [ ] `x` is not initialized.
    - [ ] `getX` is not defined.
    - [x] `x` is private and cannot be accessed directly.
    - [ ] `setX` is not called.

3. What will be the output of the following code?
    ```cpp
    class Test {
    public:
         int x;
         Test() : x(10) {}
    };
    int main() {
         Test t;
         cout << t.x;
         return 0;
    }
    ```
    - [ ] `0`
    - [x] `10`
    - [ ] `Garbage value`
    - [ ] `Error`

4. Identify the error in the following code:
    ```cpp
    class Test {
    public:
         void display() const {
              cout << "Hello";
         }
    };
    int main() {
         Test t;
         t.display();
         return 0;
    }
    ```
    - [ ] `display` should not be `const`.
    - [ ] `main` should return `void`.
    - [ ] `t` should be a pointer.
    - [x] No error.

5. What will be the output of the following code?
    ```cpp
    class Test {
    public:
         static int x;
         Test() { x++; }
    };
    int Test::x = 0;
    int main() {
         Test t1, t2, t3;
         cout << Test::x;
         return 0;
    }
    ```
    - [ ] `1`
    - [ ] `2`
    - [x] `3`
    - [ ] `0`

6. What is the error in the following code?
    ```cpp
    class Test {
    public:
         void display();
    };
    void Test::display() {
         cout << "Hello";
    }
    int main() {
         Test t;
         t.display();
         return 0;
    }
    ```
    - [ ] `display` should be defined inside the class.
    - [ ] `main` should return `void`.
    - [ ] `t` should be a pointer.
    - [x] No error.

7. What will be the output of the following code?
    ```cpp
    class Test {
    public:
         int x;
         Test(int a) : x(a) {}
    };
    int main() {
         Test t(5);
         cout << t.x;
         return 0;
    }
    ```
    - [ ] `0`
    - [ ] `10`
    - [x] `5`
    - [ ] `Error`

    ## Additional Code-Based Questions

    1. What will be the output of the following code?
        ```cpp
        class Test {
        public:
             string str;
             Test(string s) : str(s) {}
             void display() {
                  cout << str;
             }
        };
        int main() {
             Test t("Hello, C++!");
             t.display();
             return 0;
        }
        ```
        - [x] `Hello, C++!`
        - [ ] `Hello`
        - [ ] `C++`
        - [ ] `Error`

    2. Identify the error in the following code:
        ```cpp
        class Test {
        public:
             string str;
             void setStr(string s) {
                  str = s;
             }
             string getStr() const {
                  return str;
             }
        };
        int main() {
             Test t;
             t.setStr("Hello, World!");
             cout << t.getStr();
             return 0;
        }
        ```
        - [ ] `setStr` should be `const`.
        - [ ] `getStr` should not be `const`.
        - [ ] `str` should be `private`.
        - [x] No error.



    ## Homework Question

    **Topic: Member Functions and Modifiers of String Class**

    **Explain what you have to do in the question:**
    Write a C++ program that demonstrates the use of member functions and modifiers of the `string` class. You need to create a class that contains a `string` member and provides functions to modify and display the string.

    **Input format:**
    - A string value to initialize the class member.
    - A string value to modify the class member.

    **Output format:**
    - The initial string.
    - The modified string.

    **Example:**

    | Input 1: | Output 1: |
    | -------- | --------- |
    | "Hello"  | "Hello"   |
    | "World"  | "World"   |

    | Input 2: | Output 2: |
    | -------- | --------- |
    | "C++"    | "C++"     |
    | "Programming" | "Programming" |