# Day 30: STL - Algorithms, Iterators, and Vectors in C++

## Beginner-Friendly Questions

1. Which of the following is a sequence container in C++ STL?
    - [ ] map
    - [ ] set
    - [x] vector
    - [ ] unordered_map

2. What does the `begin()` function return in a vector?
    - [x] An iterator to the first element
    - [ ] An iterator to the last element
    - [ ] The size of the vector
    - [ ] A pointer to the vector

3. Which algorithm is used to sort elements in a range?
    - [ ] find()
    - [ ] accumulate()
    - [x] sort()
    - [ ] transform()

4. How do you access the third element in a vector named `v`?
    - [ ] v[1]
    - [ ] v[2]
    - [x] v[3]
    - [ ] v[4]

5. What is the time complexity of accessing an element in a vector by index?
    - [x] O(1)
    - [ ] O(n)
    - [ ] O(log n)
    - [ ] O(n log n)

6. Which of the following is not a valid iterator type in C++?
    - [ ] Input Iterator
    - [ ] Output Iterator
    - [ ] Forward Iterator
    - [x] Reverse Output Iterator

7. What does the `push_back()` function do in a vector?
    - [ ] Removes the last element
    - [ ] Inserts an element at the beginning
    - [x] Adds an element to the end
    - [ ] Clears the vector

## Questions Based on Code

1. What will be the output of the following code?
    ```cpp
    std::vector<int> v = {1, 2, 3, 4, 5};
    std::cout << v[2];
    ```
    - [ ] 1
    - [ ] 2
    - [x] 3
    - [ ] 4

2. What does the following code do?
    ```cpp
    std::vector<int> v = {1, 2, 3, 4, 5};
    std::sort(v.begin(), v.end());
    ```
    - [ ] Reverses the vector
    - [x] Sorts the vector in ascending order
    - [ ] Sorts the vector in descending order
    - [ ] Removes duplicates from the vector

3. What will be the output of the following code?
    ```cpp
    std::vector<int> v = {1, 2, 3, 4, 5};
    std::cout << v.size();
    ```
    - [ ] 4
    - [x] 5
    - [ ] 6
    - [ ] 7

4. What does the following code do?
    ```cpp
    std::vector<int> v = {1, 2, 3, 4, 5};
    v.pop_back();
    ```
    - [ ] Adds an element to the end
    - [ ] Removes the first element
    - [x] Removes the last element
    - [ ] Clears the vector

5. What will be the output of the following code?
    ```cpp
    std::vector<int> v = {1, 2, 3, 4, 5};
    std::reverse(v.begin(), v.end());
    std::cout << v[0];
    ```
    - [x] 5
    - [ ] 1
    - [ ] 2
    - [ ] 4

6. What does the following code do?
    ```cpp
    std::vector<int> v = {1, 2, 3, 4, 5};
    auto it = std::find(v.begin(), v.end(), 3);
    ```
    - [ ] Finds the first element
    - [ ] Finds the last element
    - [x] Finds the element with value 3
    - [ ] Finds the element with value 5

7. What will be the output of the following code?
    ```cpp
    std::vector<int> v = {1, 2, 3, 4, 5};
    std::cout << *(v.begin() + 1);
    ```
    - [ ] 1
    - [x] 2
    - [ ] 3
    - [ ] 4



    ## Problem Statements - 
    **Problem 1: Find the Maximum Element in a Vector**

    **Explain what you have to do in the question:**
    You need to find the maximum element in a given vector of integers.

    **Input format:**
    - A single line containing space-separated integers representing the elements of the vector.

    **Output format:**
    - A single integer which is the maximum element in the vector.

    **Example:**

    | Input 1:       | Output 1: |
    | -------------- | --------- |
    | 1 2 3 4 5      | 5         |
    | 10 20 30 40 50 | 50        |

    | Input 2:       | Output 2: |
    | -------------- | --------- |
    | -1 -2 -3 -4 -5 | -1        |
    | 5 4 3 2 1      | 5         |

    **Solution in C++:**
    ```cpp
    #include <iostream>
    #include <vector>
    #include <algorithm>

    int main() {
        std::vector<int> v;
        int num;
        while (std::cin >> num) {
            v.push_back(num);
        }
        int maxElement = *std::max_element(v.begin(), v.end());
        std::cout << maxElement << std::endl;
        return 0;
    }
    ```

    **Problem 2: Reverse a Vector**

    **Explain what you have to do in the question:**
    You need to reverse the elements of a given vector of integers.

    **Input format:**
    - A single line containing space-separated integers representing the elements of the vector.

    **Output format:**
    - A single line containing space-separated integers representing the reversed vector.

    **Example:**

    | Input 1:       | Output 1: |
    | -------------- | --------- |
    | 1 2 3 4 5      | 5 4 3 2 1 |
    | 10 20 30 40 50 | 50 40 30 20 10 |

    | Input 2:       | Output 2: |
    | -------------- | --------- |
    | -1 -2 -3 -4 -5 | -5 -4 -3 -2 -1 |
    | 5 4 3 2 1      | 1 2 3 4 5 |

    **Solution in C++:**
    ```cpp
    #include <iostream>
    #include <vector>
    #include <algorithm>

    int main() {
        std::vector<int> v;
        int num;
        while (std::cin >> num) {
            v.push_back(num);
        }
        std::reverse(v.begin(), v.end());
        for (int n : v) {
            std::cout << n << " ";
        }
        std::cout << std::endl;
        return 0;
    }
    ```

    **Problem 3: Sum of Elements in a Vector**

    **Explain what you have to do in the question:**
    You need to find the sum of all elements in a given vector of integers.

    **Input format:**
    - A single line containing space-separated integers representing the elements of the vector.

    **Output format:**
    - A single integer which is the sum of all elements in the vector.

    **Example:**

    | Input 1:       | Output 1: |
    | -------------- | --------- |
    | 1 2 3 4 5      | 15        |
    | 10 20 30 40 50 | 150       |

    | Input 2:       | Output 2: |
    | -------------- | --------- |
    | -1 -2 -3 -4 -5 | -15       |
    | 5 4 3 2 1      | 15        |

    **Solution in C++:**
    ```cpp
    #include <iostream>
    #include <vector>
    #include <numeric>

    int main() {
        std::vector<int> v;
        int num;
        while (std::cin >> num) {
            v.push_back(num);
        }
        int sum = std::accumulate(v.begin(), v.end(), 0);
        std::cout << sum << std::endl;
        return 0;
    }
    ```