# Day 6: Function Overloading, Friend Function, and Scope Rules in C++

## Multiple Choice Questions (MCQs)

### Beginner Friendly Questions

1. **What is function overloading in C++?**
    - [ ] A function with the same name but different return types
    - [x] A function with the same name but different parameters
    - [ ] A function with the same name and same parameters
    - [ ] A function with different names and different parameters

2. **Which of the following is true about friend functions?**
    - [x] Friend functions can access private and protected members of a class
    - [ ] Friend functions can only access public members of a class
    - [ ] Friend functions are members of the class
    - [ ] Friend functions cannot access any members of a class

3. **What is the scope of a variable declared inside a function?**
    - [ ] Global scope
    - [ ] Class scope
    - [x] Local scope
    - [ ] Namespace scope

4. **Which keyword is used to declare a friend function?**
    - [ ] private
    - [ ] public
    - [ ] protected
    - [x] friend

5. **Can a function be overloaded based on the return type alone?**
    - [ ] Yes
    - [x] No

6. **What is the default access level of members in a class?**
    - [ ] public
    - [ ] protected
    - [x] private
    - [ ] friend

7. **Which of the following is not a scope in C++?**
    - [ ] Local scope
    - [ ] Global scope
    - [ ] Namespace scope
    - [x] Function scope

### Code-Based Questions

1. **What will be the output of the following code?**
    ```cpp
    #include <iostream>
    using namespace std;

    void print(int i) {
         cout << "Integer: " << i << endl;
    }

    void print(double f) {
         cout << "Float: " << f << endl;
    }

    int main() {
         print(10);
         print(10.5);
         return 0;
    }
    ```
    - [x] Integer: 10
            Float: 10.5
    - [ ] Integer: 10
            Integer: 10
    - [ ] Float: 10.0
            Float: 10.5
    - [ ] Integer: 10.5
            Float: 10.0

2. **What will be the output of the following code?**
    ```cpp
    #include <iostream>
    using namespace std;

    class Test {
         int x;
    public:
         Test(int a) : x(a) {}
         friend void show(Test t);
    };

    void show(Test t) {
         cout << "Value of x: " << t.x << endl;
    }

    int main() {
         Test t(5);
         show(t);
         return 0;
    }
    ```
    - [x] Value of x: 5
    - [ ] Value of x: 0
    - [ ] Value of x: 10
    - [ ] Value of x: -1

3. **What will be the output of the following code?**
    ```cpp
    #include <iostream>
    using namespace std;

    int x = 10;

    void display() {
         int x = 20;
         cout << "Local x: " << x << endl;
         cout << "Global x: " << ::x << endl;
    }

    int main() {
         display();
         return 0;
    }
    ```
    - [x] Local x: 20
            Global x: 10
    - [ ] Local x: 10
            Global x: 20
    - [ ] Local x: 20
            Global x: 20
    - [ ] Local x: 10
            Global x: 10

4. **What will be the output of the following code?**
    ```cpp
    #include <iostream>
    using namespace std;

    void func(int a) {
         cout << "Function with int: " << a << endl;
    }

    void func(double a) {
         cout << "Function with double: " << a << endl;
    }

    int main() {
         func(5);
         func(5.5);
         return 0;
    }
    ```
    - [x] Function with int: 5
            Function with double: 5.5
    - [ ] Function with int: 5
            Function with int: 5
    - [ ] Function with double: 5.0
            Function with double: 5.5
    - [ ] Function with double: 5.5
            Function with int: 5

5. **What will be the output of the following code?**
    ```cpp
    #include <iostream>
    using namespace std;

    class A {
         int x;
    public:
         A(int i) : x(i) {}
         friend class B;
    };

    class B {
    public:
         void show(A a) {
              cout << "Value of x: " << a.x << endl;
         }
    };

    int main() {
         A a(10);
         B b;
         b.show(a);
         return 0;
    }
    ```
    - [x] Value of x: 10
    - [ ] Value of x: 0
    - [ ] Value of x: 5
    - [ ] Value of x: -1

