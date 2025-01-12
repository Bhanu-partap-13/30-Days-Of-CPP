//------------------------------------------------------------Early Binding-----------------------------------------------------------------------

/*
- **Early Binding**, also known as **static binding**, refers to the process where the function to be called is determined at compile-time.
- In early binding, the compiler directly associates the function call with the function definition during compilation.
- Early binding is the default behavior for non-virtual functions in C++.
- It offers better performance since the function call is resolved during compilation and doesn't require runtime decision-making.
*/

//-------------------------------------------------------------Characteristics of Early Binding-------------------------------------------------
/*
1. Associated with non-virtual functions and overloaded functions.
2. Faster because the function address is resolved at compile-time.
3. Does not support runtime polymorphism.
*/

//-------------------------------------------------------------Example Codes--------------------------------------------------------------------

/*
Example 1: Early Binding with Non-Virtual Functions
*/
#include <iostream>
using namespace std;

class Base {
public:
    void show() {
        cout << "Base class function" << endl;
    }
};

class Derived : public Base {
public:
    void show() {
        cout << "Derived class function" << endl;
    }
};

int main() {
    Base b;
    Derived d;

    Base* basePtr = &d;
    
    // Early binding: Base class function is called
    basePtr->show(); 
    return 0;
}
/*
Output:
Base class function
*/

/*
Example 2: Early Binding with Function Overloading
*/
#include <iostream>
using namespace std;

class Calculator {
public:
    int add(int a, int b) {
        return a + b;
    }

    double add(double a, double b) {
        return a + b;
    }
};

int main() {
    Calculator calc;

    // Early binding: Compiler determines which `add` function to call based on argument types
    cout<<"Sum of integers: "<< calc.add(10, 20)<<endl;
    cout<<"Sum of doubles: "<< calc.add(5.5, 2.3)<<endl;

    return 0;
}
/*
Output:
Sum of integers: 30
Sum of doubles: 7.8
*/

/*
Example 3: Early Binding with Function Overriding (without Virtual Functions)
*/
#include <iostream>
using namespace std;

class Parent {
public:
    void display() {
        cout <<"Parent class display function (Early Binding)" << endl;
    }
};

class Child : public Parent {
public:
    void display() {
        cout<<"Child class display function (Early Binding)" << endl;
    }
};

int main() {
    Parent p;
    Child c;

    Parent* ptr = &c;

    // Early binding: Parent class function is called
    ptr->display();

    return 0;
}
/*
Output:
Parent class display function (Early Binding)
*/
