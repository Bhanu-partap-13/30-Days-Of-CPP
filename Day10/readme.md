# Day 10: Arrays in C++

## Beginner-Friendly Questions

1. What is a 1D array in C++?
    - [ ] A collection of elements arranged in multiple rows and columns.
    - [x] A collection of elements arranged in a single row.
    - [ ] A collection of objects.
    - [ ] A collection of functions.

2. How do you declare a 1D array of integers with 5 elements in C++?
    - [ ] `int array[5];`
    - [x] `int array[5];`
    - [ ] `int array = new int[5];`
    - [ ] `int array[5] = {0};`

3. What is the index of the first element in a 1D array?
    - [x] 0
    - [ ] 1
    - [ ] -1
    - [ ] 10

4. How do you access the third element in a 1D array named `arr`?
    - [ ] `arr[1]`
    - [ ] `arr[2]`
    - [x] `arr[3]`
    - [ ] `arr[4]`

5. What is a 2D array in C++?
    - [ ] A collection of elements arranged in a single row.
    - [x] A collection of elements arranged in rows and columns.
    - [ ] A collection of objects.
    - [ ] A collection of functions.

6. How do you declare a 2D array of integers with 3 rows and 4 columns in C++?
    - [ ] `int array[3,4];`
    - [ ] `int array[4][3];`
    - [x] `int array[3][4];`
    - [ ] `int array[3*4];`

7. How do you access the element in the second row and third column of a 2D array named `matrix`?
    - [ ] `matrix[1][2]`
    - [x] `matrix[2][3]`
    - [ ] `matrix[3][2]`
    - [ ] `matrix[2][1]`

## Questions Based on Code

1. What will be the output of the following code?
    ```cpp
    int arr[3] = {1, 2, 3};
    cout << arr[1];
    ```
    - [ ] 1
    - [x] 2
    - [ ] 3
    - [ ] 0

2. What will be the output of the following code?
    ```cpp
    int arr[2][2] = {{1, 2}, {3, 4}};
    cout << arr[1][1];
    ```
    - [ ] 1
    - [ ] 2
    - [ ] 3
    - [x] 4

3. What will be the output of the following code?
    ```cpp
    int arr[3] = {5, 10, 15};
    cout << arr[0] + arr[2];
    ```
    - [ ] 5
    - [ ] 10
    - [x] 20
    - [ ] 25

4. What will be the output of the following code?
    ```cpp
    int arr[2][3] = {{1, 2, 3}, {4, 5, 6}};
    cout << arr[0][2] + arr[1][0];
    ```
    - [ ] 3
    - [ ] 4
    - [x] 7
    - [ ] 9

5. What will be the output of the following code?
    ```cpp
    int arr[3] = {1, 2, 3};
    arr[1] = 10;
    cout << arr[1];
    ```
    - [ ] 1
    - [x] 10
    - [ ] 2
    - [ ] 3

6. What will be the output of the following code?
    ```cpp
    int arr[2][2] = {{1, 2}, {3, 4}};
    arr[0][1] = 5;
    cout << arr[0][1];
    ```
    - [ ] 1
    - [x] 5
    - [ ] 2
    - [ ] 4

