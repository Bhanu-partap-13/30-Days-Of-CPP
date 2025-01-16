//-----------------------------------------------------------STL - Algorithm, Vector, and Iterator------------------------------------------------------------

/*
- The Standard Template Library (STL) is a vital part of C++ programming.
- It offers a collection of classes and functions that provide general-purpose, reusable solutions for tasks like sorting, searching, and handling data structures.

- In this explanation, we'll explore three essential components of STL:
  1. Algorithm: Predefined operations like sorting, searching, and more.
  2. Vector: A dynamic array that grows as needed.
  3. Iterator: A pointer-like object to traverse elements in containers.
*/

//---------------------------------------------------------------Algorithms in STL------------------------------------------------------------------------

/*
1. **Overview**:
   - STL algorithms are predefined functions for performing operations on containers.
   - Example: `sort()`, `binary_search()`, `find()`, `reverse()`, etc.

2. Common Algorithms:
   - Sorting: `sort(v.begin(), v.end());` - Sorts a container in ascending order.
   - Searching: `binary_search(v.begin(), v.end(), value);` - Checks if a value exists.
   - Reversing: `reverse(v.begin(), v.end());` - Reverses the container.
   - Finding: `find(v.begin(), v.end(), value);` - Returns an iterator to the value if found.

3. **Example**:
*/
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    vector<int> v = {5, 1, 3, 8, 6};

    // Sorting
    sort(v.begin(), v.end());

    // Searching
    if (binary_search(v.begin(), v.end(), 3)) {
        cout << "3 is found in the vector!" << endl;
    } else {
        cout << "3 is not found!" << endl;
    }

    // Reversing
    reverse(v.begin(), v.end());

    // Displaying
    cout << "Reversed Vector: ";
    for (int val : v) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}
/*
Output:
3 is found in the vector!
Reversed Vector: 8 6 5 3 1
*/

//-------------------------------------------------------------Vectors in STL---------------------------------------------------------------------

/*
1. Overview:
   - A `vector` is a dynamic array that can grow and shrink in size.
   - It's one of the most widely used STL containers.

2. Key Features:
   - Random access to elements: Similar to arrays.
   - Dynamic resizing: Automatically adjusts size as needed.
   - Flexible operations: Use `push_back()`, `pop_back()`, etc., for element manipulation.

3. Common Functions:
   - `push_back(value)`: Adds an element at the end.
   - `pop_back()`: Removes the last element.
   - `size()`: Returns the number of elements.
   - `clear()`: Removes all elements.
   - `at(index)`: Accesses the element at a specific index.

4. Example:
*/
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v;

    // Adding elements
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);

    // Displaying size
    cout << "Size of vector: " << v.size() << endl;

    // Accessing elements
    cout << "Elements: ";
    for (int i = 0; i < v.size(); i++) {
        cout << v.at(i) << " ";
    }
    cout << endl;
    // Removing last element
    v.pop_back();
    // Displaying elements after removal
    cout << "After pop_back: ";
    for (int val : v) {
        cout << val << " ";
    }
    cout << endl;
    return 0;
}
/*
Output:
Size of vector: 3
Elements: 10 20 30
After pop_back: 10 20
*/

//-------------------------------------------------------------Iterators in STL------------------------------------------------------------------

/*
1. Overview:
   - Iterators act like pointers to elements in a container.
   - They provide a way to traverse and access elements.

2. Types of Iterators:
   - **Input Iterator**: Reads data sequentially.
   - **Output Iterator**: Writes data sequentially.
   - **Forward Iterator**: Combines input and output functionality.
   - **Bidirectional Iterator**: Moves forward and backward (e.g., `list`, `set`).
   - **Random Access Iterator**: Direct access to any element (e.g., `vector`, `deque`).

3. Common Functions:
   - `begin()`: Points to the first element.
   - `end()`: Points to one past the last element.
   - `rbegin()`: Points to the last element (reverse).
   - `rend()`: Points to one before the first element (reverse).

4. Example:
*/
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v = {1, 2, 3, 4, 5};

    // Using iterators to traverse
    cout << "Vector elements using iterators: ";
    for (auto it = v.begin(); it != v.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    // Reverse iterator
    cout << "Vector elements in reverse: ";
    for (auto rit = v.rbegin(); rit != v.rend(); ++rit) {
        cout << *rit << " ";
    }
    cout << endl;

    return 0;
}
/*
Output:
Vector elements using iterators: 1 2 3 4 5
Vector elements in reverse: 5 4 3 2 1
*/

//----------------------------------------------------------Important Notes---------------------------------------------------------------------
/*
1. Combining Components:
   - STL components like `vector`, `iterator`, and `algorithm` work together seamlessly.
   - Example: Using `sort()` on a `vector` and displaying it with iterators.

2. Efficiency:
   - STL is optimized for performance, but choosing the right container and algorithm is essential.

3. Best Practices:
   - Always use `at()` for safer access in `vector`.
   - Avoid modifying a container while iterating over it.
   - Use appropriate iterators for the container type.

4. Applications:
   - STL is used in sorting, searching, dynamic arrays, and implementing stacks, queues, etc.
*/
