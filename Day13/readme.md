# Day 13: Copy Constructor, Parameterized Constructor, and Initializer Lists in C++

## Beginner-Friendly Questions

1. **What is a copy constructor in C++?**
    - [ ] A constructor that initializes an object using another object of the same class.
    - [x] A constructor that creates a copy of an existing object.
    - [ ] A constructor that takes no arguments.
    - [ ] A constructor that initializes an object with default values.

2. **Which of the following is a parameterized constructor?**
    - [ ] `MyClass() {}`
    - [ ] `MyClass(const MyClass &obj) {}`
    - [x] `MyClass(int x, int y) {}`
    - [ ] `MyClass() : x(0), y(0) {}`

3. **What is the purpose of an initializer list in C++?**
    - [ ] To initialize member variables after the constructor body.
    - [x] To initialize member variables before the constructor body.
    - [ ] To create a list of initial values for an array.
    - [ ] To initialize static variables.

4. **Which of the following syntax is correct for an initializer list?**
    - [ ] `MyClass() { x = 0; y = 0; }`
    - [ ] `MyClass() : x(0), y(0) {}`
    - [x] `MyClass() : x(0), y(0) {}`
    - [ ] `MyClass() { x(0); y(0); }`

5. **When is a copy constructor called?**
    - [ ] When an object is destroyed.
    - [ ] When an object is assigned a new value.
    - [x] When an object is passed by value.
    - [ ] When an object is created using the `new` keyword.

6. **Which of the following is true about parameterized constructors?**
    - [ ] They cannot have default arguments.
    - [x] They can have default arguments.
    - [ ] They must always initialize all member variables.
    - [ ] They cannot be overloaded.

7. **What is the correct way to define a copy constructor?**
    - [ ] `MyClass(const MyClass obj) {}`
    - [ ] `MyClass(MyClass &obj) {}`
    - [x] `MyClass(const MyClass &obj) {}`
    - [ ] `MyClass(MyClass obj) {}`

## Code-Based Questions

1. **Given the following class definition, which constructor is the copy constructor?**
    ```cpp
    class MyClass {
    public:
         MyClass() {}
         MyClass(int x) {}
         MyClass(const MyClass &obj) {}
    };
    ```
    - [ ] `MyClass() {}`
    - [ ] `MyClass(int x) {}`
    - [x] `MyClass(const MyClass &obj) {}`

2. **What will be the output of the following code?**
    ```cpp
    class MyClass {
    public:
         int x;
         MyClass(int val) : x(val) {}
    };

    int main() {
         MyClass obj(10);
         std::cout << obj.x;
         return 0;
    }
    ```
    - [ ] 0
    - [ ] 1
    - [x] 10
    - [ ] Compilation error

3. **Which of the following code snippets correctly uses an initializer list?**
    ```cpp
    class MyClass {
    public:
         int x, y;
         MyClass(int a, int b) : x(a), y(b) {}
    };
    ```
    - [ ] `MyClass(int a, int b) { x = a; y = b; }`
    - [ ] `MyClass(int a, int b) : x(a) { y = b; }`
    - [x] `MyClass(int a, int b) : x(a), y(b) {}`
    - [ ] `MyClass(int a, int b) { x(a); y(b); }`

4. **What will be the output of the following code?**
    ```cpp
    class MyClass {
    public:
         int x;
         MyClass(int val) : x(val) {}
         MyClass(const MyClass &obj) : x(obj.x) {}
    };

    int main() {
         MyClass obj1(10);
         MyClass obj2 = obj1;
         std::cout << obj2.x;
         return 0;
    }
    ```
    - [ ] 0
    - [ ] 1
    - [x] 10
    - [ ] Compilation error

5. **Which of the following statements is true about the following code?**
    ```cpp
    class MyClass {
    public:
         int x;
         MyClass(int val) : x(val) {}
    };

    int main() {
         MyClass obj1(10);
         MyClass obj2 = obj1;
         std::cout << obj2.x;
         return 0;
    }
    ```
    - [ ] The code will not compile.
    - [ ] `obj2` will not be a copy of `obj1`.
    - [x] `obj2` will be a copy of `obj1`.
    - [ ] The output will be 0.

6. **What is the purpose of the following code?**
    ```cpp
    class MyClass {
    public:
         int x;
         MyClass(int val) : x(val) {}
         MyClass(const MyClass &obj) : x(obj.x) {}
    };
    ```
    - [ ] To create a default constructor.
    - [ ] To create a parameterized constructor.
    - [x] To create a copy constructor.
    - [ ] To create a destructor.

7. **Which of the following code snippets demonstrates the correct use of a copy constructor?**
    ```cpp
    class MyClass {
    public:
         int x;
         MyClass(int val) : x(val) {}
         MyClass(const MyClass &obj) : x(obj.x) {}
    };

    int main() {
         MyClass obj1(10);
         MyClass obj2 = obj1;
         std::cout << obj2.x;
         return 0;
    }
    ```
    - [ ] `MyClass obj2(obj1);`
    - [ ] `MyClass obj2; obj2 = obj1;`
    - [x] `MyClass obj2 = obj1;`
    - [ ] `MyClass obj2; obj2.x = obj1.x;`

    **Problem: Implementing Copy Constructor and Parameterized Constructor**

    **Explain what to do in the question:**
    You need to create a class `Rectangle` that has a parameterized constructor to initialize the length and width of the rectangle. Additionally, implement a copy constructor to create a copy of an existing `Rectangle` object. Write a program to demonstrate the use of both constructors.

    **Topic Name:**
    Copy Constructor and Parameterized Constructor in C++

    **Input format:**
    - Two integers representing the length and width of the rectangle.

    **Output format:**
    - The area of the original rectangle.
    - The area of the copied rectangle.

    **Example:**

    | Input 1: | Output 1: |
    | -------- | --------- |
    | 5 10     | 50 50     |
    | 3 4      | 12 12     |

    | Input 2: | Output 2: |
    | -------- | --------- |
    | 7 8      | 56 56     |
    | 2 6      | 12 12     |

    **Solution:**
    ```cpp
    #include <iostream>

    class Rectangle {
    public:
        int length, width;

        // Parameterized constructor
        Rectangle(int l, int w) : length(l), width(w) {}

        // Copy constructor
        Rectangle(const Rectangle &rect) : length(rect.length), width(rect.width) {}

        // Function to calculate area
        int area() const {
            return length * width;
        }
    };

    int main() {
        int l1, w1, l2, w2;
        std::cin >> l1 >> w1 >> l2 >> w2;

        // Create original rectangles
        Rectangle rect1(l1, w1);
        Rectangle rect2(l2, w2);

        // Create copies of the rectangles
        Rectangle copyRect1 = rect1;
        Rectangle copyRect2 = rect2;

        // Output the areas
        std::cout << rect1.area() << " " << copyRect1.area() << std::endl;
        std::cout << rect2.area() << " " << copyRect2.area() << std::endl;

        return 0;
    }
    ```