# Day 9: Class Pointers in C++ : memo:
## Beginner-Friendly Questions

1. What is a pointer in C++?
    - [x] A variable that stores the address of another variable
    - [ ] A function that returns the address of a variable
    - [ ] A keyword used to define a class
    - [ ] A type of loop in C++

2. How do you declare a pointer to an integer in C++?
    - [x] `int* ptr;`
    - [ ] `int ptr*;`
    - [ ] `int &ptr;`
    - [ ] `int ptr&;`

3. What does the `this` pointer in a class refer to?
    - [x] The current object of the class
    - [ ] The base class of the current class
    - [ ] The parent class of the current class
    - [ ] The derived class of the current class

4. How do you access a member function using a pointer to an object?
    - [x] `objectPointer->memberFunction();`
    - [ ] `objectPointer.memberFunction();`
    - [ ] `objectPointer*memberFunction();`
    - [ ] `objectPointer&memberFunction();`

5. What is the correct syntax to declare a pointer to a class object?
    - [x] `ClassName* objectPointer;`
    - [ ] `ClassName objectPointer*;`
    - [ ] `ClassName &objectPointer;`
    - [ ] `ClassName objectPointer&;`

6. Which operator is used to access the value at the address stored in a pointer?
    - [x] `*`
    - [ ] `&`
    - [ ] `->`
    - [ ] `.`

7. What is the output of the following code?
    ```cpp
    int a = 10;
    int* ptr = &a;
    cout << *ptr;
    ```
    - [x] 10
    - [ ] Address of `a`
    - [ ] `ptr`
    - [ ] Compilation error


## Code-Based Questions

1. Given the following code, what will be the output?
    ```cpp
    class MyClass {
    public:
         int x;
         MyClass(int val) : x(val) {}
    };

    int main() {
         MyClass obj(5);
         MyClass* ptr = &obj;
         cout << ptr->x;
         return 0;
    }
    ```
    - [x] 5
    - [ ] Address of `obj`
    - [ ] Compilation error
    - [ ] Undefined behavior

2. What will be the output of the following code?
    ```cpp
    class MyClass {
    public:
         int x;
         MyClass(int val) : x(val) {}
         void print() {
              cout << this->x;
         }
    };

    int main() {
         MyClass obj(10);
         obj.print();
         return 0;
    }
    ```
    - [x] 10
    - [ ] Address of `obj`
    - [ ] Compilation error
    - [ ] Undefined behavior

3. What does the following code snippet do?
    ```cpp
    int a = 20;
    int* ptr = &a;
    *ptr = 30;
    cout << a;
    ```
    - [x] Prints 30
    - [ ] Prints 20
    - [ ] Compilation error
    - [ ] Undefined behavior

4. What will be the output of the following code?
    ```cpp
    class MyClass {
    public:
         int x;
         MyClass(int val) : x(val) {}
    };

    int main() {
         MyClass obj(15);
         MyClass* ptr = &obj;
         cout << (*ptr).x;
         return 0;
    }
    ```
    - [x] 15
    - [ ] Address of `obj`
    - [ ] Compilation error
    - [ ] Undefined behavior

5. What will be the output of the following code?
    ```cpp
    class MyClass {
    public:
         int x;
         MyClass(int val) : x(val) {}
    };

    int main() {
         MyClass obj(25);
         MyClass* ptr = &obj;
         ptr->x = 35;
         cout << obj.x;
         return 0;
    }
    ```
    - [x] 35
    - [ ] 25
    - [ ] Compilation error
    - [ ] Undefined behavior

6. What will be the output of the following code?
    ```cpp
    class MyClass {
    public:
         int x;
         MyClass(int val) : x(val) {}
    };

    int main() {
         MyClass obj(40);
         MyClass* ptr = &obj;
         cout << ptr->x;
         return 0;
    }
    ```
    - [x] 40
    - [ ] Address of `obj`
    - [ ] Compilation error
    - [ ] Undefined behavior

