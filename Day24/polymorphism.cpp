//------------------------------------------------------------Polymorphism in C++------------------------------------------------------------

/*
- **Polymorphism** allows a single interface to represent different types or behaviors.
- It is one of the core principles of Object-Oriented Programming (OOP) and comes in two types:
    1. **Compile-time Polymorphism** (Static Binding) - Achieved through function overloading and operator overloading.
    2. **Run-time Polymorphism** (Dynamic Binding) - Achieved through inheritance and virtual functions.
*/

/*
Benefits of Polymorphism:
-------------------------
1. Code reusability.
2. Simplifies code maintenance and readability.
3. Promotes scalability in software design.
*/

//--------------------------------------------------------Types of Polymorphism--------------------------------------------------------

/*
1. Compile-time Polymorphism (Static Binding):
------------------------------------------------
- Achieved using function overloading and operator overloading.
*/

/*
Example: Function Overloading
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
    cout << "Sum (int): " << calc.add(5, 10) << endl;       // Calls int version
    cout << "Sum (double): " << calc.add(5.5, 10.5) << endl; // Calls double version
    return 0;
}
/*
Output:
Sum (int): 15
Sum (double): 16
*/

/*
Example: Operator Overloading
*/
#include <iostream>
using namespace std;

class Complex {
    int real, imag;

public:
    Complex(int r = 0, int i = 0) : real(r), imag(i) {}

    // Overload + operator
    Complex operator+(const Complex& obj) {
        return Complex(real + obj.real, imag + obj.imag);
    }

    void display() {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main() {
    Complex c1(3, 4), c2(1, 2);
    Complex c3 = c1 + c2; // Calls overloaded operator
    c3.display();
    return 0;
}
/*
Output:
4 + 6i
*/

/*
2. Run-time Polymorphism (Dynamic Binding):
--------------------------------------------
- Achieved using inheritance and virtual functions, abstract class.
*/
