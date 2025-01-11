//------------------------------------------------------------Concrete Class in C++-------------------------------------------------------------

/*
- A `concrete class` in C++ is a class that provides implementations for all its functions, including any inherited pure virtual functions.
- Concrete classes can be instantiated to create objects and are the final usable classes in an inheritance hierarchy.
- They are the opposite of abstract classes.
*/

//-------------------------------------------------------------Syntax of Concrete Class----------------------------------------------------------
/*
class ConcreteClass {
public:
    void function() {
        // Function implementation
    }
};
*/

//-------------------------------------------------------------Example Codes----------------------------------------------------------------------

/*
Example 1: Simple Concrete Class
*/
#include <iostream>
using namespace std;

class ConcreteClass {
public:
    void display() {
        cout << "This is a concrete class." << endl;
    }
};

int main() {
    ConcreteClass obj;
    obj.display(); // Calls the display() method
    return 0;
}
/*
Output:
This is a concrete class.
*/

/*
Example 2: Derived Concrete Class from Abstract Class
- A concrete class implements all pure virtual functions of an abstract base class.
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
    Circle circle;
    Rectangle rectangle;

    circle.draw();       // Calls Circle's draw()
    rectangle.draw();    // Calls Rectangle's draw()
    return 0;
}
/*
Output:
Drawing a circle.
Drawing a rectangle.
*/

