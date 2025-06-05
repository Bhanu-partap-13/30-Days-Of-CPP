# Day 22: Dynamic Memory Allocation in C++

## Beginner-Friendly Questions

1. What is the purpose of the `new` operator in C++?
    - [ ] To delete a memory block
    - [x] To allocate memory dynamically
    - [ ] To create a new variable
    - [ ] To initialize a pointer

2. How do you deallocate memory that was allocated using `new`?
    - [ ] Using `free()`
    - [ ] Using `malloc()`
    - [x] Using `delete`
    - [ ] Using `dealloc()`

3. Which of the following is the correct syntax to allocate memory for an integer using `new`?
    - [ ] `int *p = new int;`
    - [x] `int *p = new int();`
    - [ ] `int p = new int;`
    - [ ] `int p = new int();`

4. What happens if you forget to use `delete` after using `new`?
    - [ ] The program will crash immediately
    - [ ] The memory will be automatically deallocated
    - [x] Memory leak
    - [ ] The pointer will be deleted

5. Which of the following is the correct way to deallocate an array allocated with `new`?
    - [ ] `delete p;`
    - [ ] `delete p[];`
    - [x] `delete[] p;`
    - [ ] `delete array p;`

6. What does DMA stand for in C++?
    - [ ] Direct Memory Access
    - [x] Dynamic Memory Allocation
    - [ ] Data Memory Allocation
    - [ ] Dynamic Memory Access

7. Which of the following is true about `new` and `delete` operators?
    - [ ] `new` initializes memory to zero
    - [ ] `delete` can be used without `new`
    - [x] `new` allocates memory and `delete` deallocates memory
    - [ ] `new` and `delete` are not related

## Questions Based on Code

1. What is the output of the following code?
    ```cpp
    int *p = new int(5);
    std::cout << *p;
    delete p;
    ```
    - [x] 5
    - [ ] 0
    - [ ] Garbage value
    - [ ] Compilation error

2. What is the output of the following code?
    ```cpp
    int *arr = new int[3]{1, 2, 3};
    std::cout << arr[1];
    delete[] arr;
    ```
    - [ ] 1
    - [x] 2
    - [ ] 3
    - [ ] Compilation error

3. What is the output of the following code?
    ```cpp
    int *p = new int;
    *p = 10;
    std::cout << *p;
    delete p;
    ```
    - [ ] 0
    - [ ] 5
    - [x] 10
    - [ ] Compilation error

4. What is the output of the following code?
    ```cpp
    int *p = new int[2]{4, 5};
    std::cout << p[0] << " " << p[1];
    delete[] p;
    ```
    - [x] 4 5
    - [ ] 5 4
    - [ ] 0 0
    - [ ] Compilation error

5. What is the output of the following code?
    ```cpp
    int *p = new int(7);
    delete p;
    std::cout << *p;
    ```
    - [ ] 7
    - [ ] 0
    - [ ] Garbage value
    - [x] Undefined behavior

6. What is the output of the following code?
    ```cpp
    int *p = new int[3]{1, 2, 3};
    delete[] p;
    std::cout << p[1];
    ```
    - [ ] 1
    - [ ] 2
    - [ ] 3
    - [x] Undefined behavior

7. What is the output of the following code?
    ```cpp
    int *p = new int;
    std::cout << *p;
    delete p;
    ```
    - [ ] 0
    - [ ] 1
    - [ ] Garbage value
    - [x] Undefined behavior

## Homework Problem: Dynamic Memory Allocation in C++

### Problem 1: Allocate and Initialize an Array

**Explain what to do in the question:**
    Write a program that allocates memory for an array of integers using the `new` operator, initializes the array with values from 1 to n, and then prints the array. Finally, deallocate the memory using the `delete[]` operator.

**Topic Name:**
    Dynamic Memory Allocation - Array Initialization

**Input format:**
    - An integer n representing the size of the array.

**Output format:**
    - The elements of the array separated by spaces.

**Example:**

    | Input 1: | Output 1: |
    | -------- | --------- |
    | 5        | 1 2 3 4 5 |

    | Input 2: | Output 2: |
    | -------- | --------- |
    | 3        | 1 2 3     |

**Solution:**
```cpp
    #include <iostream>

    int main() {
        int n;
        std::cin >> n;
        int *arr = new int[n];
        for (int i = 0; i < n; ++i) {
            arr[i] = i + 1;
        }
        for (int i = 0; i < n; ++i) {
            std::cout << arr[i] << " ";
        }
        delete[] arr;
        return 0;
    }
```

### Problem 2: Sum of Dynamic Array Elements

**Explain what to do in the question:**
    Write a program that allocates memory for an array of integers using the `new` operator, takes n elements as input, calculates the sum of the elements, and prints the sum. Finally, deallocate the memory using the `delete[]` operator.

**Topic Name:**
    Dynamic Memory Allocation - Sum of Array Elements

**Input format:**
    - An integer n representing the size of the array.
    - n integers representing the elements of the array.

**Output format:**
    - The sum of the array elements.

**Example:**

    | Input 1: | Output 1: |
    | -------- | --------- |
    | 4        | 10        |
    | 1 2 3 4  |           |

    | Input 2: | Output 2: |
    | -------- | --------- |
    | 3        | 6         |
    | 1 2 3    |           |

**Solution:**
```cpp
    #include <iostream>

    int main() {
        int n;
        std::cin >> n;
        int *arr = new int[n];
        int sum = 0;
        for (int i = 0; i < n; ++i) {
            std::cin >> arr[i];
            sum += arr[i];
        }
        std::cout << sum;
        delete[] arr;
        return 0;
    }
```

### Problem 3: Reverse an Array

**Explain what to do in the question:**
    Write a program that allocates memory for an array of integers using the `new` operator, takes n elements as input, reverses the array, and prints the reversed array. Finally, deallocate the memory using the `delete[]` operator.

**Topic Name:**
    Dynamic Memory Allocation - Reverse Array

**Input format:**
    - An integer n representing the size of the array.
    - n integers representing the elements of the array.

**Output format:**
    - The elements of the reversed array separated by spaces.

**Example:**

    | Input 1: | Output 1: |
    | -------- | --------- |
    | 4        | 4 3 2 1   |
    | 1 2 3 4  |           |

    | Input 2: | Output 2: |
    | -------- | --------- |
    | 3        | 3 2 1     |
    | 1 2 3    |           |

**Solution:**
```cpp
    #include <iostream>

    int main() {
        int n;
        std::cin >> n;
        int *arr = new int[n];
        for (int i = 0; i < n; ++i) {
            std::cin >> arr[i];
        }
        for (int i = n - 1; i >= 0; --i) {
            std::cout << arr[i] << " ";
        }
        delete[] arr;
        return 0;
    }
```