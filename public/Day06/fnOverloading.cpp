//  -------------------------------------------------------------------Function Overloading--------------------------------------------------------------

//In C++ two functions can have the same name if the number of arguments or the type of arguments is different. This is called function overloading.

//Example Code
// 30 Days of C++ - By bhanu partap - learn more about me at https://github.com/Bhanu-partap-13
#include <iostream>
using namespace std;
int add(int a, int b)
{
    return a + b;
}

int add(int a, int b, int c)
{
    return a + b + c;
}
//here are two functions with the same name add but the number of arguments is different. This is called function overloading.
int main()
{
    cout << add(10, 20) << endl;
    cout << add(10, 20, 30) << endl;
    return 0;
}

//Overloaded functions may have different return types, but the return type alone is not sufficient to distinguish overloaded functions. The following code will not compile:

//Example Code

#include <iostream>
using namespace std;
int add(int a, int b)
{
    return a + b;
}

float add(int a, int b)
{
    return a + b;
}

int main()
{
    cout << add(10, 20) << endl;
    return 0;
}

//The above code will not compile because the return type is not sufficient to distinguish overloaded functions. The number of arguments or the type of arguments must be different.
//So what to do if we want to overload functions based on the return type? We can use function templates. We will learn about function templates in the next lesson.

//Different Types of Function Overloading

//Function overloading can be done in the following ways:

//1. By changing the number of arguments

//Example Code

#include <iostream>
using namespace std;
int add(int a, int b)
{
    return a + b;
}

int add(int a, int b, int c)
{
    return a + b + c;
}

int main()
{
    cout << add(10, 20) << endl;
    cout << add(10, 20, 30) << endl;
    return 0;
}

//2. By changing the type of arguments

//Example Code

#include <iostream>
using namespace std;
int add(int a, int b)
{
    return a + b;
}

float add(float a, float b)
{
    return a + b;
}

int main()
{
    cout << add(10, 20) << endl;
    cout << add(10.5, 20.5) << endl;
    return 0;
}

//3. By changing the sequence of arguments

//Example Code

#include <iostream>
using namespace std;

int add(int a, float b)
{
    return a + b;
}

int add(float a, int b)
{
    return a + b;
}

int main()
{
    cout << add(10, 20.5) << endl;
    cout << add(10.5, 20) << endl;
    return 0;
}


//Syntax for Function Overloading
/*
return_type function_name(data_type1 arg1, data_type2 arg2, ...)
{
    //code
}
*/

//Rules for Function Overloading
/*
1. The return type of the overloaded functions may or may not be the same.
2. The number, type, sequence of arguments must be different.
3. The scope resolution operator (::) cannot be overloaded.
4. The overloaded functions must be declared in the same scope.
*/



