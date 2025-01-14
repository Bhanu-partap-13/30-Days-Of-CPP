//-------------------------------------------------------------Templates in C++-----------------------------------------------------------------

/*
- Templates in C++ allow writing generic and reusable code by enabling functions and classes to operate with any data type.
- Templates reduce code duplication and make it easier to handle multiple types with the same logic.
- There are two types of templates in C++:
  1. Function Templates - For creating generic functions.
  2. Class Templates - For creating generic classes.
*/

//----------------------------------------------------------Syntax-------------------------------------------------------------------------------
/*
Function Template Syntax:
template <typename T>
return_type function_name(T parameter) {
    // Generic function body
}

**Class Template Syntax**:
template <typename T>
class ClassName {
    T data;
public:
    ClassName(T val) : data(val) {}
    void display() {
        cout << data << endl;
    }
};
*/

//----------------------------------------------------------Example Codes------------------------------------------------------------------------

/*
Example 1: Function Template for Finding the Maximum of Two Values

#include <iostream>
using namespace std;

template <typename T>
T findMax(T a, T b) {
    return (a > b) ? a : b;
}

int main() {
    cout << "Max(10, 20): " << findMax(10, 20) << endl;
    cout << "Max(3.14, 2.71): " << findMax(3.14, 2.71) << endl;
    cout << "Max('a', 'z'): " << findMax('a', 'z') << endl;

    return 0;
}*/
/*
Output:
Max(10, 20): 20
Max(3.14, 2.71): 3.14
Max('a', 'z'): z
*/

/*
Example 2: Class Template for a Box

#include <iostream>
using namespace std;

template <typename T>
class Box {
    T data;

public:
    Box(T val) : data(val) {}
    void display() {
        cout << "Data: " << data << endl;
    }
};

int main() {
    Box<int> intBox(42);
    intBox.display();

    Box<string> strBox("Hello, Templates!");
    strBox.display();

    return 0;
}*/
/*
Output:
Data: 42
Data: Hello, Templates!
*/

/*
Example 3: Template Specialization
- Specialization allows custom implementations for specific data types.
*/
#include <iostream>
using namespace std;

template <typename T>
class Display {
public:
    void show(T data) {
        cout << "General: " << data << endl;
    }
};

template <>
class Display<string> {
public:
    void show(string data) {
        cout << "Specialized: " << data << endl;
    }
};

int main() {
    Display<int> d1;
    d1.show(42);

    Display<string> d2;
    d2.show("Hello, Specialization!");

    return 0;
}
/*
Output:
General: 42
Specialized: Hello, Specialization!
*/
