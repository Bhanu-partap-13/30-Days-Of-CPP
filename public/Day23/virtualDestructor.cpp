//------------------------------------------------------------Virtual Destructor--------------------------------------------------------------------
// 30 Days of C++ - By bhanu partap - learn more about me at https://github.com/Bhanu-partap-13
/*
- A 'virtual destructor' ensures proper cleanup of resources in a class hierarchy when dealing with polymorphism.
- If a base class pointer points to a derived class object and the base class destructor is not virtual, only the base class destructor will be called during object destruction.
- This can lead to resource leaks or undefined behavior as the derived class destructor will not execute.

- Making the destructor **virtual** ensures that the destructor of the most derived class is called first, followed by the base class destructors, ensuring proper cleanup.
*/

/*
Syntax:
--------
class Base {
public:
    virtual ~Base() {
        // Destructor code for Base
    }
};
*/

/*
When to Use:
------------
1. Use virtual destructors when you have a base class with at least one virtual function and you expect it to be used polymorphically.
2. If no polymorphism is used, a virtual destructor is unnecessary and may introduce slight overhead.
*/

//--------------------------------------------------------Example Codes----------------------------------------------------------
// I will showcase you the difference of 1. Without virtual destructor & 2. With virtual destructor
/*
Example 1: Without a Virtual Destructor
*/
#include <iostream>
using namespace std;

class Base {
public:
    ~Base() { 
        cout << "Base destructor called." << endl; 
    }
};

class Derived : public Base {
public:
    ~Derived() { 
        cout << "Derived destructor called." << endl; 
    }
};

int main() {
    Base* ptr = new Derived(); // Base class pointer pointing to a derived class object
    delete ptr; // Only Base destructor is called (undefined behavior for Derived cleanup)
    return 0;
}
/*
Output:
Base destructor called.
[Derived destructor is not called, leading to resource leaks if Derived allocates resources]
*/

/*
Example 2: With a Virtual Destructor
*/
#include <iostream>
using namespace std;

class Base {
public:
    virtual ~Base() { 
        cout << "Base destructor called." << endl; 
    }
};

class Derived : public Base {
public:
    ~Derived() { 
        cout << "Derived destructor called." << endl; 
    }
};

int main() {
    Base* ptr = new Derived(); // Base class pointer pointing to a derived class object
    delete ptr; // Both Derived and Base destructors are called
    return 0;
}
/*
Output:
Derived destructor called.
Base destructor called.
*/

/*
Example 3: Virtual Destructors with Dynamic Memory
*/
#include <iostream>
using namespace std;

class Base {
public:
    int* data;

    Base() {
        data = new int(10);
        cout << "Base constructor called." << endl;
    }

    virtual ~Base() {
        delete data; // Cleanup dynamically allocated memory
        cout << "Base destructor called." << endl;
    }
};

class Derived : public Base {
public:
    int* extraData;

    Derived() {
        extraData = new int(20);
        cout << "Derived constructor called." << endl;
    }

    ~Derived() {
        delete extraData; // Cleanup dynamically allocated memory
        cout << "Derived destructor called." << endl;
    }
};

int main() {
    Base* ptr = new Derived();
    delete ptr; // Proper cleanup of both Base and Derived class resources
    return 0;
}
/*
Output:
Base constructor called.
Derived constructor called.
Derived destructor called.
Base destructor called.
*/
