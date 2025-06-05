# Day 12: Constructors and Destructors in C++
## Beginner-Friendly Questions

1. **What is a constructor in C++?**
    - [ ] A function that is called when an object is destroyed
    - [x] A special member function that is called when an object is created
    - [ ] A function that initializes static members
    - [ ] A function that is called to allocate memory

2. **Which of the following is true about destructors?**
    - [x] They have the same name as the class but preceded with a tilde (~)
    - [ ] They can be overloaded
    - [ ] They can take arguments
    - [ ] They return a value

3. **When is a destructor called?**
    - [ ] When an object is created
    - [ ] When a class is defined
    - [x] When an object goes out of scope or is explicitly deleted
    - [ ] When a function is called

4. **Can constructors be overloaded in C++?**
    - [x] Yes
    - [ ] No

5. **What is the purpose of a default constructor?**
    - [ ] To initialize static members
    - [x] To initialize objects with default values
    - [ ] To allocate memory
    - [ ] To deallocate memory

6. **Which of the following is a correct way to define a constructor?**
    - [ ] `className() { /* code */ }`
    - [x] `className::className() { /* code */ }`
    - [ ] `void className() { /* code */ }`
    - [ ] `~className() { /* code */ }`

7. **What happens if you do not define a destructor in your class?**
    - [ ] The program will not compile
    - [ ] The class will not have a destructor
    - [x] The compiler provides a default destructor
    - [ ] The class will not be able to create objects

## Questions Based on Code

1. **Given the following code, what will be the output?**
    ```cpp
    class Test {
    public:
         Test() { std::cout << "Constructor called\n"; }
         ~Test() { std::cout << "Destructor called\n"; }
    };

    int main() {
         Test t;
         return 0;
    }
    ```
    - [x] Constructor called
    - [x] Destructor called
    - [ ] Constructor called
         Destructor not called
    - [ ] No output

2. **What will be the output of the following code?**
    ```cpp
    class Test {
    public:
         Test() { std::cout << "Constructor\n"; }
         ~Test() { std::cout << "Destructor\n"; }
    };

    void func() {
         Test t;
    }

    int main() {
         func();
         std::cout << "End of main\n";
         return 0;
    }
    ```
    - [x] Constructor
         Destructor
         End of main
    - [ ] Constructor
         End of main
         Destructor
    - [ ] End of main
         Constructor
         Destructor
    - [ ] No output

3. **What will be the output of the following code?**
    ```cpp
    class Test {
    public:
         Test() { std::cout << "Constructor\n"; }
         ~Test() { std::cout << "Destructor\n"; }
    };

    int main() {
         Test t1;
         {
              Test t2;
         }
         std::cout << "End of scope\n";
         return 0;
    }
    ```
    - [x] Constructor
         Constructor
         Destructor
         End of scope
         Destructor
    - [ ] Constructor
         Constructor
         End of scope
         Destructor
         Destructor
    - [ ] Constructor
         Destructor
         Constructor
         End of scope
         Destructor
    - [ ] No output

4. **What will be the output of the following code?**
    ```cpp
    class Test {
    public:
         Test() { std::cout << "Constructor\n"; }
         ~Test() { std::cout << "Destructor\n"; }
    };

    int main() {
         Test* t = new Test();
         delete t;
         return 0;
    }
    ```
    - [x] Constructor
         Destructor
    - [ ] Constructor
         No output
    - [ ] Destructor
         Constructor
    - [ ] No output

5. **What will be the output of the following code?**
    ```cpp
    class Test {
    public:
         Test() { std::cout << "Constructor\n"; }
         ~Test() { std::cout << "Destructor\n"; }
    };

    int main() {
         Test* t = new Test();
         return 0;
    }
    ```
    - [x] Constructor
    - [ ] Destructor
    - [ ] Constructor
         Destructor
    - [ ] No output

6. **What will be the output of the following code?**
    ```cpp
    class Test {
    public:
         Test() { std::cout << "Constructor\n"; }
         ~Test() { std::cout << "Destructor\n"; }
    };

    int main() {
         Test t1;
         Test t2 = t1;
         return 0;
    }
    ```
    - [x] Constructor
         Constructor
    - [ ] Constructor
         Destructor
    - [ ] Constructor
         Constructor
         Destructor
    - [ ] No output

