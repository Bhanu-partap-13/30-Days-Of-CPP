# Day 15: Operator Overloading in C++

## Beginner-Friendly Questions

1. **What is operator overloading in C++?**
    - [ ] A way to change the meaning of an operator
    - [ ] A way to create new operators
    - [x] A way to provide a special meaning to an existing operator
    - [ ] A way to overload functions

2. **Which operator cannot be overloaded in C++?**
    - [ ] +
    - [ ] -
    - [ ] *
    - [x] ::

3. **Which keyword is used to define an operator function?**
    - [ ] function
    - [ ] operator
    - [x] operator
    - [ ] overload

4. **Can we overload the assignment operator (=) in C++?**
    - [x] Yes
    - [ ] No

5. **Which of the following is the correct syntax for overloading the + operator?**
    - [ ] `Class operator+(const Class &obj);`
    - [x] `Class operator+(const Class &obj) const;`
    - [ ] `Class operator+(Class &obj);`
    - [ ] `Class operator+(Class obj);`

6. **Can we overload the logical operators (&&, ||) in C++?**
    - [x] Yes
    - [ ] No

7. **Which of the following operators can be overloaded as a member function?**
    - [x] +
    - [ ] ::
    - [x] []
    - [x] ()

## Code-Based Questions

1. **What will be the output of the following code?**
    ```cpp
    class Complex {
    public:
         int real, imag;
         Complex(int r, int i) : real(r), imag(i) {}
         Complex operator+(const Complex &obj) {
              return Complex(real + obj.real, imag + obj.imag);
         }
    };

    int main() {
         Complex c1(3, 4), c2(1, 2);
         Complex c3 = c1 + c2;
         std::cout << c3.real << " + " << c3.imag << "i";
         return 0;
    }
    ```
    - [ ] 3 + 4i
    - [ ] 1 + 2i
    - [x] 4 + 6i
    - [ ] 5 + 7i

2. **What will be the output of the following code?**
    ```cpp
    class Number {
    public:
         int value;
         Number(int v) : value(v) {}
         Number operator-(const Number &obj) {
              return Number(value - obj.value);
         }
    };

    int main() {
         Number n1(10), n2(3);
         Number n3 = n1 - n2;
         std::cout << n3.value;
         return 0;
    }
    ```
    - [ ] 3
    - [ ] 7
    - [x] 7
    - [ ] 13

3. **What will be the output of the following code?**
    ```cpp
    class Point {
    public:
         int x, y;
         Point(int a, int b) : x(a), y(b) {}
         Point operator*(const Point &obj) {
              return Point(x * obj.x, y * obj.y);
         }
    };

    int main() {
         Point p1(2, 3), p2(4, 5);
         Point p3 = p1 * p2;
         std::cout << p3.x << ", " << p3.y;
         return 0;
    }
    ```
    - [ ] 2, 3
    - [ ] 4, 5
    - [x] 8, 15
    - [ ] 6, 8

4. **What will be the output of the following code?**
    ```cpp
    class Fraction {
    public:
         int numerator, denominator;
         Fraction(int n, int d) : numerator(n), denominator(d) {}
         Fraction operator/(const Fraction &obj) {
              return Fraction(numerator * obj.denominator, denominator * obj.numerator);
         }
    };

    int main() {
         Fraction f1(1, 2), f2(3, 4);
         Fraction f3 = f1 / f2;
         std::cout << f3.numerator << "/" << f3.denominator;
         return 0;
    }
    ```
    - [ ] 1/2
    - [ ] 3/4
    - [x] 4/6
    - [ ] 2/3

5. **What will be the output of the following code?**
    ```cpp
    class Vector {
    public:
         int x, y;
         Vector(int a, int b) : x(a), y(b) {}
         Vector operator+(const Vector &obj) {
              return Vector(x + obj.x, y + obj.y);
         }
    };

    int main() {
         Vector v1(1, 2), v2(3, 4);
         Vector v3 = v1 + v2;
         std::cout << v3.x << ", " << v3.y;
         return 0;
    }
    ```
    - [ ] 1, 2
    - [ ] 3, 4
    - [x] 4, 6
    - [ ] 5, 7

