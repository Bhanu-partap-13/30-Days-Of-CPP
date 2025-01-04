# Day 18: Type Conversions in C++

## Beginner-Friendly Questions

1. What is type conversion in C++?
    - [x] A process of converting one data type to another.
    - [ ] A process of converting one function to another.
    - [ ] A process of converting one class to another.
    - [ ] A process of converting one object to another.

2. Which type of conversion is done automatically by the compiler?
    - [ ] Explicit conversion
    - [x] Implicit conversion
    - [ ] Manual conversion
    - [ ] User-defined conversion

3. How do you define a conversion function in a class?
    - [ ] By using the `convert` keyword
    - [x] By using the `operator` keyword
    - [ ] By using the `cast` keyword
    - [ ] By using the `transform` keyword

4. What is the purpose of a conversion constructor?
    - [ ] To convert a class object to a basic type
    - [x] To convert a basic type to a class object
    - [ ] To convert one class object to another class object
    - [ ] To convert a function to a class object

5. Which of the following is an example of a conversion function?
    - [ ] `operator int()`
    - [ ] `operator float()`
    - [ ] `operator double()`
    - [x] All of the above

6. What is the syntax for defining a conversion constructor?
    - [x] `ClassName(Type arg)`
    - [ ] `ClassName::operator Type()`
    - [ ] `Type::operator ClassName()`
    - [ ] `ClassName(Type arg1, Type arg2)`

7. Which of the following is true about type conversion?
    - [x] It can be done between basic types and class types.
    - [ ] It can only be done between basic types.
    - [ ] It can only be done between class types.
    - [ ] It cannot be done in C++.

## Code-Based Questions

1. Given the following code, what will be the output?
```cpp
    class A {
    public:
         operator int() { return 10; }
    };
    A a;
    int x = a;
    std::cout << x;
```
- [x] 10
- [ ] 0
- [ ] 1
- [ ] Compilation error
    
2. What will be the output of the following code?
    ```cpp
        class B {
        public:
            B(int x) { std::cout << x; }
        };
        int main() {
            B b = 20;
            return 0;
        }
    ```
    - [x] 20
    - [ ] 0
    - [ ] 1
    - [ ] Compilation error
    
3. What is the result of the following code?
    ```cpp
        class C {
        public:
            operator double() { return 5.5; }
        };
        C c;
        double y = c;
        std::cout << y;
    ```
    - [x] 5.5
    - [ ] 0.0
    - [ ] 1.0
    - [ ] Compilation error
    
4. What will be printed by the following code?
    ```cpp
        class D {
        public:
            D(float f) { std::cout << f; }
        };
        int main() {
            D d = 3.14f;
            return 0;
        }
    ```
    - [x] 3.14
    - [ ] 0.0
    - [ ] 1.0
    - [ ] Compilation error
    
5. What does the following code output?
    ```cpp
        class E {
        public:
            operator char() { return 'A'; }
        };
        E e;
        char ch = e;
        std::cout << ch;
    ```
    - [x] A
    - [ ] a
    - [ ] 0
    - [ ] Compilation error
    
6. What will be the output of this code?
    ```cpp
        class F {
        public:
            F(double d) { std::cout << d; }
        };
        int main() {
            F f = 7.89;
            return 0;
        }
    ```
    - [x] 7.89
    - [ ] 0.0
    - [ ] 1.0
    - [ ] Compilation error
    
7. What is the output of the following code?
    ```cpp
        class G {
        public:
            operator bool() { return true; }
        };
        G g;
        bool b = g;
        std::cout << b;
    ```
    - [x] 1
    - [ ] 0
    - [ ] true
    - [ ] Compilation error

## Coding Based - Problem Statements



# Class to Basic, Basic to Class, Class to Class Type Conversion

## Problem 1: Class to Basic Type Conversion

**Problem Statement:**
Create a class `Temperature` that stores temperature in Celsius. Implement a conversion operator to convert the temperature to Fahrenheit.

**Input format:**
- A single integer representing the temperature in Celsius.

**Output format:**
- A single integer representing the temperature in Fahrenheit.

**Example:**

| Input 1: | Output 1: |
| -------- | --------- |
| 0        | 32        |
| 100      | 212       |

| Input 2: | Output 2: |
| -------- | --------- |
| -40      | -40       |
| 37       | 98        |

**Solution:**
```cpp
#include<iostream>
using namespace std;

class Temperature {
    int celsius;
public:
    Temperature(int c) : celsius(c) {}
    operator int() {
        return (celsius * 9/5) + 32;
    }
};

int main() {
    Temperature temp(100);
    int fahrenheit = temp;
    std::cout << fahrenheit << std::endl;
    return 0;
}
```

## Problem 2: Basic to Class Type Conversion

**Problem Statement:**
Create a class `Distance` that stores distance in meters. Implement a constructor that converts distance from kilometers to meters.

**Input format:**
- A single integer representing the distance in kilometers.

**Output format:**
- A single integer representing the distance in meters.
**Example:**

| Input 1: | Output 1: |
| -------- | --------- |
| 1        | 1000        |
| 5        | 5000       |

| Input 2: | Output 2: |
| -------- | --------- |
| 0        | 0         |
| 10       | 10000     |

**Solution:**
```cpp
#include<iostream>
using namespace std;

class Distance {
    int meters;
public:
    Distance(int km) : meters(km * 1000) {}
    int getMeters() {
        return meters;
    }
};

int main() {
    Distance dist(5);
    std::cout << dist.getMeters() << std::endl;
    return 0;
}
```

## Problem 3: Class to Class Type Conversion

**Problem Statement:**
Create two classes `Rectangle` and `Square`. Implement a conversion operator in `Square` to convert it to `Rectangle`.
**Input format:**
- A single integer representing the side length of the square.

**Output format:**
- Two integers representing the length and breadth of the rectangle.
**Example:**

| Input 1: | Output 1: |
| -------- | --------- |
|    4     | 4 4       |
|    5     | 5 5       |

| Input 2: | Output 2: |
| -------- | --------- |
|    6     | 6 6       |
|    7     | 7 7       |

**Solution:**
```cpp
#include<iostream>
using namespace std;

class Rectangle {
    int length, breadth;
public:
    Rectangle(int l, int b) : length(l), breadth(b) {}
    void display() {
        std::cout << length << " " << breadth << std::endl;
    }
};

class Square {
    int side;
public:
    Square(int s) : side(s) {}
    operator Rectangle() {
        return Rectangle(side, side);
    }
};

int main() {
    Square sq(5);
    Rectangle rect = sq;
    rect.display();
    return 0;
}
```
















































































