//------------------------------------------------------Rethrowing an Exception in C++----------------------------------------------------------

/*
- It allows an exception to be caught in one `catch` block and then propagated (or re-thrown) to another `catch` block.
- This is useful when an exception needs partial handling in the current context and complete handling in an outer context.
- The `throw;` keyword (without any arguments) is used to rethrow an exception in C++.
*/

//----------------------------------------------------------Syntax-------------------------------------------------------------------------------
/*
try {
    // Code that may throw an exception
    throw exception; // Throw an exception
}
catch (type exception_var) {
    // Handle the exception partially
    throw; // Rethrow the same exception
}

--------------------Example----------------------
try { 
	try { 
		throw runtime_error("Nested exception"); 
	} 
	catch (const exception& nested) { 
		throw_with_nested(logic_error("Outer exception")); 
	} 
} 
catch (const exception& outer) { 
	// Handle the outer exception and potentially access the 
	// nested exception 
	try { 
		rethrow_if_nested(outer); 
	} 
	catch (const exception& nested) { 
		// Handle the nested exception 
	} 
}

*/

//----------------------------------------------------------Example Codes------------------------------------------------------------------------

/*
Example 1: Basic Rethrowing of an Exception
*/
#include <iostream>
using namespace std;

void testFunction() {
    try {
        throw "An error occurred!";
    }
    catch (const char* msg) {
        cout << "Caught inside testFunction: " << msg << endl;
        throw; // Rethrowing the exception
    }
}

int main() {
    try {
        testFunction();
    }
    catch (const char* msg) {
        cout << "Caught inside main: " << msg << endl;
    }

    return 0;
}
/*
Output:
Caught inside testFunction: An error occurred!
Caught inside main: An error occurred!
*/


/*
Example 2: Rethrowing After Partial Handling
*/
#include <iostream>
using namespace std;

void divide(int a, int b) {
    try {
        if (b == 0) {
            throw "Division by zero!";
        }
        cout << "Result: " << a / b << endl;
    }
    catch (const char* msg) {
        cout << "Partial Handling in divide(): " << msg << endl;
        throw; // Rethrow the exception for further handling
    }
}

int main() {
    try {
        divide(10, 0);
    }
    catch (const char* msg) {
        cout << "Final Handling in main(): " << msg << endl;
    }

    return 0;
}
/*
Output:
Partial Handling in divide(): Division by zero!
Final Handling in main(): Division by zero!
*/


/*
Example 3: Rethrowing Using a Catch-All Handler
*/
#include <iostream>
using namespace std;

void process() {
    try {
        throw 404; // Throwing an integer exception
    }
    catch (...) {
        cout << "Caught an exception in process()" << endl;
        throw; // Rethrow the exception
    }
}

int main() {
    try {
        process();
    }
    catch (int code) {
        cout << "Exception Caught in main: Error Code " << code << endl;
    }
    catch (...) {
        cout << "Unknown exception caught in main!" << endl;
    }

    return 0;
}
/*
Output:
Caught an exception in process()
Exception Caught in main: Error Code 404
*/


//----------------------------------------------------------Important Notes---------------------------------------------------------------------
/*
1. **throw; vs throw exception;**:
   - `throw;` rethrows the current exception.
   - `throw exception;` throws a new exception.
2. **Catch-All Rethrow**: Use `catch(...)` for generic rethrowing when the exception type is unknown.
3. **Scope of Rethrow**: Rethrowing can only be done within a `catch` block. Attempting it outside will result in a compilation error.
4. **Stack Unwinding**: Before the rethrown exception is caught in an outer `try-catch`, destructors for all local objects in the current scope are called.
*/