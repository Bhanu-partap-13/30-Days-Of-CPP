//------------------------------------------------------Memory Leaks in Dynamic Memory Allocation------------------------------------------------

/*
- A 'memory leak' occurs when a program allocates memory using `new` (or similar functions) but fails to deallocate it - using `delete`.
- Over time, memory leaks can cause the program to consume increasing amounts of memory, leading to system slowdown or crashes.
- Memory leaks are especially problematic in long-running programs or programs that perform a lot of dynamic memory operations.
*/

/*
Reasons for Memory Leaks:
--------------------------
1. Forgetting to use `delete` or `delete[]` for dynamically allocated memory.
2. Losing the pointer that references the dynamically allocated memory.
3. Improper exception handling where allocated memory is not freed in all execution paths.
*/

/*
Avoiding Memory Leaks:
------------------------
- Always pair `new` with `delete` and `new[]` with `delete[]`.
- Use smart pointers (like `std::unique_ptr` or `std::shared_ptr`) in modern C++ to automate memory management.
- Set pointers to `nullptr` after deletion to avoid dangling pointers.
- Use tools like Valgrind to detect and debug memory leaks.
*/

//--------------------------------------------------------Example Codes----------------------------------------------------------

/*
Example 1: Memory Leak Due to Forgetting `delete`
*/
#include <iostream>
using namespace std;

int main() {
    int* p = new int(42); // Allocate memory for an integer

    cout << "Value: " << *p << endl;

    // No delete statement leads to a memory leak
    // Uncomment the following line to fix the memory leak:
    // delete p;

    return 0;
}
/*
Output:
Value: 42
[Memory leak occurs as `p` is not deleted]
*/

/*
Example 2: Memory Leak Due to Overwriting the Pointer
*/
#include <iostream>
using namespace std;

int main() {
    int* p = new int(42); // Allocate memory for an integer
    p = new int(100);     // Previous memory is lost and cannot be deallocated (memory leak)

    cout << "Value: " << *p << endl;

    // Deleting only the current pointer does not fix the leak for the first allocation
    delete p;

    return 0;
}
/*
Output:
Value: 100
[Memory leak occurs due to overwriting the pointer]
*/

/*
Example 3: Detecting and Fixing Memory Leaks
*/
#include <iostream>
using namespace std;

class Student {
    string name;

public:
    Student(string n) : name(n) {
        cout << "Constructor called for " << name << endl;
    }

    void display() {
        cout << "Student Name: " << name << endl;
    }

    ~Student() {
        cout << "Destructor called for " << name << endl;
    }
};

int main() {
    Student* s = new Student("Alice"); // Allocation of the memory
    s->display();
    delete s;
    return 0;
}
/*
Output:
Constructor called for Alice
Student Name: Alice
[Destructor is not called if `delete` is missing, leading to a memory leak]
*/

/*
Best Practices to Prevent Memory Leaks:
----------------------------------------
1. Always delete dynamically allocated memory in all possible code paths.
2. Use RAII (Resource Acquisition Is Initialization) with smart pointers for automatic memory management.
3. Regularly test your program with memory analysis tools to catch leaks.
4. Avoid overwriting pointers before deallocating their memory.
5. Use `nullptr` after deleting pointers to avoid accidental access to invalid memory.
*/
