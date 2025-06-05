//---------------------------------------------------------Virutal Class------------------------------------------------------------------------

/*
- Virtual classes are used in C++ to prevent multiple "instances" of a base class appearing in the inheritance hierarchy when using multiple inheritance.
- This prevents ambiguity and redundancy when a derived class inherits from multiple base classes that share a common base class.
*/

/*
Syntax of Virtual Inheritance:
------------------------------
                                    class Base {
                                        // Base class body
                                    };

                                    class Derived1 : virtual public Base {
                                        // Derived1 body
                                    };

                                    class Derived2 : virtual public Base {
                                        // Derived2 body
                                    };

                                    class FinalDerived : public Derived1, public Derived2 {
                                        // FinalDerived body
                                    };
*/

//Example Codes

/*
Example 1: Solving Ambiguity with Virtual Inheritance
*/
#include <iostream>
using namespace std;

class A {
public:
    void show() 
    { 
        cout << "Class A show()" << endl; 
    }
};

class B : virtual public A {};
class C : virtual public A {};

class D : public B, public C {
    // Only one instance of class A is present in class D
};

int main() {
    D obj;
    obj.show(); // No ambiguity
    return 0;
}
/*
Output:
Class A show()
*/

//----------------------------------------------------Constructors in Virtual Classes-----------------------------------------------------------

/*
- When using virtual inheritance, constructors of the base class are called only once, regardless of how many derived classes share it.
- The most derived class (the last derived class in the hierarchy) is responsible for invoking the constructor of the virtual base class.
*/

/*
Example: Constructor Order in Virtual Inheritance
*/
#include <iostream>
using namespace std;

class A {
public:
    A() 
    { cout << "Constructor of A" << endl; 
    }
};

class B : virtual public A {
public:
    B() 
    { cout << "Constructor of B" << endl; 
    }
};

class C : virtual public A {
public:
    C(){ 
        cout << "Constructor of C" << endl; 
    }
};

class D : public B, public C {
public:
    D(){
         cout << "Constructor of D" << endl; 
    }
};

int main() {
    D obj;
    return 0;
}
/*
Output:
Constructor of A
Constructor of B
Constructor of C
Constructor of D
*/

//----------------------------------------------------Polymorphism in Virtual Classes-----------------------------------------------------------

/*
- Virtual inheritance works seamlessly with polymorphism.
- Virtual functions in a virtual base class can be overridden in derived classes and resolved using pointers or references.
*/
