//--------------------------------------------------------------------Pointer to Pointer------------------------------------------------------------
// 30 Days of C++ - By bhanu partap - learn more about me at https://github.com/Bhanu-partap-13
// A pointer to a pointer is a form of multiple indirection or a chain of pointers.
// Normally, a pointer contains the address of a variable. 

/*
Syntax of Pointer to Pointer:

type **ptr;
ptr = &ptr1;

    OR

type **ptr = &ptr1;
*/


//How Pointer to Pointer works? (Explain in simple words)
//A pointer to a pointer is a pointer that holds the address of another pointer.
//It is used to store the address of a pointer in a variable.
//It is used to create dynamic data structures like linked list, tree, etc.
//It is used in function arguments to pass the address of a pointer.
//It is used in dynamic memory allocation to allocate memory at runtime.

//Example of Pointer to Pointer
#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int *ptr1 = &a;
    int **ptr2 = &ptr1;
    cout << "Value of a = " << a << endl;
    cout << "Value of ptr1 = " << *ptr1 << endl;
    cout << "Value of ptr2 = " << **ptr2 << endl;
    return 0;
}
//Output: Value of a = 10
//        Value of ptr1 = 10
//        Value of ptr2 = 10



//Example of Pointer to Pointer in Dynamic Memory Allocation
#include <iostream>
using namespace std;

int main() {
    int **ptr;
    ptr = new int*;
    *ptr = new int;
    **ptr = 10;
    cout << "Value of ptr = " << **ptr << endl;
    delete *ptr;
    delete ptr;
    return 0;
}
//Output: Value of ptr = 10



//Double Pointer in Function
#include <iostream>
using namespace std;

void display(int **ptr) {
    cout << "Value of ptr = " << **ptr << endl;
}

int main() {
    int a = 10;
    int *ptr1 = &a;
    int **ptr2 = &ptr1;
    display(ptr2);
    return 0;
}
//Output: Value of ptr = 10


//Pointer to Pointer in Array
#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int *ptr1 = arr;
    int **ptr2 = &ptr1;
    cout << "Value of arr[0] = " << **ptr2 << endl;
    cout << "Value of arr[1] = " << *(*ptr2 + 1) << endl;
    return 0;
}
//Output: Value of arr[0] = 10


//Pointer to Pointer in 2D Array
//you have to write the code for It. Try it yourself.

