// ----------------------------------------------------------Inheritance in C++-------------------------------------------------------------------

//In C++, We can inherit the  attributes and the methods from one class to another.
// WE group 'Inheritance Concept' into two categories:

/*
What Is Child Class?
-> A child class is a class that  inherits properties and behaviors from the parent class.

What Is Parent Class?
-> A parent class is a class from which properties and methods are inherited.

*/

/*
1. Derived Class - (it is the child cLass) - the class that inherits from another class
2. Base Class - (it is the parent class) - class being inheritd from
*/

/*
Syntax:
class BaseClass {
    // Members of the base class
};

class DerivedClass : accessSpecifier BaseClass {
    // Members of the derived class
};
*/

/*
Access Specifier -> Determines the accessibility of the base class's members in the derived class:
public: Members remain public/protected in the derived class.
protected: Members become protected in the derived class.
private: Members become private in the derived class.
*/

//Example Code
//Code -1 (Simple Inheritance)
#include <iostream>
using namespace std;

class Parent {
public:
    void display() {
        cout << "This is the Parent class." << endl;
    }
};

class Child : public Parent {
    // Inherits display() from Parent class
};

int main() {
    Child c;
    c.display(); 
    return 0;
}
//Output: This is the Parent class.

//Code2
#include <iostream>
using namespace std;

class Parent {
public:
    void greet() {
        cout << "Hello from the Parent class!" << endl;
    }
};

class Child : public Parent {
public:
    void greet() {
        cout << "Hello from the Child class!" << endl;
    }
};

int main() {
    Child c;
    c.greet(); 
    return 0;
}
// Output: Hello from the Child class!

/*
Benefits of Inheritance ->
1. Code Reusability: Write once, use in multiple classes.
2. Extensibility: Add new functionality without modifying existing code.
3. Polymorphism: Achieved through function overriding.
*/

/*
Rules for Inheritance:
1. A derived class cannot access private members of the base class directly unless the base class provides getters or friend access.
2. Constructors and destructors are not inherited.
3. A base class must be constructed before its derived class in the inheritance chain.
*/