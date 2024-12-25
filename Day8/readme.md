# Day 8: Pointers in C++

## Beginner-Friendly Questions

1. **What is a void pointer in C++?**
    - [ ] A pointer that points to an integer
    - [ ] A pointer that points to a character
    - [x] A pointer that can point to any data type
    - [ ] A pointer that points to a function

2. **Which of the following is true about pointer arithmetic?**
    - [x] Adding 1 to a pointer moves it to the next memory location of the type it points to
    - [ ] Subtracting 1 from a pointer moves it to the previous byte
    - [ ] Multiplying a pointer by 2 doubles its address
    - [ ] Dividing a pointer by 2 halves its address

3. **How do you declare a pointer to a pointer in C++?**
    - [ ] int *ptr;
    - [ ] int **ptr;
    - [x] int **ptr;
    - [ ] int &ptr;

4. **What is the size of a void pointer in C++?**
    - [ ] 1 byte
    - [ ] 2 bytes
    - [ ] 4 bytes
    - [x] Depends on the system (usually 4 or 8 bytes)

5. **Which of the following is the correct way to dereference a pointer to a pointer?**
    - [ ] *ptr
    - [x] **ptr
    - [ ] &ptr
    - [ ] ptr*

6. **Can a void pointer be directly dereferenced?**
    - [ ] Yes
    - [x] No
    - [ ] Only if it points to an integer
    - [ ] Only if it points to a character

7. **What is the output of the following code?**
    ```cpp
    int x = 10;
    int *ptr = &x;
    int **pptr = &ptr;
    cout << **pptr;
    ```
    - [ ] Address of x
    - [ ] Address of ptr
    - [x] 10
    - [ ] Compilation error

## Code-Based Questions

1. **What will be the output of the following code?**
    ```cpp
    int a = 5;
    void *ptr = &a;
    cout << *(int*)ptr;
    ```
    - [x] 5
    - [ ] Address of a
    - [ ] Compilation error
    - [ ] Garbage value

2. **What will be the output of the following code?**
    ```cpp
    int arr[] = {1, 2, 3, 4};
    int *ptr = arr;
    ptr++;
    cout << *ptr;
    ```
    - [ ] 1
    - [x] 2
    - [ ] 3
    - [ ] 4

3. **What will be the output of the following code?**
    ```cpp
    int x = 10;
    int *ptr1 = &x;
    int **ptr2 = &ptr1;
    **ptr2 = 20;
    cout << x;
    ```
    - [ ] 10
    - [x] 20
    - [ ] Address of x
    - [ ] Compilation error

4. **What will be the output of the following code?**
    ```cpp
    int x = 5;
    int *ptr = &x;
    *ptr = *ptr + 1;
    cout << x;
    ```
    - [ ] 4
    - [x] 6
    - [ ] 5
    - [ ] Compilation error

5. **What will be the output of the following code?**
    ```cpp
    int arr[] = {10, 20, 30};
    int *ptr = arr;
    cout << *(ptr + 2);
    ```
    - [ ] 10
    - [ ] 20
    - [x] 30
    - [ ] Compilation error

6. **What will be the output of the following code?**
    ```cpp
    int x = 10;
    int *ptr = &x;
    int **pptr = &ptr;
    cout << *pptr;
    ```
    - [ ] 10
    - [ ] Address of x
    - [x] Address of ptr
    - [ ] Compilation error

7. **What will be the output of the following code?**
    ```cpp
    int x = 10;
    int *ptr = &x;
    void *vptr = ptr;
    cout << *(int*)vptr;
    ```
    - [x] 10
    - [ ] Address of x
    - [ ] Compilation error
    - [ ] Garbage value



## Advanced Coding Questions

**1. Pointer to Pointer Arithmetic**

**Explain what you have to do in the question:**
Write a program that demonstrates pointer to pointer arithmetic. You will be given an array of integers and you need to use a pointer to pointer to traverse and print the elements of the array.

**Input format:**
- The first line contains an integer `n`, the number of elements in the array.
- The second line contains `n` space-separated integers, the elements of the array.

**Output format:**
- Print the elements of the array using pointer to pointer arithmetic.

**Example:**

| Input 1: | Output 1: |
| -------- | --------- |
| 5        | 1         |
| 1 2 3 4 5| 2         |
|          | 3         |
|          | 4         |
|          | 5         |

| Input 2: | Output 2: |
| -------- | --------- |
| 3        | 10        |
| 10 20 30 | 20        |
|          | 30        |



**2. Void Pointer Dereferencing**

**Explain what you have to do in the question:**
Write a program that demonstrates the use of void pointers. You will be given an integer and a float, and you need to use a void pointer to print their values.

**Input format:**
- The first line contains an integer.
- The second line contains a float.

**Output format:**
- Print the integer and the float using a void pointer.

**Example:**

| Input 1: | Output 1: |
| -------- | --------- |
| 10       | 10        |
| 5.5      | 5.5       |

| Input 2: | Output 2: |
| -------- | --------- |
| 20       | 20        |
| 3.14     | 3.14      |

**3. Pointer Arithmetic with Arrays**

**Explain what you have to do in the question:**
Write a program that demonstrates pointer arithmetic with arrays. You will be given an array of integers and you need to use pointer arithmetic to print the elements of the array in reverse order.

**Input format:**
- The first line contains an integer `n`, the number of elements in the array.
- The second line contains `n` space-separated integers, the elements of the array.

**Output format:**
- Print the elements of the array in reverse order using pointer arithmetic.

**Example:**

| Input 1: | Output 1: |
| -------- | --------- |
| 4        | 4         |
| 1 2 3 4  | 3         |
|          | 2         |
|          | 1         |

| Input 2: | Output 2: |
| -------- | --------- |
| 3        | 30        |
| 10 20 30 | 20        |
|          | 10        |


## Solutions
   ### Pointer to Pointer Arithmetic

```cpp
    #include <iostream>
    using namespace std;

    int main() {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        int *ptr = arr;
        int **pptr = &ptr;

        for (int i = 0; i < n; i++) {
            cout << *(*pptr + i) << endl;
        }

        return 0;
    }
```

### Void Pointer Dereferencing

```cpp
    #include <iostream>
    using namespace std;

    int main() {
        int a;
        float b;
        cin >> a >> b;

        void *ptr;

        ptr = &a;
        cout << *(int*)ptr << endl;

        ptr = &b;
        cout << *(float*)ptr << endl;

        return 0;
}
```

### Pointer Arithmetic with Arrays

```cpp
    #include <iostream>
    using namespace std;

    int main() {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        int *ptr = arr + n - 1;

        for (int i = 0; i < n; i++) {
            cout << *(ptr - i) << endl;
        }

        return 0;
}
```