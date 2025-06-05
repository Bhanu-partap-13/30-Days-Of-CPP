//--------------------------------------------------------------------------Inline Function---------------------------------------------------------------------------------------

/*
A function is a block of code that performs a specific task.
 In C++, functions are used to perform certain operations:-
 1. Functions are used to reduce the redundancy of code and make the code more manageable. 
 2. In C++, functions are defined outside the class. 
 3.  Functions can be defined inside the class and outside
*/
// 30 Days of C++ - By bhanu partap - learn more about me at https://github.com/Bhanu-partap-13
//Inline Function:- Inline function is a function that is expanded in line when it is called. 
/*When the inline function is called whole code of the inline function gets inserted or substituted at the point of inline function call. 
This substitution is performed by the C++ compiler at compile time. */

/*
How to Create a Function in C++?
To create a function in C++, you need to follow the below steps:
1. Function Declaration: Declare the function with the return type, function name, and parameters. //Function prototype
2. Function Definition: Define the function with the return type, function name, and parameters. //Function body
3. Function Call: Call the function by using the function name. //Function call
*/
/*
Syntax:
return_type function_name(parameters)
{
    //function body
} 
Eg: void display()
    {
        cout << "Hello World";
    }
*/


//How to Create an Inline Function?
/*
To create an inline function, you need to use the inline keyword before the function name.
Syntax:
inline return_type function_name(parameters)
{
    //function body
}

Eg: inline void display()
    {
        cout << "Hello World";
    }
*/

//Functions are Divided into Two Categories:
//1. Built-in Functions: These functions are predefined in the C++ library. 2. User-defined Functions: These functions are defined by the user.

//Example of Inline Function

#include <iostream>
using namespace std;

inline void display()
{
    cout << "Hello World";
}

int main()
{
    display();
    return 0;
}
//output: Hello World

//What is Need of Inline Function? Ans: The inline function is used to reduce the function call overhead.

/*
Advantages of Inline Function: 
1. Inline function reduces the function call overhead.
2. Inline function increases the execution speed of the program.
3. Inline function is used to reduce the time taken to call the function. */

/*
Disadvantages of Inline Function:
1. Inline function increases the code size.
2. Inline function is not suitable for large functions.
3. Inline function is not suitable for functions having a loop. */

//--------------------------------------------------------------------------NON INLINE MEMBER FUNCTION OF A CLASS-------------------------------------------------------------------

//Non-inline Member Function of a Class: A non-inline member function of a class is a function that is defined outside the class.
//Non-inline member function is defined using the scope resolution operator(::) along with the class name.

/*
Syntax:
return_type class_name::function_name(parameters)
{
    //function body
}

Eg: class student
    {
        public:
            void display();
    };

    void student::display() //donot use the inline keyword
    {
        cout << "Hello World";
    } 

*/

//Difference between Inline and Non-inline Member Function of a Class

//Inline Fucntion:

#include<iostream>
using namespace std;

class Car{
    public:
        inline void display(){
            cout<<"This is a Car";
        }
};

int main(){
    Car c;
    c.display();
    return 0;
}

//Non - Inline Function:

#include<iostream>
using namespace std;

class Car{
    public:
        void display();
};
void Car::display(){
    cout<<"This is a Car";
}

int main(){
    Car c;
    c.display();
    return 0;
}

