//-------------------------------------------------Unary Operator Overloading in C++-------------------------------------------------

//What is Unary Operator Overloading?
//Unary operator overloading allows us to define a new behavior for unary operators (like -, ++, --, etc.) when applied to objects of user-defined classes.
//This is a form of polymorphism where operators are customized to perform specific operations on user-defined data types.

/*
Unary operators operate on a single operand. Examples include:
1. Increment (++),
2. Decrement (--),
3. Logical NOT (!),
4. Unary minus (-),
5. Address-of operator (&), etc.

Why is Unary Operator Overloading Needed?
Unary operators by default do not comprehend the behavior of user-defined class members, leading to compilation errors. To enable their use with objects, operator overloading is required.
*/

//Syntax for Overloading Unary Operators in C++:
/*
class ClassName {
    public:
        returnType operator <symbol>() {
            // Implementation
        }
};
*/

//Example 1: Overloading Unary Minus Operator for a User-Defined Class
#include <iostream>
using namespace std;

class Complex {
private:
    int real, imag;

public:
    Complex() : real(0), imag(0) {}
    Complex(int r, int i) : real(r), imag(i) {}

    // Overloading unary minus operator
    Complex operator-() {
        return Complex(-real, -imag);
    }

    void display() {
        cout << real << " + " << imag << "i";
    }
};

int main() {
    Complex c1(3, 4);
    Complex c2 = -c1;

    cout << "Original complex number: ";
    c1.display();
    cout << endl;

    cout << "Negated complex number: ";
    c2.display();
    cout << endl;

    return 0;
}
/* Output:
Original complex number: 3 + 4i
Negated complex number: -3 + -4i
*/


//Example 2: Overloading Unary Minus Using a Member Function
#include <iostream>
using namespace std;

class MyNumber {
private:
    int value;

public:
    MyNumber() : value(0) {}
    MyNumber(int val) : value(val) {}

    // Overloading unary minus (-) operator
    MyNumber operator-() {
        return MyNumber(-value);
    }

    void display() {
        cout << "Value: " << value << endl;
    }
};

int main() {
    MyNumber num1(7);
    cout << "num1: ";
    num1.display();

    MyNumber num2 = -num1;
    cout << "num2 (after unary minus): ";
    num2.display();

    return 0;
}
/* Output:
num1: Value: 7
num2 (after unary minus): Value: -7
*/

//Example 3: Overloading Unary Minus Using a Global Friend Function
#include <iostream>
using namespace std;

class Complex {
private:
    int real, imag;

public:
    Complex() : real(0), imag(0) {}
    Complex(int r, int i) : real(r), imag(i) {}

    // Friend function to overload unary minus
    friend Complex operator-(const Complex &obj);

    void print() {
        cout << real << (imag < 0 ? " - " : " + ") << "i" << abs(imag) << endl;
    }
};

// Overloading unary minus (-) operator
Complex operator-(const Complex &obj) {
    return Complex(-obj.real, -obj.imag);
}

int main() {
    Complex c1(-5, -4);
    cout << "c1 = ";
    c1.print();

    Complex c2 = -c1;
    cout << "c2 = ";
    c2.print();

    return 0;
}
/* Output:
c1 = -5 - i4
c2 = 5 + i4
*/
