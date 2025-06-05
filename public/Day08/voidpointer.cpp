//--------------------------------------------------------------------Void Pointer------------------------------------------------------------
// 30 Days of C++ - By bhanu partap - learn more about me at https://github.com/Bhanu-partap-13
// A void pointer is a pointer that has no associated data type with it. A void pointer can hold address of any type and can be typcasted to any type.

/*
Syntax of Void Pointer:
void *ptr;
ptr = &var;
Syntax of Typecasting:
type *ptr = (type *)ptr;
*/

//Why we need Void Pointer? Void pointer is used when we don't know the data type of the variable. It is used in dynamic memory allocation.

//Example of Void Pointer
#include <iostream>
using namespace std;

int main() {
    int a = 10;
    float b = 3.14;
    void *ptr;
    ptr = &a;
    cout << "Value of a = " << *(int *)ptr << endl;
    ptr = &b;
    cout << "Value of b = " << *(float *)ptr << endl;
    return 0;
}

//Output: Value of a = 10
//        Value of b = 3.14


//Example of Void Pointer in Dynamic Memory Allocation
#include <iostream>
using namespace std;

int main() {
    int *ptr;
    ptr = new int;
    *ptr = 10;
    cout << "Value of ptr = " << *ptr << endl;
    delete ptr;
    return 0;
}

//Output: Value of ptr = 10
