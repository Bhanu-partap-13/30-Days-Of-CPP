//-----------------------------------------------------------Exception Handling-------------------------------------------------------------------

/*
- `Exception handling` is a mechanism to handle runtime errors in a program, ensuring the program runs smoothly without crashing.
- It separates error-handling code from regular code.
- C++ provides the "try-catch-throw" construct for handling exceptions.
*/

//Types Of Exceptions in CPP
/*
1. Synchronous - Exceptions that happen when something goes wrong because of a mistake in input data. Eg: Dividing a number with Zero.
2. Asynchronous - Exceptions that are beyond the program's control, such as disk failure. 
*/


//-----------------------------------------------------------Key Concepts---------------------------------------------------------------------------
/*
1. try block: The code that might throw an exception is placed inside the try block.
2. throw: Used to signal (or "throw") an exception.
3. catch block: Handles the exception thrown by the try block.
4. exception class: User-defined classes can also be used to represent exceptions.
*/

//------------------------------------------------------------Syntax-----------------------------------------------------------------------------

/* CPP provides an inbuilt feature for exceptional handling. Try, Catch and Throw each of them having different purposes.
1. try in CPP - It represents the block of code that may throw exception inside placed inside the try block.
2. Catch in CPP - It represents the block of code that is executed when particular exception is thrown from try block.
3. throw in Cpp -  when proram encounters the throw statement, it immediately terminates the current function and start finding the catch block.

try {
    // Code that may throw an exception
    throw exception; // Throwing an exception
}
catch (type exception_var) {
    // Code to handle the exception
}

--------------------------------------------------------------Example Of syntax-------------------------------------------------------------------
try {
  int age = 15;
  if (age >= 18) {
    cout << "Access granted - you are old enough.";
  } else {
    throw (age);
  }
}
catch (int myNum) {
  cout << "Access denied - You must be at least 18 years old.\n";
  cout << "Age is: " << myNum;
}
*/

//------------------------------------------------------------Example Codes----------------------------------------------------------------------

/*
Example 1: Basic Exception Handling

#include <iostream>
using namespace std;

int main() {
    try {
        int num = 10, denom = 0;
        if (denom == 0) {
            throw "Division by zero exception!";
        }
        cout << "Result: " << num / denom << endl;
    }
    catch (const char* msg) {
        cout << "Exception caught: " << msg << endl;
    }

    return 0;
}*/
/*
Output:
Exception caught: Division by zero exception!
*/

/*
Example 2: Catching Multiple Exceptions

#include <iostream>
using namespace std;

int main() {
    try {
        int num = -1;

        if (num < 0) {
            throw num; // Throwing an integer exception
        }
    }
    catch (int e) {
        cout << "Integer exception caught: " << e << endl;
    }
    catch (...) {
        // Catch-all handler
        cout << "Unknown exception caught!" << endl;
    }

    return 0;
}*/
/*
Output:
Integer exception caught: -1
*/

/*
Example 3: User-Defined Exception Class

#include <iostream>
#include <string>
using namespace std;

class CustomException {
    string message;

public:
    CustomException(string msg) : message(msg) {}
    string what() { return message; }
};

int main() {
    try {
        throw CustomException("This is a custom exception!");
    }
    catch (CustomException& e) {
        cout << "Exception caught: " << e.what() << endl;
    }

    return 0;
} */
/*
Output:
Exception caught: This is a custom exception!
*/

//------------------------------------------------------------Example 4: Nested Try-Catch-------------------------------------------------------

#include <iostream>
using namespace std;

int main() {
    try {
        try {
            throw "Inner Exception";
        }
        catch (const char* msg) {
            cout << "Inner Catch: " << msg << endl;
            throw; // Re-throwing the exception
        }
    }
    catch (const char* msg) {
        cout << "Outer Catch: " << msg << endl;
    }

    return 0;
}
/*
Output:
Inner Catch: Inner Exception
Outer Catch: Inner Exception
*/


//------------------------------------------------------------Important Points-------------------------------------------------------------------
/*
1. Stack Unwinding: When an exception is thrown, destructors for all objects in the current scope are called before the catch block executes.
2. Catch-All Handler: `catch(...)` is used to catch all types of exceptions.
3. Re-throwing Exceptions: An exception can be re-thrown using `throw;` within a catch block.
4. Nested Try-Catch: Try-catch blocks can be nested for more granular error handling.
5. Standard Exceptions: C++ provides standard exception classes like `std::exception`, `std::runtime_error`, `std::out_of_range`, etc.
*/

