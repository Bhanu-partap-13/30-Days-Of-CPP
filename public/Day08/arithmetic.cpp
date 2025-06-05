//-------------------------------------------------------------------------Pointer Arithmetic-----------------------------------------------------
// 30 Days of C++ - By bhanu partap - learn more about me at https://github.com/Bhanu-partap-13
// Pointer arithmetic is the process of adding or subtracting an integer value to a pointer in order to access memory locations.
// The integer value is always multiplied by the size of the data type to which the pointer points.

/*
1.Increment/Decrement of a Pointer
2.Addition/Subtraction of a Pointer
3.Subtracting Two Pointers of same data type
4.comparison of two pointers
*/


/*
Syntax of Pointer Arithmetic:
ptr = ptr + n;
ptr = ptr - n;
where ptr is a pointer and n is an integer value.
---------------------------------------------------
Syntax of Pointer Arithmetic with Array:
ptr = &arr[0];
ptr = ptr + n;
where arr is an array and n is an integer value.
---------------------------------------------------
Syntax of Pointer Arithmetic with Structure:
ptr = &s;
ptr = ptr + n;
where s is a structure and n is an integer value.
---------------------------------------------------
Syntax of Pointer Arithmetic with Void Pointer:
void *ptr;
ptr = &var;
ptr = ptr + n;
where var is a variable and n is an integer value.
---------------------------------------------------
Syntax of Pointer Arithmetic with Function:
ptr = &function_name;
ptr = ptr + n;
where function_name is a function and n is an integer value.
---------------------------------------------------
Syntax of Pointer Arithmetic with Class:
ptr = &object_name;
ptr = ptr + n;
where object_name is an object and n is an integer value.
---------------------------------------------------
Syntax of Pointer Arithmetic with Pointer:
ptr1 = &var;
ptr2 = &var;
ptr = ptr1 - ptr2;
where var is a variable and ptr1, ptr2 are pointers.
*/

//1. Example of Pointer Arithmetic
#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int *ptr = &arr[0];
    cout << "Value of arr[0] = " << *ptr << endl;
    ptr = ptr + 2;
    cout << "Value of arr[2] = " << *ptr << endl;
    return 0;
}
//Output: Value of arr[0] = 10
//        Value of arr[2] = 30



//2. Example of Pointer Arithmetic with Array
#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int *ptr = &arr[0];
    cout << "Value of arr[0] = " << *ptr << endl;
    ptr = ptr + 2; //for subtraction use ptr = ptr - 2;
    cout << "Value of arr[2] = " << *ptr << endl;
    return 0;
}
//Output: Value of arr[0] = 10
//        Value of arr[2] = 30



//3. Example of Pointer Arithmetic with Structure
#include <iostream>
using namespace std;

struct Student {
    int roll;
    char name[20];
};

int main() {
    Student s = {101, "John"};
    Student *ptr = &s;
    cout << "Roll No = " << ptr->roll << endl;
    ptr = ptr + 1; //for subtraction use ptr = ptr - 1;
    cout << "Name = " << ptr->name << endl;
    return 0;
}
//Output: Roll No = 101
//        Name = John



//4. Example of Pointer Arithmetic with Void Pointer
#include <iostream>
using namespace std;

int main() {
    int a = 10;
    float b = 3.14;
    void *ptr;
    ptr = &a; 
    cout << "Value of a = " << *(int *)ptr << endl;
    ptr = ptr + 1;
    ptr = &b;
    cout << "Value of b = " << *(float *)ptr << endl;
    return 0;
}
//Output: Value of a = 10
//        Value of b = 3.14



//5. Example of Pointer Arithmetic with Function
#include <iostream>
using namespace std;

void display() {
    cout << "Hello World" << endl;
}

int main() {
    void (*ptr)() = &display;
    ptr();
    ptr = ptr + 1;
    return 0;
}
//Output: Hello World



//6. Example of Pointer Arithmetic with Class
#include <iostream>
using namespace std;

class Student {
    int roll;
    char name[20];
};

int main() {
    Student s;
    Student *ptr = &s;
    ptr = ptr + 1;
    return 0;
}
//Output: No output



//7. Example of Pointer Arithmetic with Pointer
#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int *ptr1 = &a;
    int *ptr2 = &a;
    int *ptr = ptr1 - ptr2;
    cout << "Value of ptr = " << ptr << endl;
    return 0;
}
//Output: Value of ptr = 0
//In the above example, ptr1 and ptr2 are pointing to the same memory location, so the difference between them is 0.


