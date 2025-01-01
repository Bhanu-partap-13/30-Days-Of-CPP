//-------------------------------------------------Binary Operator Overloading-------------------------------------------------

//What is Binary Operator Overloading?
//Binary operator overloading is a compile-time polymorphism in which the operator is overloaded to perform operations on user-defined data types (objects).
//It allows us to redefine the behavior of binary operators like +, -, *, /, etc., for custom classes.

/*
In simple words:
Binary operator overloading in C++ allows you to customize how operators like +, -, *, etc., behave when used with your objects.
For example, instead of just adding two numbers with +, you can add two complex numbers or two matrices.
*/

/*
For example:
Suppose you have a class named `Matrix`. By overloading the '+' operator, you can add two matrices directly using the syntax Matrix1 + Matrix2.
*/

/*
Example Codes:
*/

/*Important Question (Practice this code at least 2-3 times)*/
//Code 1: Overloading the '+' Operator for Complex Numbers

#include <iostream>
using namespace std;

class Complex
{
private:
    int real, imag;

public:
    Complex(int r = 0, int i = 0) : real(r), imag(i) { }

    // Overloading the '+' operator
    Complex operator + (const Complex &obj)
    {
        Complex result;
        result.real = real + obj.real;
        result.imag = imag + obj.imag;
        return result;
    }

    void display() { cout << real << " + i" << imag << endl; }
};

int main()
{
    Complex c1(3, 2), c2(1, 7);
    Complex c3 = c1 + c2;
    c3.display();
    return 0;
}

//Output: 4 + i9


//Can we overload all the binary operators?
/*
No, we cannot overload all the operators. Some operators, like the scope resolution operator (::), sizeof, and conditional operator (?:), cannot be overloaded.
Only specific binary operators such as +, -, *, /, ==, etc., can be overloaded.
*/

/*
Rules for Binary Operator Overloading:
1. At least one operand must be a user-defined data type.
2. The number of operands cannot be changed (binary operators always take two operands).
3. Precedence and associativity of operators cannot be modified.
4. Binary operators must be defined as a member function or a friend function.
5. Overloaded operators must use the `operator` keyword.
*/

/*
Using Friend Functions for Binary Operator Overloading:
*/
//Code 2: Overloading the '+' Operator using Friend Function
#include <iostream>
using namespace std;

class Complex
{
private:
    int real, imag;

public:
    Complex(int r = 0, int i = 0) : real(r), imag(i) { }

    // Declaring the friend function for operator overloading
    friend Complex operator + (const Complex &c1, const Complex &c2);

    void display() { cout << real << " + i" << imag << endl; }
};

// Overloading the '+' operator using a friend function
Complex operator + (const Complex &c1, const Complex &c2)
{
    Complex result;
    result.real = c1.real + c2.real;
    result.imag = c1.imag + c2.imag;
    return result;
}

int main()
{
    Complex c1(5, 3), c2(2, 6);
    Complex c3 = c1 + c2;
    c3.display();
    return 0;
}
//Output: 7 + i9

//Difference between Member Function and Friend Function in Operator Overloading:
/*
                    Member Function                                                |                         Friend Function
1. Member functions are called using the object of the class.                      |  1. Friend functions are not called using the object of the class.
2. Member functions can access the private and protected members of the class.     |  2. Friend functions cannot access the private and protected members of the class.
3. Member functions are defined inside the class.                                  |  3. Friend functions are defined outside the class.
4. Member functions are used for operator overloading when the left operand is an  |  4. Friend functions are used for operator overloading when the left operand is a
   object of the class.                                                            |     primitive data type.
*/

//Differnce between unary operator overloading and binary operator overloading
/*
Unary Operator Overloading	                                                       |                      Binary Operator Overloading
1. Unary operator overloading involves only one operand.	                       |  1. Binary operator overloading involves two operands.
                                                                              Similarities
2. Unary operators like +, -, ++, --, etc., can be overloaded.	                   |  2. Binary operators like +, -, *, /, etc., can be overloaded.
3. Unary operators can be overloaded using a member function or a friend function. |  3. Binary operators can be overloaded using a member function or a friend function.
*/

