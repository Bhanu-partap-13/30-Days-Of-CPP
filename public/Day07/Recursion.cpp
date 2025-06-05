//------------------------------------------------------------------------------Recursion------------------------------------------------------------------------------------------
// 30 Days of C++ - By bhanu partap - learn more about me at https://github.com/Bhanu-partap-13
//A function that call itself is known as  a recursive function

/*
 
Working for Recursie function:
1. A recursive function calls itself.
2. The function continues to call itself until a termination condition is met.
3. A termination condition is a condition where the recursion ends.
*/

/*
Syntax of Recursion:
return_type function_name(parameters) {
    if (condition) {
        // termination condition
    } else {
        function_name(parameters); // recursive call
    }
}
*/

//Example of Recursion
#include <iostream>
using namespace std;

void recurse() {
    static int count = 1;
    if (count > 5) {
        return;
    }
    cout << "Hello World" << endl;
    count++;
    recurse(); // recursive call
}

int main() {
    recurse();
    return 0;
}
//Output: Hello World
//        Hello World
//        Hello World
//        Hello World
//        Hello World



//Factorial of number using Recursion
#include <iostream>
using namespace std;

int factorial(int n) {
    if (n > 1) {
        return n * factorial(n - 1); // recursive call
    } else {
        return 1;
    }
}

int main() {
    int n = 5;
    cout << "Factorial of " << n << " = " << factorial(n);
    return 0;
}
//Run the code and check the output

//Fibnacci Series using Recursion
#include <iostream>
using namespace std;

int fibonacci(int n) {
    if (n <= 1) {
        return n;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2); // recursive call
    }
}

int main() {
    int n = 10;
    cout << "Fibonacci Series: ";
    for (int i = 0; i < n; i++) {
        cout << fibonacci(i) << " ";
    }
    return 0;
}
//Run the code and check the output

