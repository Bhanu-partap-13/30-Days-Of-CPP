/*C++ Operators
1. Unary Operator
2. Binary Operator
3. Ternary Operator
*/
/*
1. Unary Operator -  provides increment operators and decrement Operator (++, --)
 ++ - increase value of operand by 1
 -- - decrease it by 1
*/

#include <iostream>
using namespace std;

int main() {
int var1 = 5, var2 = 5;
cout << var1++ << endl;
cout << ++var2 << endl;
return 0;
}

/*
Aritmetic Operators - Addition(+), Subtraction(-), Multiplication(*), Division(/), Modulus(%) 
*/
#include <iostream>
using namespace std;

int main() {
int a, b;
a = 7;
b = 2;
cout<< "a + b = "<<(a + b) << endl;
cout<< "a - b = "<<(a - b) << endl;
cout<< "a * b = "<<(a * b) << endl;
cout<< "a / b = "<<(a / b) << endl;
cout<< "a % b = "<<(a % b) << endl;
return 0;
}

/*
Relationship Operator - used to check relationship between twp operands*/

#include <iostream>
using namespace std;

int main() {
int a, b;
a= 3;
b = 5;
bool result;
result =(a == b);
cout << "3 == 5 is " << result << endl;
result = (a != b);
cout << "3 != 5 is " << result << endl;
result = a > b;
cout << "3 > 5 is " << result << endl;
result = a < b;
cout << "3 < 5 is " << result << endl;
result = a >= b;
cout << "3 >= 5 is " << result << endl;
result = a <= b;
cout << "3 <= 5 is " << result << endl;
return 0;
}

//Logical Operator - used to check whether  expression is true or false
/*
&& - logical AND
|| - logical OR
! -  logical NOT*/

#include <iostream>
using namespace std;

int main() {
bool result;
result=(3 != 5) && (3 < 5);
cout << "(3 != 5) && (3 < 5) is " << result << endl;

result=(3 == 5) && (3 < 5);
cout << "(3 == 5) && (3 < 5) is " << result << endl;

result=(3 == 5) && (3 > 5);
cout << "(3 == 5) && (3 > 5) is " << result << endl;

result=(3 != 5) || (3 < 5);
cout << "(3 != 5) || (3 < 5) is " << result << endl;

result=(3 != 5) || (3 > 5);
cout << "(3 != 5) || (3 > 5) is " << result << endl;

result=(3 == 5) ||(3 > 5);
cout << "(3 == 5) | | (3 > 5) is " << result << endl;

result =! (5 == 2);
cout << "!(5 == 2) is " << result << endl;

result = !(5 == 5);
cout << "! (5 == 5) is " << result << endl;

return 0;
}

//BitWise Operator - if a=65 and B=15, binary values of 65 = 0100 0001; 15 = 0000 1111

#include <iostream>
using namespace std;

int main() {
unsigned int a = 50;
unsigned int b = 12;
int c = 0;

c = a & b;
cout << "c = " << c << endl ;
c = a | b;
cout << "c = " << c << endl ;
c = a ^ b;
cout << "c = " << c << endl ;
c = ~a;
cout << "c = " << c << endl ;
c = a << 2;
cout << "c = " << c << endl ;
c = a >> 2;
return 0;
}

// Assignment Operator for eg : a=2, c=10 and i have written c+=a then it means 10+2=12

#include<iostream>
using namespace std;

int main() {
int a = 21;
int c;

c = a;
cout << "c = " << c << endl;
c += a;
cout << "c = " << c << endl;
c -= a;
cout << "c = " << c << endl;
c *= a;
cout << "c = " << c << endl;
c /= a;
cout << "c = " << c << endl;
c %= a;
cout << "c = " << c << endl;

return 0;
}

// Ternary Operators - evaluate text conditions and execute expressions
// condition ? expression1 : expression2 ;

#include <iostream>
using namespace std;
int main() {
int a = 10;
int b = 20;
int max = a > b ? a : b;
cout << "Maximum value = " << max;
return 0;
}

/*
Others Operators in C++ 

The Comma operator - Comma (, ) is an operator in C++ used to string together several expressions. The group of expression separated by comma is evaluated from left to right.

Sizeof - This is called as compile time operator. It returns the size of a variable in bytes.

Pointer - (*) Pointer to a variable, (&) Address of

Component selection - (.)Direct component selector, (->)Indirect component selector

Class member operators - (::) Scope access / resolution, (.*)Dereference, (->*)Dereference pointer to class member

*/

#include <iostream>
using namespace std;

int main() {
cout << 8 + (6 * 2) / 2 - 10 ;
return 0;
}

//-------------------------------------------------END oF DAY1-------------------------------------------------------------------