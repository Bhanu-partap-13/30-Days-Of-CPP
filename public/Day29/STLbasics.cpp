//-------------------------------------------------------------Basics of the STL in C++-----------------------------------------------------------
// 30 Days of C++ - By bhanu partap - learn more about me at https://github.com/Bhanu-partap-13
/*
- The Standard Template Library (STL) is a powerful feature of C++ that provides a set of template classes and functions.
- It simplifies complex operations like searching, sorting, and managing data structures.
- The STL is divided into four main components:
  1. Containers
  2. Iterators
  3. Algorithms
  4. Functors (Function Objects)
*/

//----------------------------------------------------------Components of STL---------------------------------------------------------------------
/*
1. **Containers**:
   - Used to store collections of data.
   - Types of Containers:
     - Sequential Containers (e.g., `vector`, `deque`, `list`)
     - Associative Containers (e.g., `set`, `map`, `multiset`, `multimap`)
     - Container Adapters (e.g., `stack`, `queue`, `priority_queue`)

2. **Iterators**:
   - Used to traverse through the elements of a container.
   - Common Iterators: `begin()`, `end()`, `rbegin()`, `rend()`, etc.

3. **Algorithms**:
   - Predefined functions for operations like sorting, searching, etc.
   - Examples: `sort()`, `find()`, `binary_search()`, `count()`, etc.

4. **Functors**:
   - Objects that behave like functions. Used to define custom operations.
   - Example: `plus<int>()`, `multiplies<int>()`, etc.
*/

//----------------------------------------------------------Example Codes------------------------------------------------------------------------

/*
Example 1: Using a Vector

#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v = {10, 20, 30, 40};

    // Adding elements
    v.push_back(50);

    // Displaying elements
    for (auto it = v.begin(); it != v.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    return 0;
}*/
/*
Output:
10 20 30 40 50
*/

/*
Example 2: Using a Map
*/
#include <iostream>
#include <map>
using namespace std;

int main() {
    map<int, string> m;

    // Adding elements
    m[1] = "Apple";
    m[2] = "Banana";
    m[3] = "Cherry";

    // Displaying elements
    for (auto it = m.begin(); it != m.end(); ++it) {
        cout << "Key: " << it->first << ", Value: " << it->second << endl;
    }

    return 0;
}
/*
Output:
Key: 1, Value: Apple
Key: 2, Value: Banana
Key: 3, Value: Cherry
*/