6. **What will be the output of the following code?**
    ```cpp
    class Matrix {
    public:
         int a, b;
         Matrix(int x, int y) : a(x), b(y) {}
         Matrix operator-(const Matrix &obj) {
              return Matrix(a - obj.a, b - obj.b);
         }
    };

    int main() {
         Matrix m1(5, 6), m2(2, 3);
         Matrix m3 = m1 - m2;
         std::cout << m3.a << ", " << m3.b;
         return 0;
    }
    ```
    - [ ] 5, 6
    - [ ] 2, 3
    - [x] 3, 3
    - [ ] 7, 9

7. **What will be the output of the following code?**
    ```cpp
    class Time {
    public:
         int hours, minutes;
         Time(int h, int m) : hours(h), minutes(m) {}
         Time operator+(const Time &obj) {
              int totalMinutes = (hours + obj.hours) * 60 + (minutes + obj.minutes);
              return Time(totalMinutes / 60, totalMinutes % 60);
         }
    };

    int main() {
         Time t1(1, 30), t2(2, 45);
         Time t3 = t1 + t2;
         std::cout << t3.hours << " hours and " << t3.minutes << " minutes";
         return 0;
    }
    ```
    - [ ] 1 hour and 30 minutes
    - [ ] 2 hours and 45 minutes
    - [x] 4 hours and 15 minutes
    - [ ] 3 hours and 75 minutes

## Homework Question (Try it Yourself You can do It)

**Explain what you have to do in the question.**

**Topic Name: Operator Overloading in C++**

**Input format:**
    - The input that the question requires

**Output format:**
    - The output that the question requires

**Example:**

    | Input 1: | Output 1: |
    | -------- | --------- |
    | input value | output value |
    | input value | output value |

    | Input 2: | Output 2: |
    | -------- | --------- |
    | input value | output value |
    | input value | output value |


## Problem 1: Overloading the Equality Operator

**Explain what you have to do in the question.**

**Topic Name: Operator Overloading in C++**

**Input format:**
    - Two integers representing the real and imaginary parts of two complex numbers.

**Output format:**
    - A boolean value indicating whether the two complex numbers are equal.

**Example:**

    | Input 1: | Output 1: |
    | -------- | --------- |
    | 3 4 3 4 | true |
    | 1 2 3 4 | false |

**Solution in C++:**
```cpp
    #include <iostream>

    class Complex {
    public:
        int real, imag;
        Complex(int r, int i) : real(r), imag(i) {}
        bool operator==(const Complex &obj) {
            return (real == obj.real && imag == obj.imag);
        }
    };

    int main() {
        Complex c1(3, 4), c2(3, 4);
        if (c1 == c2)
            std::cout << "true";
        else
            std::cout << "false";
        return 0;
    }
```

## Problem 2: Overloading the Multiplication Operator

**Explain what you have to do in the question.**

**Topic Name: Operator Overloading in C++**

**Input format:**
    - Two integers representing the x and y coordinates of two points.

**Output format:**
    - The product of the two points' coordinates.

**Example:**

    | Input 1: | Output 1: |
    | -------- | --------- |
    | 2 3 4 5 | 8 15 |
    | 1 2 3 4 | 3 8 |

    **Solution in C++:**
```cpp
    #include <iostream>

    class Point {
    public:
        int x, y;
        Point(int a, int b) : x(a), y(b) {}
        Point operator*(const Point &obj) {
            return Point(x * obj.x, y * obj.y);
        }
    };

    int main() {
        Point p1(2, 3), p2(4, 5);
        Point p3 = p1 * p2;
        std::cout << p3.x << ", " << p3.y;
        return 0;
    }
```