7. What will be the output of the following code?
    ```cpp
    class MyClass {
    public:
         int x;
         MyClass(int val) : x(val) {}
    };

    int main() {
         MyClass obj(50);
         MyClass* ptr = &obj;
         cout << (*ptr).x;
         return 0;
    }
    ```
    - [x] 50
    - [ ] Address of `obj`
    - [ ] Compilation error
    - [ ] Undefined behavior


    ## Advanced Coding Problems

    ### Problem 1: Using `this` Pointer in a Class

    **Explain what you have to do in the question:**
    Write a C++ program that demonstrates the use of the `this` pointer within a class to access and modify the member variables.

    **Topic name:**
    Using `this` Pointer in a Class

    **Input format:**
    - No input required

    **Output format:**
    - The program should output the value of the member variable after modification using the `this` pointer.

    **Example:**

    | Input 1: | Output 1: |
    | -------- | --------- |
    | No input | 20        |

    ```cpp
    class MyClass {
    public:
        int x;
        MyClass(int val) : x(val) {}
        void setX(int val) {
            this->x = val;
        }
        void print() {
            cout << this->x;
        }
    };

    int main() {
        MyClass obj(10);
        obj.setX(20);
        obj.print();
        return 0;
    }
    ```

    ### Problem 2: Pointer to a Class Object

    **Explain what you have to do in the question:**
    Write a C++ program that demonstrates how to use a pointer to a class object to access and modify its member variables.

    **Topic name:**
    Pointer to a Class Object

    **Input format:**
    - No input required

    **Output format:**
    - The program should output the value of the member variable after modification using the pointer to the class object.

    **Example:**

    | Input 1: | Output 1: |
    | -------- | --------- |
    | No input | 30        |

    ```cpp
    class MyClass {
    public:
        int x;
        MyClass(int val) : x(val) {}
    };

    int main() {
        MyClass obj(10);
        MyClass* ptr = &obj;
        ptr->x = 30;
        cout << obj.x;
        return 0;
    }
    ```

    ### Problem 3: Accessing Member Function Using Pointer to Object

    **Explain what you have to do in the question:**
    Write a C++ program that demonstrates how to access a member function using a pointer to an object.

    **Topic name:**
    Accessing Member Function Using Pointer to Object

    **Input format:**
    - No input required

    **Output format:**
    - The program should output the value returned by the member function accessed using the pointer to the object.

    **Example:**

    | Input 1: | Output 1: |
    | -------- | --------- |
    | No input | 40        |

    ```cpp
    class MyClass {
    public:
        int x;
        MyClass(int val) : x(val) {}
        void print() {
            cout << x;
        }
    };

    int main() {
        MyClass obj(40);
        MyClass* ptr = &obj;
        ptr->print();
        return 0;
    }
    ```

    ### Problem 4: Pointer Types in C++

    **Explain what you have to do in the question:**
    Write a C++ program that demonstrates the use of different pointer types (e.g., pointer to int, pointer to double) and how to access and modify the values they point to.

    **Topic name:**
    Pointer Types in C++

    **Input format:**
    - No input required

    **Output format:**
    - The program should output the values of the variables after modification using the pointers.

    **Example:**

    | Input 1: | Output 1: |
    | -------- | --------- |
    | No input | 50 60.5   |

    ```cpp
    int main() {
        int a = 10;
        double b = 20.5;
        int* ptrA = &a;
        double* ptrB = &b;
        *ptrA = 50;
        *ptrB = 60.5;
        cout << a << " " << b;
        return 0;
    }
    ```

    ### Problem 5: Pointers in Class and Object

    **Explain what you have to do in the question:**
    Write a C++ program that demonstrates the use of pointers within a class to dynamically allocate memory for an array and access its elements.

    **Topic name:**
    Pointers in Class and Object

    **Input format:**
    - No input required

    **Output format:**
    - The program should output the elements of the array after modification.

    **Example:**

    | Input 1: | Output 1: |
    | -------- | --------- |
    | No input | 1 2 3     |

    ```cpp
    class MyClass {
    public:
        int* arr;
        int size;
        MyClass(int s) : size(s) {
            arr = new int[size];
        }
        void setValues() {
            for (int i = 0; i < size; ++i) {
                arr[i] = i + 1;
            }
        }
        void printValues() {
            for (int i = 0; i < size; ++i) {
                cout << arr[i] << " ";
            }
        }
        ~MyClass() {
            delete[] arr;
        }
    };

    int main() {
        MyClass obj(3);
        obj.setValues();
        obj.printValues();
        return 0;
    }
    ```

### Problem 6: Dynamic Memory Allocation and `this` Pointer

**Explain what you have to do in the question:**
    Write a C++ program that demonstrates the use of the `this` pointer within a class to dynamically allocate memory for an array, modify its elements, and access them.

**Topic name:**
    Dynamic Memory Allocation and `this` Pointer

**Input format:**
    - The first line contains an integer `n` representing the size of the array.
    - The second line contains `n` integers representing the elements to be stored in the array.

**Output format:**
    - The program should output the elements of the array after modification using the `this` pointer.

**Example:**

| Input 1: | Output 1: |
| -------- | --------- |
| 3        | 2 4 6     |
| 1 2 3    |           |

| Input 2: | Output 2: |
| -------- | --------- |
| 4        | 4 8 12 16 |
| 1 2 3 4  |           |

```cpp
    #include <iostream>
    using namespace std;

    class MyClass {
    public:
        int* arr;
        int size;
        MyClass(int s) : size(s) {
            arr = new int[size];
        }
        void setValues(int* values) {
            for (int i = 0; i < size; ++i) {
                this->arr[i] = values[i] * 2;
            }
        }
        void printValues() {
            for (int i = 0; i < size; ++i) {
                cout << this->arr[i] << " ";
            }
            cout << endl;
        }
        ~MyClass() {
            delete[] arr;
        }
    };

    int main() {
        int n;
        cin >> n;
        int* values = new int[n];
        for (int i = 0; i < n; ++i) {
            cin >> values[i];
        }
        MyClass obj(n);
        obj.setValues(values);
        obj.printValues();
        delete[] values;
        return 0;
    }
```