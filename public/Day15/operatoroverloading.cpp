//-------------------------------------------------Operator Overloading-------------------------------------------------
// 30 Days of C++ - By bhanu partap - learn more about me at https://github.com/Bhanu-partap-13
//What is Operator Overloading?
//Operator overloading is a compile-time polymorphism in which the operator is overloaded to provide the special meaning to the user-defined data type. 
//Operator overloading is used to overload or redefines most of the operators available in C++.
// It is used to perform the operation on the user-defined data type.

/*
In simple words:
Operator overloading in C++ allows you to give extra meaning to operators like +, -, *, etc., for your custom data types.
 It’s like teaching these operators new tricks.
 For example, normally, you use + to add two numbers. But with operator overloading, you could use + to join two strings together or add two complex numbers.
*/
/*
For example you are having a class name `string`. By `Overloading` the '+' operator, you can concatenate two strings. (Just by writing String1 + String2)
*/

/*
Example:
int a;
float b,sum;
sum = a + b;
Here, the operator ‘+’ is used to add two operands a and b. The operator ‘+’ is overloaded to concatenate two strings.
*/

/*
Example Codes:
*/
/*Important Question (Practice this code at least 2-3 times)*/
//Code 1
#include <iostream>
using namespace std;

class Complex
{
    private:
        int real, imag;
    public:
        Complex(int r = 0, int i = 0) : real(r), imag(i) { }
        Complex operator + (Complex const &obj)
        {
            Complex res;
            res.real = real + obj.real;
            res.imag = imag + obj.imag;
            return res;
        }
        void print() { cout << real << " + i" << imag << endl; }
};

int main()
{
    Complex c1(10, 5), c2(2, 4);
    Complex c3 = c1 + c2;
    c3.print();
    return 0;
}
//Output: 12 + i9


//Can we overload all the operators?
/*
No, we can’t overload all the operators. Only the following operators can be overloaded:

We can’t overload the following operators:
1. Scope resolution operator (::)
2. Sizeof operator
3. Conditional operator (?:)
4. Member selector operator (.)
5. Member pointer operator (.*)
*/

/*Operators that can be overloaded in C++:
1. unary operator overloading
2. binary operator overloading
3. special operator overloading
*/
/*
Implicit Converison using Operator Overloading
*/
//Code 2
#include <iostream>
using namespace std;

class Complex
{
    private:
        int real, imag;
    public:
        Complex(int r = 0, int i = 0) : real(r), imag(i) { }
        operator int() { return real; }
};

int main()
{
    Complex c1(10, 5);
    int x = c1; //Implicit Conversion
    cout << x;
    return 0;
}
//Output: 10

/*
Rules for Operator Overloading:
1. The overloaded operator must have at least one operand of the user-defined data type.
2. We can’t change the number of operands of an operator.
3. Precedence and Associativity can’t be changed.
4. The overloaded operator must be defined inside the class.
5. The overloaded operator should be declared with the keyword ‘operator’.
*/
