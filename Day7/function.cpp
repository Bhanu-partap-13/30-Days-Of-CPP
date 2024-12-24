//-------------------------------------------------------------------------Function In C++-------------------------------------------------------------------------

/*
A function is defined as a group of statements that together perform a task. 
Every C++ program has at least one function, which is main(), and all the most trivial programs can define additional functions.
Function is used to minimize the redundancy of code and to make the code more modular.
*/

/*
Syntax of function:
return_type function_name( parameter list ) {
   body of the function
}
*/

/*
Function Declaration:
int add(int a, int b);
*/

/*
Function Definition:
int add(int a, int b) {
   return a+b;
}
*/

/*
Calling a Function:
int main() {
   int sum = add(10, 20);
   cout << "Sum is: " << sum;
   return 0;
}
*/

//Function having two types of calling methods: Call by Value and Call by Reference

//Call by Value
#include <iostream>
using namespace std;

void swap(int x, int y) { // value variables
   int temp;
   temp = x; /* save the value of x */
   x = y;    /* put y into x */
   y = temp; /* put x into y */
   return;
}

int main() {
   int a = 100;
   int b = 200;
   cout << "Before swap, value of a :" << a << endl;
   cout << "Before swap, value of b :" << b << endl;
   /* calling a function to swap the values */
   swap(a, b);
   cout << "After swap, value of a :" << a << endl;
   cout << "After swap, value of b :" << b << endl;
   return 0;
}
//Output: Before swap, value of a :100
//        Before swap, value of b :200
//        After swap, value of a :100
//        After swap, value of b :200


//Call by Reference
#include <iostream>
using namespace std;

void swap(int &x, int &y) { // reference variables
   int temp;
   temp = x; /* save the value of x */
   x = y;    /* put y into x */
   y = temp; /* put x into y */
   return;
}

int main() {
   int a = 100;
   int b = 200;
   cout << "Before swap, value of a :" << a << endl;
   cout << "Before swap, value of b :" << b << endl;
   /* calling a function to swap the values */
   swap(a, b);
   cout << "After swap, value of a :" << a << endl;
   cout << "After swap, value of b :" << b << endl;
   return 0;
}
//Output: Before swap, value of a :100
//        Before swap, value of b :200
//        After swap, value of a :200
//        After swap, value of b :100