6. **What will be the output of the following code?**
    ```cpp
    #include <iostream>
    using namespace std;

    void func(int a, int b = 10) {
         cout << "a: " << a << ", b: " << b << endl;
    }

    int main() {
         func(5);
         func(5, 20);
         return 0;
    }
    ```
    - [x] a: 5, b: 10
            a: 5, b: 20
    - [ ] a: 5, b: 20
            a: 5, b: 10
    - [ ] a: 5, b: 10
            a: 5, b: 10
    - [ ] a: 5, b: 20
            a: 5, b: 20

7. **What will be the output of the following code?**
    ```cpp
    #include <iostream>
    using namespace std;

    void func(int a) {
         cout << "Function with int: " << a << endl;
    }

    void func(char a) {
         cout << "Function with char: " << a << endl;
    }

    int main() {
         func(5);
         func('A');
         return 0;
    }
    ```
    - [x] Function with int: 5
            Function with char: A
    - [ ] Function with int: 5
            Function with int: 65
    - [ ] Function with char: 5
            Function with char: A
    - [ ] Function with char: 5
            Function with int: A

## Coding Problems


**Write a C++ program that demonstrates the use of friend functions to access private members of two classes and perform arithmetic operations on them.**

**Function Name:** `performOperations`

**Input format:**
- The program does not take any input.

**Output format:**
- The program displays the sum and difference of the private members of two classes.

**Example:**

| Output: |
| ------- |
| Sum: 15 |
| Difference: 5 |

**Solution:**

```cpp
    #include <iostream>
    using namespace std;

    class ClassA;
    class ClassB;

    class ClassA {
        int value;
    public:
        ClassA(int v) : value(v) {}
        friend void performOperations(ClassA, ClassB);
    };

    class ClassB {
        int value;
    public:
        ClassB(int v) : value(v) {}
        friend void performOperations(ClassA, ClassB);
    };

    void performOperations(ClassA a, ClassB b) {
        cout << "Sum: " << a.value + b.value << endl;
        cout << "Difference: " << a.value - b.value << endl;
    }

    int main() {
        ClassA a(10);
        ClassB b(5);
        performOperations(a, b);
        return 0;
    }
```

**Write a C++ program that demonstrates the use of function overloading to calculate the area of different shapes (circle, rectangle, and triangle).**

**Function Name:** `calculateArea`

**Input format:**
- The program does not take any input.

**Output format:**
- The program displays the area of the shapes.

**Example:**

| Output: |
| ------- |
| Area of circle: 78.5 |
| Area of rectangle: 50 |
| Area of triangle: 25 |

**Solution:**

```cpp
#include <iostream>
using namespace std;

const double PI = 3.14;

double calculateArea(double radius) {
    return PI * radius * radius;
}

double calculateArea(double length, double width) {
    return length * width;
}

double calculateArea(double base, double height, int) {
    return 0.5 * base * height;
}

int main() {
    cout << "Area of circle: " << calculateArea(5.0) << endl;
    cout << "Area of rectangle: " << calculateArea(10.0, 5.0) << endl;
    cout << "Area of triangle: " << calculateArea(10.0, 5.0, 0) << endl;
    return 0;
}
```

### Homework Question

**Write a C++ program that demonstrates the use of friend functions to compare the private members of two classes and determine which one is greater.**

**Function Name:** `compareValues`

**Input format:**
- The program does not take any input.

**Output format:**
- The program displays which class has the greater value or if they are equal.

**Example:**

| Output: |
| ------- |
| ClassA has the greater value |
or
| ClassB has the greater value |
or
| Both values are equal |


> ~This content was created by [Bhanu Partap](https://github.com/Bhanu-partap-13). If you have any questions or suggestions, feel free to reach out or contribute to the repository.