7. What will be the output of the following code?
    ```cpp
    int arr[2][3] = {{1, 2, 3}, {4, 5, 6}};
    cout << arr[1][2];
    ```
    - [ ] 1
    - [ ] 2
    - [ ] 3
    - [x] 6

   ## Coding Problems
   >[!Tip]
   >First Solve these Question By Your Own

    **Problem 1: Sum of Elements in a 1D Array**

    **Input format:**
    - The first line contains an integer `n`, the number of elements in the array.
    - The second line contains `n` space-separated integers representing the elements of the array.

    **Output format:**
    - A single integer representing the sum of the elements in the array.

    **Example:**

    | Input 1: | Output 1: |
    | -------- | --------- |
    | 5        | 15        |
    | 1 2 3 4 5|           |

    | Input 2: | Output 2: |
    | -------- | --------- |
    | 3        | 6         |
    | 1 2 3    |           |

    **Solution:**
    ```cpp
    #include <iostream>
    using namespace std;

    int main() {
        int n;
        cin >> n;
        int arr[n];
        int sum = 0;
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            sum += arr[i];
        }
        cout << sum << endl;
        return 0;
    }
    ```

    **Problem 2: Sum of Elements in a 2D Array**

    **Input format:**
    - The first line contains two integers `n` and `m`, the number of rows and columns in the array.
    - The next `n` lines contain `m` space-separated integers representing the elements of the array.

    **Output format:**
    - A single integer representing the sum of the elements in the 2D array.

    **Example:**

    | Input 1: | Output 1: |
    | -------- | --------- |
    | 2 3      | 21        |
    | 1 2 3    |           |
    | 4 5 6    |           |

    | Input 2: | Output 2: |
    | -------- | --------- |
    | 3 3      | 45        |
    | 1 2 3    |           |
    | 4 5 6    |           |
    | 7 8 9    |           |

    **Solution:**
    ```cpp
    #include <iostream>
    using namespace std;

    int main() {
        int n, m;
        cin >> n >> m;
        int arr[n][m];
        int sum = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> arr[i][j];
                sum += arr[i][j];
            }
        }
        cout << sum << endl;
        return 0;
    }
    ```

    **Problem 3: Sum of Elements in a 3D Array**

    **Input format:**
    - The first line contains three integers `n`, `m`, and `p`, the dimensions of the array.
    - The next `n * m` lines contain `p` space-separated integers representing the elements of the array.

    **Output format:**
    - A single integer representing the sum of the elements in the 3D array.

    **Example:**

    | Input 1: | Output 1: |
    | -------- | --------- |
    | 2 2 2    | 36        |
    | 1 2      |           |
    | 3 4      |           |
    | 5 6      |           |
    | 7 8      |           |

    | Input 2: | Output 2: |
    | -------- | --------- |
    | 2 2 3    | 78        |
    | 1 2 3    |           |
    | 4 5 6    |           |
    | 7 8 9    |           |
    | 10 11 12 |           |

    **Solution:**
    ```cpp
    #include <iostream>
    using namespace std;

    int main() {
        int n, m, p;
        cin >> n >> m >> p;
        int arr[n][m][p];
        int sum = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                for (int k = 0; k < p; k++) {
                    cin >> arr[i][j][k];
                    sum += arr[i][j][k];
                }
            }
        }
        cout << sum << endl;
        return 0;
    }
    ```
  ## Homework Question
    **Problem 4: Array of Objects**

    **Input format:**
    - The first line contains an integer `n`, the number of students.
    - The next `n` lines contain a string (student name) and an integer (student score) separated by a space.

    **Output format:**
    - The name of the student with the highest score.

    **Example:**

    | Input 1: | Output 1: |
    | -------- | --------- |
    | 3        | John      |
    | John 85  |           |
    | Alice 90 |           |
    | Bob 75   |           |

    | Input 2: | Output 2: |
    | -------- | --------- |
    | 2        | Alice     |
    | Alice 95 |           |
    | Bob 85   |           |

    <details>
    <summary>Click here to reveal the solution</summary>

    ### Solution
        Here is the hidden content that becomes visible when you click the "Click here to reveal the solution" text.

    **Solution:**
```cpp
    #include <iostream>
    #include <string>
    using namespace std;

    class Student {
    public:
        string name;
        int score;
    };

    int main() {
        int n;
        cin >> n;
        Student students[n];
        for (int i = 0; i < n; i++) {
            cin >> students[i].name >> students[i].score;
        }
        int maxScore = students[0].score;
        string topStudent = students[0].name;
        for (int i = 1; i < n; i++) {
            if (students[i].score > maxScore) {
                maxScore = students[i].score;
                topStudent = students[i].name;
            }
        }
        cout << topStudent << endl;
        return 0;
    }
```
</details>