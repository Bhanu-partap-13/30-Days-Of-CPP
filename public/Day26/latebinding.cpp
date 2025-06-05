//------------------------------------------------------------Late Binding in C++-------------------------------------------------------------

/*
- **Late Binding**, also known as **dynamic binding**, occurs when the function to be called is determined at runtime.
- It is achieved using **virtual functions** in C++.
- Late binding allows runtime polymorphism, enabling the program to decide which function to execute based on the type of object being referenced.
- This is implemented using a **vtable (virtual table)** and a **vptr (virtual pointer)** for each class with virtual functions.
*/

//-------------------------------------------------------------Characteristics of Late Binding-------------------------------------------------
/*
1. Associated with virtual functions.
2. Enables runtime polymorphism.
3. Slightly slower than early binding due to runtime decision-making.
4. Allows dynamic decision-making for function calls based on the actual object type.
*/

//-------------------------------------------------------------Example Codes--------------------------------------------------------------------

/*
Example 1: Late Binding with Virtual Functions

#include <iostream>
using namespace std;

class Base {
public:
    virtual void show() {
        cout << "Base class function called (Late Binding)" << endl;
    }
};

class Derived : public Base {
public:
    void show() override {
        cout << "Derived class function called (Late Binding)" << endl;
    }
};

int main() {
    Base* basePtr;
    Derived d;

    basePtr = &d;

    // Late binding: Derived class function is called at runtime
    basePtr->show();

    return 0;
}*/
/*
Output:
Derived class function called (Late Binding)
*/

/*
Example 2: Late Binding with Abstract Classes
*/
#include <iostream>
using namespace std;

class Shape {
public:
    virtual void draw() = 0; // Pure virtual function
};
class Circle : public Shape {
public:
    void draw() override {
        cout << "Drawing a Circle" << endl;
    }
};
class Rectangle : public Shape {
public:
    void draw() override {
        cout << "Drawing a Rectangle" << endl;
    }
};

int main() {
    Shape* shape;
    Circle c;
    Rectangle r;
    shape = &c;
    shape->draw(); //Circle is called
    shape = &r;
    shape->draw(); //Rectangle is called
    return 0;
}
/*
Output:
Drawing a Circle 
Drawing a Rectangle
*/

/*
Example 3: Late Binding with a Virtual Destructor

#include <iostream>
using namespace std;

class Base {
public:
    virtual ~Base() {
        cout << "Base destructor called (Late Binding)" << endl;
    }
};

class Derived : public Base {
public:
    ~Derived() {
        cout << "Derived destructor called (Late Binding)" << endl;
    }
};

int main() {
    Base* basePtr = new Derived();

    // Late binding ensures the Derived destructor is called
    delete basePtr;

    return 0;
}*/
/*
Output:
Derived destructor called (Late Binding)
Base destructor called (Late Binding)
*/
