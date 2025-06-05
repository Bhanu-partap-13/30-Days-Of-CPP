//------------------------------------------------------------Virtual Functions in C++------------------------------------------------------------
// 30 Days of C++ - By bhanu partap - learn more about me at https://github.com/Bhanu-partap-13
/*
- A **virtual function** in C++ is a member function in a base class that you can override in a derived class.
- It allows achieving **run-time polymorphism** by ensuring the correct function is called for an object, regardless of the type of reference (base or derived) used for the function call.
- Virtual functions use a mechanism called a **vtable** (virtual table) for dynamic dispatch.
*/


//--------------------------------------------------------Syntax of Virtual Functions--------------------------------------------------------
/*
class Base {
public:
    virtual void display() {
        // Base class implementation
    }
};

class Derived : public Base {
public:
    void display() override {
        // Derived class implementation
    }
};
*/

//--------------------------------------------------------Example Codes--------------------------------------------------------

/*
Example 1: Basic Virtual Function
*/
#include <iostream>
using namespace std;

class Base {
public:
    virtual void show() {
        cout << "Base class show() called." << endl;
    }
};

class Derived : public Base {
public:
    void show() override {
        cout << "Derived class show() called." << endl;
    }
};

int main() {
    Base* basePtr;
    Derived derivedObj;

    basePtr = &derivedObj;
    basePtr->show(); // Calls Derived class show()
    return 0;
}
/*
Output:
Derived class show() called.
*/

/*
Example 2: Virtual Functions with Multiple Derived Classes
*/
#include <iostream>
using namespace std;

class Shape {
public:
    virtual void draw() {
        cout << "Drawing a generic shape." << endl;
    }
};
class Circle : public Shape {
public:
    void draw() override {
        cout << "Drawing a circle." << endl;
    }
};
class Rectangle : public Shape {
public:
    void draw() override {
        cout << "Drawing a rectangle." << endl;
    }
};

int main() {
    Shape* shape;
    Circle circle;
    Rectangle rectangle;
    shape = &circle;
    shape->draw(); // Calls Circle's draw()
    shape = &rectangle;
    shape->draw(); // Calls Rectangle's draw()

    return 0;
}
/*
Output:
Drawing a circle.
Drawing a rectangle.
*/
