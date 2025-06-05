# Day 23: Memory Leak in DMA and Virtual Destructor in C++

## Beginner-Friendly Questions

1. What is a memory leak?
    - [ ] A type of virus
    - [ ] A memory allocation error
    - [x] A situation where allocated memory is not freed
    - [ ] A syntax error

2. What does DMA stand for in C++?
    - [ ] Direct Memory Allocation
    - [x] Dynamic Memory Allocation
    - [ ] Data Memory Access
    - [ ] Direct Memory Access

3. Which operator is used to allocate memory dynamically in C++?
    - [ ] malloc
    - [ ] calloc
    - [x] new
    - [ ] alloc

4. Which operator is used to deallocate memory in C++?
    - [ ] delete
    - [ ] free
    - [x] delete
    - [ ] remove

5. What is a virtual destructor?
    - [ ] A destructor that is not real
    - [ ] A destructor that is called virtually
    - [x] A destructor that ensures derived class destructors are called
    - [ ] A destructor that is not needed

6. Why is a virtual destructor important?
    - [ ] It prevents memory leaks
    - [ ] It ensures proper cleanup of derived class objects
    - [x] Both of the above
    - [ ] None of the above

7. How do you declare a virtual destructor in C++?
    - [ ] virtual ~Destructor();
    - [x] virtual ~ClassName();
    - [ ] ~ClassName();
    - [ ] virtual Destructor();

## Code-Based Questions

1. What will happen if you forget to use `delete` after `new`?
    - [ ] The program will crash
    - [ ] The memory will be automatically freed
    - [x] Memory leak
    - [ ] Compilation error

2. Consider the following code:
    ```cpp
    class Base {
    public:
         virtual ~Base() { }
    };

    class Derived : public Base {
    public:
         ~Derived() { }
    };
    ```
    What will happen when an object of `Derived` is deleted through a `Base` pointer?
    - [ ] Only `Base` destructor is called
    - [ ] Only `Derived` destructor is called
    - [x] Both `Base` and `Derived` destructors are called
    - [ ] None of the destructors are called

3. What is the output of the following code?
    ```cpp
    int* ptr = new int(5);
    delete ptr;
    std::cout << *ptr;
    ```
    - [ ] 5
    - [ ] 0
    - [ ] Undefined behavior
    - [x] Compilation error

4. How can you avoid memory leaks in C++?
    - [ ] By using `malloc` and `free`
    - [ ] By using smart pointers
    - [x] Both of the above
    - [ ] None of the above

5. What is the purpose of `std::unique_ptr` in C++?
    - [ ] To manage dynamic memory
    - [ ] To ensure only one owner of the pointer
    - [x] Both of the above
    - [ ] None of the above

6. Consider the following code:
    ```cpp
    class A {
    public:
         A() { ptr = new int; }
         ~A() { delete ptr; }
    private:
         int* ptr;
    };
    ```
    What will happen if an exception is thrown in the constructor of `A`?
    - [ ] Memory leak
    - [ ] Proper cleanup
    - [x] Undefined behavior
    - [ ] Compilation error

7. What is the correct way to declare a virtual destructor in a base class?
    - [ ] virtual ~Base();
    - [x] virtual ~Base() = default;
    - [ ] ~Base();
    - [ ] virtual Base();


## Coding Problems

**Problem 1: Detecting Memory Leak**

**Explain what to do in the question:**
    Write a C++ program that dynamically allocates memory for an integer array and then forgets to deallocate it. Use a memory leak detection tool to identify the leak.

**Topic name:**
    Memory Leak in Dynamic Memory Allocation

**Input format:**
- Size of the array

**Output format:**
- Memory leak detected message

**Example:**

    | Input 1: | Output 1: |
    | -------- | --------- |
    | 5        | Memory leak detected |
    | 10       | Memory leak detected |

**Solution:**
```cpp
    #include <iostream>

    int main() {
        int size;
        std::cin >> size;
        int* arr = new int[size];
        // Forgot to delete the allocated memory
        return 0;
    }
```

**Problem 2: Proper Use of Virtual Destructor**

**Explain what to do in the question:**
    Write a C++ program that demonstrates the use of a virtual destructor to ensure proper cleanup of derived class objects.

**Topic name:**
    Virtual Destructor in C++

**Input format:**
- No input required

**Output format:**
- Messages indicating the order of destructor calls

**Example:**

    | Input 1: | Output 1: |
    | -------- | --------- |
    |          | Base destructor called |
    |          | Derived destructor called |

**Solution:**
```cpp
    #include <iostream>

    class Base {
    public:
        virtual ~Base() {
            std::cout << "Base destructor called" << std::endl;
        }
    };

    class Derived : public Base {
    public:
        ~Derived() {
            std::cout << "Derived destructor called" << std::endl;
        }
    };

    int main() {
        Base* obj = new Derived();
        delete obj;
        return 0;
    }
```

**Problem 3: Avoiding Memory Leak with Smart Pointers**

**Explain what to do in the question:**
    Write a C++ program that uses `std::unique_ptr` to manage dynamic memory and avoid memory leaks.

**Topic name:**
    Avoiding Memory Leak with Smart Pointers

**Input format:**
- No input required

**Output format:**
- Messages indicating proper memory management

**Example:**

    | Input 1: | Output 1: |
    | -------- | --------- |
    |          | Memory managed properly |

**Solution:**
```cpp
    #include <iostream>
    #include <memory>

    int main() {
        std::unique_ptr<int> ptr = std::make_unique<int>(5);
        std::cout << "Memory managed properly" << std::endl;
        return 0;
    }
```