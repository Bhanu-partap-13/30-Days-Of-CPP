//A Function is  a set of statements that takes inputs, do some specific computation and produces output.

//------------------------------------------------------------------DEFAULT ARGUMENT-------------------------------------------------------------
/*
In a function, if we don't pass the value of an argument then the default value of that argument is used.
A default argument is a value provided in a function declaration that is automatically assigned by the compiler if the caller of the function doesn't provide a value for the argument with a default value.
*/

//Characterstics of Defining Default Argument:
/*
1. Default arguments must be at the end of the argument list.
2. Default arguments must be constant or literals.
3. Default arguments must be provided in the function declaration, not in the function definition.
*/

//Example Code

#include <iostream>
using namespace std;

int sum(int a, int b = 20, int c = 30)
{
    return a + b + c;
}

int main()
{
    cout << sum(10) << endl;    //10+20+30=60 //Uses default value of b and c
    cout << sum(10, 40) << endl; //10+40+30=80 //Uses default value of c    
    cout << sum(10, 10, 10) << endl; //10+10+10=30 //Uses the value of all the arguments
    return 0;
}
//Practice the code and try to understand the concept of default argument.

//Advantages
/*
1. It provides flexibility to the user.
2. It reduces the number of overloaded functions.
*/

//Dissaadvantages
/*
1. It makes the code more complex.
2. It makes the code difficult to debug.
*/
