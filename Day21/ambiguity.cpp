//----------------------------------------------------Solving Ambiguity in Inheritance-----------------------------------------------------------

/*
- Ambiguity in inheritance arises when two base classes have functions with the same name, and a derived class inherits from both base classes. The compiler cannot determine which base class function to invoke, leading to ambiguity.
- C++ provides methods to solve this ambiguity:

1. Scope Resolution Operator:
   Specify the base class explicitly using the scope resolution operator (::).

2. Virtual Base Classes:
   Use virtual inheritance to avoid multiple instances of the base class in the derived class.
*/

/*
Example 1: Solving Ambiguity with Scope Resolution Operator
*/
#include <iostream>
using namespace std;

class A {
public:
    void display() { cout << "Class A display()" << endl; }
};

class B {
public:
    void display() 
    { cout << "Class B display()" << endl; 
    }
};

class C : public A, public B {
public:
    void show() {
        A::display(); // Resolving ambiguity by specifying class A
        B::display(); //     "         "      "      "       "   B
    }
};

int main() {
    C obj;
    obj.show();
    return 0;
}
/*
Output:
Class A display()
Class B display()
*/

/*
Example 2: Using Virtual Base Classes to Solve Ambiguity
*/
#include <iostream>
using namespace std;

class A {
public:
    void display()
    {
     cout << "Display of Class A" << endl; 
    }
};

class B : virtual public A {};
class C : virtual public A {};

class D : public B, public C {
    // No ambiguity, only one instance of A exists in D
};

int main() {
    D obj;
    obj.display();
    return 0;
}
/*
Output:
Display of Class A
*/

//----------------------------------------------------Constructors and Destructors in Inheritance-----------------------------------------------------------

/*
- Constructors and destructors in inheritance follow a specific order:

1. The constructor of the base class is called first, followed by the derived class constructor.
2. The destructor of the derived class is called first, followed by the base class destructor.
*/

/*
Example: Constructor and Destructor Order
*/
#include <iostream>
using namespace std;

class Base {
public:
    Base(){
     cout << "Base class constructor" << endl; 
    }
    ~Base(){
     cout << "Base class destructor" << endl; 
    }
};

class Derived : public Base {
public:
    Derived() 
    { cout << "Derived class constructor" << endl; 
    }
    ~Derived() 
    { cout << "Derived class destructor" << endl; 
    }
};

int main() {
    Derived obj;
    return 0;
}
/*
Output:
Base class constructor
Derived class constructor
Derived class destructor
Base class destructor
*/

//----------------------------------------------------Polymorphism Using Inheritance-----------------------------------------------------------

/*
- Polymorphism in inheritance allows a derived class to redefine or override methods from the base class.
- Types:

1. Compile-time Polymorphism (Function Overloading and Operator Overloading)
2. Runtime Polymorphism (Function Overriding and Virtual Functions)
*/

/*
Example 1: Runtime Polymorphism with Virtual Functions
*/
#include <iostream>
using namespace std;

class Base {
public:
    virtual void show()
    { 
        cout << "Base class show()" << endl; 
    }
};

class Derived : public Base {
public:
    void show() override { 
        cout << "Derived class show()" << endl; 
    }
};

int main() {
    Base* basePtr;
    Derived derivedObj;
    basePtr = &derivedObj;

    basePtr->show(); // Calls Derived class's show() due to virtual function
    return 0;
}
/*
Output:
Derived class show()
*/

/*
Example 2: Compile-time Polymorphism with Function Overloading
*/
#include <iostream>
using namespace std;

class Base {
public:
    void show(int x) { 
        cout << "Base class show(int x): " << x << endl; 
        }
    void show(double y) 
    {
         cout << "Base class show(double y): " << y << endl; 
    }
};

int main() {
    Base obj;
    obj.show(5);     // Calls show(int x)
    obj.show(3.14);  // Calls show(double y)
    return 0;
}
/*
Output:
Base class show(int x): 5
Base class show(double y): 3.14
*/