7. **What will be the output of the following code?**
    ```cpp
    class Test {
    public:
         Test() { std::cout << "Constructor\n"; }
         ~Test() { std::cout << "Destructor\n"; }
    };

    void func(Test t) {
         std::cout << "In function\n";
         std::cout << "In function\n";
    }

    int main() {
         Test t;
         func(t);
         return 0;
    }
    ```
    - [x] Constructor
         Constructor
         In function
         Destructor
         Destructor
    - [ ] Constructor
         In function
         Destructor
    - [ ] Constructor
         Destructor
         In function
    - [ ] No output

    ## Coding Problems on Constructors and Destructors

    ### Problem 1: Copy Constructor (Will Discuss in next Class no worries)

    **Explain what to do in the question:**
    Implement a class that demonstrates the use of a copy constructor. The class should have a constructor, a copy constructor, and a destructor. The copy constructor should create a deep copy of the object.

    **Topic name:**
    Copy Constructor in C++

    **Input format:**
    - No input required from the user. The program should demonstrate the functionality of the copy constructor.

    **Output format:**
    - The output should show the constructor, copy constructor, and destructor calls.

    **Example:**

    | Input 1: | Output 1: |
    | -------- | --------- |
    | No input | Constructor called |
    |          | Copy Constructor called |
    |          | Destructor called |
    |          | Destructor called |

    ### Problem 2: Dynamic Memory Allocation

    **Explain what to do in the question:**
    Create a class that allocates memory dynamically in the constructor and deallocates it in the destructor. Ensure proper handling of memory in the copy constructor and assignment operator.

    **Topic name:**
    Dynamic Memory Allocation in C++

    **Input format:**
    - No input required from the user. The program should demonstrate the allocation and deallocation of memory.

    **Output format:**
    - The output should show the constructor, copy constructor, assignment operator, and destructor calls.

    **Example:**

    | Input 1: | Output 1: |
    | -------- | --------- |
    | No input | Constructor called |
    |          | Copy Constructor called |
    |          | Assignment Operator called |
    |          | Destructor called |
    |          | Destructor called |
    |          | Destructor called |

    ### Problem 3: Destructor Order

    **Explain what to do in the question:**
    Implement a class with a constructor and destructor, and create an array of objects to demonstrate the order in which destructors are called.

    **Topic name:**
    Destructor Order in C++

    **Input format:**
    - No input required from the user. The program should demonstrate the order of destructor calls.

    **Output format:**
    - The output should show the constructor and destructor calls in the correct order.

    **Example:**

    | Input 1: | Output 1: |
    | -------- | --------- |
    | No input | Constructor called |
    |          | Constructor called |
    |          | Destructor called |
    |          | Destructor called |

    ### Problem 4: Destructor in Inheritance

    **Explain what to do in the question:**
    Create a base class and a derived class, each with a constructor and destructor. Demonstrate the order of constructor and destructor calls in inheritance.

    **Topic name:**
    Destructor in Inheritance in C++

    **Input format:**
    - No input required from the user. The program should demonstrate the order of constructor and destructor calls in inheritance.

    **Output format:**
    - The output should show the constructor and destructor calls in the correct order.

    **Example:**

    | Input 1: | Output 1: |
    | -------- | --------- |
    | No input | Base Constructor called |
    |          | Derived Constructor called |
    |          | Derived Destructor called |
    |          | Base Destructor called |

    ## Before the Solutions Try It yourself if you really wanna do it
    ### Solutions

    #### Solution 1: Copy Constructor

    ```cpp
    #include <iostream>
    #include <cstring>

    class MyClass {
    public:
        char* data;

        // Constructor
        MyClass(const char* value) {
            data = new char[strlen(value) + 1];
            strcpy(data, value);
            std::cout << "Constructor called\n";
        }

        // Copy Constructor
        MyClass(const MyClass& other) {
            data = new char[strlen(other.data) + 1];
            strcpy(data, other.data);
            std::cout << "Copy Constructor called\n";
        }

        // Destructor
        ~MyClass() {
            delete[] data;
            std::cout << "Destructor called\n";
        }
    };

    int main() {
        MyClass obj1("Hello");
        MyClass obj2 = obj1; // Copy constructor is called
        return 0;
    }
    ```

    #### Solution 2: Dynamic Memory Allocation

    ```cpp
    #include <iostream>

    class MyClass {
    public:
        int* data;

        // Constructor
        MyClass(int value) {
            data = new int(value);
            std::cout << "Constructor called\n";
        }

        // Copy Constructor
        MyClass(const MyClass& other) {
            data = new int(*other.data);
            std::cout << "Copy Constructor called\n";
        }

        // Assignment Operator
        MyClass& operator=(const MyClass& other) {
            if (this != &other) {
                delete data;
                data = new int(*other.data);
                std::cout << "Assignment Operator called\n";
            }
            return *this;
        }

        // Destructor
        ~MyClass() {
            delete data;
            std::cout << "Destructor called\n";
        }
    };

    int main() {
        MyClass obj1(10);
        MyClass obj2 = obj1; // Copy constructor is called
        MyClass obj3(20);
        obj3 = obj1; // Assignment operator is called
        return 0;
    }
    ```

    #### Solution 3: Destructor Order

    ```cpp
    #include <iostream>

    class MyClass {
    public:
        // Constructor
        MyClass() {
            std::cout << "Constructor called\n";
        }

        // Destructor
        ~MyClass() {
            std::cout << "Destructor called\n";
        }
    };

    int main() {
        MyClass arr[2]; // Array of objects
        return 0;
    }
    ```

    #### Solution 4: Destructor in Inheritance

    ```cpp
    #include <iostream>

    class Base {
    public:
        // Constructor
        Base() {
            std::cout << "Base Constructor called\n";
        }

        // Destructor
        virtual ~Base() {
            std::cout << "Base Destructor called\n";
        }
    };

    class Derived : public Base {
    public:
        // Constructor
        Derived() {
            std::cout << "Derived Constructor called\n";
        }

        // Destructor
        ~Derived() {
            std::cout << "Derived Destructor called\n";
        }
    };

    int main() {
        Derived obj;
        return 0;
    }
    ```