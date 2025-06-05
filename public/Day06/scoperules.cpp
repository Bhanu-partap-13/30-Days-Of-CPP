//Scope is a region of the program where a defined variable can have its existence and beyond that variable it cannot be accessed. 
// 30 Days of C++ - By bhanu partap - learn more about me at https://github.com/Bhanu-partap-13
//There are three places where variables can be declared in C++:
//1. Inside a function or a block which is called local variables.
//2. In the definition of function parameters which are called formal parameters.
//3. Outside of all functions which are called global variables.

//Types of Variables based on Scope
//1. Local Variables - Variables declared inside a function or a block.
//2. Global Variables - Variables declared outside of all functions.

/*
-------------------------------------------------------------------------LOCAL VARIABLES-------------------------------------------------------------------------
They are only accessible within the function or block in which they are declared. They are not accessible outside the function or block.
*/

//Example Code
#include <iostream>
using namespace std;

void display()
{
    int x = 10; //Local Variable
    cout << "Value of x is: " << x << endl;
}

int main()
{
    display();
    //cout << x; //Error: x is not accessible here
    return 0;
}
//Output: Value of x is: 10

/*
-------------------------------------------------------------------------GLOBAL VARIABLES-------------------------------------------------------------------------
They are accessible throughout the program. They can be accessed by any function in the program.
*/

//Example Code
#include <iostream>
using namespace std;

int x = 10; //Global Variable

void display()
{
    cout << "Value of x is: " << x << endl;
}

int main()
{
    display();
    cout << "Value of x is: " << x << endl;
    return 0;
}

//Output: Value of x is: 10 
//        Value of x is: 10


//Example Code
#include <iostream>
using namespace std;

int x = 10; //Global Variable

void display()
{
    int x = 20; //Local Variable
    cout << "Value of x is: " << x << endl;
}

int main()
{
    display();
    cout << "Value of x is: " << x << endl;
    return 0;
}

//Output: Value of x is: 20
//        Value of x is: 10