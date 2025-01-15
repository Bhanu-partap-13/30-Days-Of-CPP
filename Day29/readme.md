# Day 29: Templates in Inheritance and Basics of STL in C++

## Beginner-Friendly Questions

1. **What is a template in C++?**
    - [ ] A function that prints output
    - [ ] A pre-defined class
    - [x] A blueprint for creating generic classes or functions
    - [ ] A type of loop

2. **Which keyword is used to define a template?**
    - [ ] class
    - [ ] struct
    - [x] template
    - [ ] typename

3. **What does STL stand for?**
    - [ ] Standard Template Library
    - [ ] Simple Template Library
    - [x] Standard Template Library
    - [ ] Standard Type Library

4. **Which of the following is a component of STL?**
    - [ ] Algorithms
    - [ ] Containers
    - [ ] Iterators
    - [x] All of the above

5. **What is the purpose of the `vector` container in STL?**
    - [ ] To store elements in a fixed-size array
    - [x] To store elements in a dynamic array
    - [ ] To store elements in a linked list
    - [ ] To store elements in a stack

6. **How do you declare a template function?**
    - [ ] `template <class T> void functionName(T a);`
    - [ ] `template <typename T> void functionName(T a);`
    - [x] Both of the above
    - [ ] None of the above

7. **Which of the following is not a container in STL?**
    - [ ] vector
    - [ ] list
    - [ ] map
    - [x] tree
    
    <br> </br>
## Code-Based Questions

1. **What will be the output of the following code?**
    ```cpp
    #include <iostream>
    template <typename T>
    T add(T a, T b) {
         return a + b;
    }
    int main() {
         std::cout << add(3, 4);
         return 0;
    }
    ```
    - [ ] 34
    - [x] 7
    - [ ] 12
    - [ ] Error

2. **Which of the following is the correct way to create a vector of integers?**
    - [ ] `std::vector<int> v;`
    - [x] `std::vector<int> v;`
    - [ ] `vector<int> v;`
    - [ ] `std::vector v<int>;`

3. **What is the output of the following code?**
    ```cpp
    #include <iostream>
    #include <vector>
    int main() {
         std::vector<int> v = {1, 2, 3, 4, 5};
         std::cout << v[2];
         return 0;
    }
    ```
    - [ ] 1
    - [ ] 2
    - [x] 3
    - [ ] 4

4. **Which of the following is the correct way to define a template class?**
    - [ ] `template <class T> class MyClass { /*...*/ };`
    - [ ] `template <typename T> class MyClass { /*...*/ };`
    - [x] Both of the above
    - [ ] None of the above

5. **What is the output of the following code?**
    ```cpp
    #include <iostream>
    template <typename T>
    class MyClass {
    public:
         T data;
         MyClass(T a) : data(a) {}
         T getData() { return data; }
    };
    int main() {
         MyClass<int> obj(10);
         std::cout << obj.getData();
         return 0;
    }
    ```
    - [ ] 0
    - [ ] 1
    - [x] 10
    - [ ] Error

6. **Which of the following is not a valid STL algorithm?**
    - [ ] sort
    - [ ] find
    - [ ] reverse
    - [x] search

7. **What is the output of the following code?**
    ```cpp
    #include <iostream>
    #include <vector>
    #include <algorithm>
    int main() {
         std::vector<int> v = {5, 3, 1, 4, 2};
         std::sort(v.begin(), v.end());
         for (int i : v) {
              std::cout << i << " ";
         }
         return 0;
    }
    ```
    - [ ] 5 3 1 4 2
    - [ ] 2 4 1 3 5
    - [x] 1 2 3 4 5
    - [ ] 5 4 3 2 1

    <br> </br>

    ## Problem Statements
    ### Problem Statement 1

    **Template Function for Maximum Value**

    **Input format:**
    - Two values of the same type

    **Output format:**
    - The maximum of the two values

    **Example:**

    | Input 1: | Output 1: |
    | -------- | --------- |
    | 3, 5     | 5         |
    | 7.2, 3.8 | 7.2       |

    | Input 2: | Output 2: |
    | -------- | --------- |
    | 'a', 'z' | 'z'       |
    | 10, 10   | 10        |

    ```cpp
    #include <iostream>
    template <typename T>
    T max(T a, T b) {
        return (a > b) ? a : b;
    }
    int main() {
        std::cout << max(3, 5) << std::endl;
        std::cout << max(7.2, 3.8) << std::endl;
        std::cout << max('a', 'z') << std::endl;
        std::cout << max(10, 10) << std::endl;
        return 0;
    }
    ```


    ### Problem Statement 2
    **Template Class with Inheritance**

    **Input format:**
    - A value to initialize the base class

    **Output format:**
    - The value stored in the derived class

    **Example:**

    | Input 1: | Output 1: |
    | -------- | --------- |
    | 10       | 10        |
    | 20       | 20        |

    | Input 2: | Output 2: |
    | -------- | --------- |
    | 30       | 30        |
    | 40       | 40        |

    ```cpp
    #include <iostream>
    template <typename T>
    class Base {
    public:
        T value;
        Base(T val) : value(val) {}
    };

    template <typename T>
    class Derived : public Base<T> {
    public:
        Derived(T val) : Base<T>(val) {}
        T getValue() { return this->value; }
    };

    int main() {
        Derived<int> obj1(10);
        std::cout << obj1.getValue() << std::endl;
        Derived<int> obj2(20);
        std::cout << obj2.getValue() << std::endl;
        return 0;
    }
    ```


    ### Problem Statement 3
    **Using STL Vector with Template Class**

    **Input format:**
    - A list of integers

    **Output format:**
    - The sorted list of integers

    **Example:**

    | Input 1: | Output 1: |
    | -------- | --------- |
    | 5, 3, 1, 4, 2 | 1, 2, 3, 4, 5 |

    | Input 2: | Output 2: |
    | -------- | --------- |
    | 10, 8, 6, 4, 2 | 2, 4, 6, 8, 10 |

    ```cpp
    #include <iostream>
    #include <vector>
    #include <algorithm>

    template <typename T>
    class Sorter {
    public:
        std::vector<T> sort(std::vector<T> vec) {
            std::sort(vec.begin(), vec.end());
            return vec;
        }
    };

    int main() {
        Sorter<int> sorter;
        std::vector<int> vec1 = {5, 3, 1, 4, 2};
        std::vector<int> sortedVec1 = sorter.sort(vec1);
        for (int i : sortedVec1) {
            std::cout << i << " ";
        }
        std::cout << std::endl;

        std::vector<int> vec2 = {10, 8, 6, 4, 2};
        std::vector<int> sortedVec2 = sorter.sort(vec2);
        for (int i : sortedVec2) {
            std::cout << i << " ";
        }
        std::cout << std::endl;

        return 0;
    }
    ```