//-------------------------------------------------------------Templates in Inheritance in C++-------------------------------------------------

/*
- Templates in inheritance allow the creation of base and derived classes that are generic.
- A base class can be a template, a derived class can be a template, or both can be templates.
- This combination provides flexibility in designing reusable and type-safe class hierarchies.
*/

//----------------------------------------------------------Syntax-------------------------------------------------------------------------------
/*
**Base Class as a Template**:
template <typename T>
class Base {
public:
    T data;
    Base(T val) : data(val) {}
    void show() {
        cout << "Base data: " << data << endl;
    }
};

**Derived Class as a Template**:
template <typename T>
class Derived : public Base<T> {
public:
    Derived(T val) : Base<T>(val) {}
    void display() {
        cout << "Derived data: " << this->data << endl;
    }
};
*/

//----------------------------------------------------------Example Codes------------------------------------------------------------------------

/*
Example 1: Base Class Template with Derived Class Template
*/
#include <iostream>
using namespace std;

template <typename T>
class Base {
public:
    T data;
    Base(T val) : data(val) {}
    void show() {
        cout << "Base data: " << data << endl;
    }
};

template <typename T>
class Derived : public Base<T> {
public:
    Derived(T val) : Base<T>(val) {}
    void display() {
        cout << "Derived data: " << this->data << endl;
    }
};

int main() {
    Derived<int> obj(42);
    obj.show();   // Calls Base class method
    obj.display(); // Calls Derived class method

    return 0;
}
/*
Output:
Base data: 42
Derived data: 42
*/

/*
Example 2: Base Class Template with Non-Template Derived Class
*/
#include <iostream>
using namespace std;

template <typename T>
class Base {
public:
    T data;
    Base(T val) : data(val) {}
    void show() {
        cout << "Base data: " << data << endl;
    }
};

class Derived : public Base<int> {
public:
    Derived(int val) : Base<int>(val) {}
    void display() {
        cout << "Derived data: " << data << endl;
    }
};

int main() {
    Derived obj(100);
    obj.show();   // Calls Base class method
    obj.display(); // Calls Derived class method

    return 0;
}
/*
Output:
Base data: 100
Derived data: 100
*/

/*
Example 3: Template Specialization in Inheritance
*/
#include <iostream>
using namespace std;

template <typename T>
class Base {
public:
    T data;
    Base(T val) : data(val) {}
    void show() {
        cout << "Base data: " << data << endl;
    }
};

// Specialized Derived Class for string
template <>
class Base<string> {
public:
    string data;
    Base(string val) : data(val) {}
    void show() {
        cout << "Specialized Base for string: " << data << endl;
    }
};

int main() {
    Base<int> obj1(10);
    obj1.show();

    Base<string> obj2("Hello, Inheritance!");
    obj2.show();

    return 0;
}
/*
Output:
Base data: 10
Specialized Base for string: Hello, Inheritance!
*/
