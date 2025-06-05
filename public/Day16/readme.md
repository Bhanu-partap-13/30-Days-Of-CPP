# Day 16: Unary and Binary Operator Overloading in C++

## Beginner-Friendly Questions

1. What is operator overloading in C++?
    - [ ] A way to change the syntax of operators
    - [x] A way to provide custom implementation for operators
    - [ ] A way to create new operators
    - [ ] A way to overload functions

2. Which keyword is used to define operator overloading in C++?
    - [ ] overload
    - [ ] operator_overload
    - [x] operator
    - [ ] op_overload

3. Can all operators be overloaded in C++?
    - [ ] Yes
    - [x] No
    - [ ] Only arithmetic operators
    - [ ] Only logical operators

4. Which of the following operators cannot be overloaded?
    - [ ] +
    - [ ] -
    - [ ] *
    - [x] ::

5. How do you declare a unary operator overload function?
    - [ ] returnType operator operatorSymbol()
    - [x] returnType operator operatorSymbol()
    - [ ] returnType operatorSymbol operator()
    - [ ] returnType operatorSymbol()

6. How do you declare a binary operator overload function?
    - [ ] returnType operator operatorSymbol()
    - [ ] returnType operator operatorSymbol(type)
    - [x] returnType operator operatorSymbol(const type&)
    - [ ] returnType operatorSymbol(type)

7. What is the return type of an overloaded assignment operator?
    - [ ] void
    - [ ] bool
    - [x] ClassName&
    - [ ] int

## Code-Based Questions

1. Given the following code, what will be the output?
    ```cpp
    class Complex {
    public:
         int real, imag;
         Complex(int r = 0, int i = 0) : real(r), imag(i) {}
         Complex operator + (const Complex& obj) {
              Complex res;
              res.real = real + obj.real;
              res.imag = imag + obj.imag;
              return res;
         }
    };
    int main() {
         Complex c1(3, 2), c2(1, 7);
         Complex c3 = c1 + c2;
         cout << c3.real << " + i" << c3.imag;
         return 0;
    }
    ```
    - [ ] 3 + i2
    - [ ] 1 + i7
    - [x] 4 + i9
    - [ ] 0 + i0

2. What is the correct way to overload the unary minus operator for a class `Number`?
    ```cpp
    class Number {
    public:
         int value;
         Number(int v) : value(v) {}
         // Overload unary minus operator
         Number operator-() {
              return Number(-value);
         }
    };
    ```
    - [x] Correct
    - [ ] Incorrect

3. How do you overload the equality operator (==) for a class `Point`?
    ```cpp
    class Point {
    public:
         int x, y;
         Point(int x = 0, int y = 0) : x(x), y(y) {}
         bool operator==(const Point& p) {
              return (x == p.x && y == p.y);
         }
    };
    ```
    - [x] Correct
    - [ ] Incorrect

4. What will be the output of the following code?
    ```cpp
    class Test {
    public:
         int value;
         Test(int v) : value(v) {}
         Test operator++() {
              ++value;
              return *this;
         }
    };
    int main() {
         Test t(5);
         ++t;
         cout << t.value;
         return 0;
    }
    ```
    - [ ] 4
    - [x] 6
    - [ ] 5
    - [ ] 7

5. How do you overload the addition operator (+) for a class `Vector`?
    ```cpp
    class Vector {
    public:
         int x, y;
         Vector(int x = 0, int y = 0) : x(x), y(y) {}
         Vector operator+(const Vector& v) {
              return Vector(x + v.x, y + v.y);
         }
    };
    ```
    - [x] Correct
    - [ ] Incorrect

6. What will be the output of the following code?
    ```cpp
    class Counter {
    public:
         int count;
         Counter() : count(0) {}
         Counter operator++(int) {
              Counter temp = *this;
              count++;
              return temp;
         }
    };
    int main() {
         Counter c;
         c++;
         cout << c.count;
         return 0;
    }
    ```
    - [ ] 0
    - [x] 1
    - [ ] 2
    - [ ] 3

7. How do you overload the less than operator (<) for a class `Box`?
    ```cpp
    class Box {
    public:
         int length, width, height;
         Box(int l, int w, int h) : length(l), width(w), height(h) {}
         bool operator<(const Box& b) {
              return (length * width * height) < (b.length * b.width * b.height);
         }
    };
    ```
    - [x] Correct
    - [ ] Incorrect


## Homework Problem

**Explain what you have to do in the question:**

    Write a C++ program to overload the unary minus operator for a class `Integer`. The program should demonstrate how the unary minus operator can be used to negate the value of an integer.

**Topic Name:**

    Unary Operator Overloading

**Input format:**

    - An integer value

**Output format:**

    - The negated integer value

**Example:**

    | Input 1: | Output 1: |
    | -------- | --------- |
    | 5        | -5        |
    | -3       | 3         |

    | Input 2: | Output 2: |
    | -------- | --------- |
    | 10       | -10       |
    | -7       | 7         |


## Coding-Based Problem 1

**Explain what you have to do in the question:**

    Write a C++ program to overload the addition operator (+) for a class `ComplexNumber`. The program should demonstrate how two complex numbers can be added using the overloaded addition operator.

**Topic Name:**

    Binary Operator Overloading

**Input format:**

    - Two complex numbers (real and imaginary parts)

**Output format:**

    - The sum of the two complex numbers

**Example:**

    | Input 1: | Output 1: |
    | -------- | --------- |
    | (3, 2)   | (4, 9)    |
    | (1, 7)   |           |

    | Input 2: | Output 2: |
    | -------- | --------- |
    | (5, 3)   | (8, 6)    |
    | (3, 3)   |           |

**Solution in C++:**

```cpp
    #include <iostream>
    using namespace std;

    class ComplexNumber {
    public:
        int real, imag;
        ComplexNumber(int r = 0, int i = 0) : real(r), imag(i) {}
        ComplexNumber operator + (const ComplexNumber& obj) {
            ComplexNumber res;
            res.real = real + obj.real;
            res.imag = imag + obj.imag;
            return res;
        }
    };

    int main() {
        ComplexNumber c1(3, 2), c2(1, 7);
        ComplexNumber c3 = c1 + c2;
        cout << c3.real << " + i" << c3.imag;
        return 0;
    }
```

## Coding-Based Problem 2

**Explain what you have to do in the question:**

    Write a C++ program to overload the equality operator (==) for a class `Rectangle`. The program should demonstrate how two rectangles can be compared for equality based on their dimensions.

**Topic Name:**

    Binary Operator Overloading

**Input format:**

    - Dimensions of two rectangles (length and width)

**Output format:**

    - Whether the two rectangles are equal or not

**Example:**

    | Input 1: | Output 1: |
    | -------- | --------- |
    | (4, 5)   | Equal     |
    | (4, 5)   |           |

    | Input 2: | Output 2: |
    | -------- | --------- |
    | (6, 7)   | Not Equal |
    | (5, 7)   |           |

**Solution in C++:**

```cpp
    #include <iostream>
    using namespace std;

    class Rectangle {
    public:
        int length, width;
        Rectangle(int l = 0, int w = 0) : length(l), width(w) {}
        bool operator == (const Rectangle& obj) {
            return (length == obj.length && width == obj.width);
        }
    };

    int main() {
        Rectangle r1(4, 5), r2(4, 5);
        if (r1 == r2) {
            cout << "Equal";
        } else {
            cout << "Not Equal";
        }
        return 0;
    }
```