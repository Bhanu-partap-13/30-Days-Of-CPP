//-----------------------------------------------------------Pure Virtual Function-----------------------------------------------------------------

/*
- A 'pure virtual function' in C++ is a virtual function declared in a base class that must be overridden in all derived classes.
- It is specified by assigning `= 0` to the virtual function declaration.
- A class containing at least one pure virtual function is known as an 'abstract class'.
- Abstract classes cannot be instantiated, but pointers or references to them can be used for achieving run-time polymorphism.
*/

//---------------------------------------------------------Syntax of Pure Virtual Functions---------------------------------------------------------
/*
class AbstractClass {
public:
    virtual void pureVirtualFunction() = 0; // Pure virtual function
};
*/

//-----------------------------------------------------------Example Codes--------------------------------------------------------------------------

/*
Example 1: Implementing a Pure Virtual Function
*/
#include <iostream>
using namespace std;

class Animal {
public:
    virtual void sound() = 0; // Pure virtual function
    virtual ~Animal() {}      // Virtual destructor for proper cleanup
};

class Dog : public Animal {
public:
    void sound() override {
        cout << "Dog barks." << endl;
    }
};

class Cat : public Animal {
public:
    void sound() override {
        cout << "Cat meows." << endl;
    }
};

int main() {
    Animal* animal;

    Dog dog;
    Cat cat;

    animal = &dog;
    animal->sound(); // Calls Dog's sound()

    animal = &cat;
    animal->sound(); // Calls Cat's sound()

    return 0;
}
/*
Output:
Dog barks.
Cat meows.
*/

/*
Example 2: Abstract Class with Multiple Derived Classes
*/
#include <iostream>
using namespace std;

class Shape {
public:
    virtual void draw() = 0; // Pure virtual function
    virtual ~Shape() {}
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
