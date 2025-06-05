// -----------------------------------------------------DMA stands for Dynamic Memory Allocation------------------------------------
// 30 Days of C++ - By bhanu partap - learn more about me at https://github.com/Bhanu-partap-13
//There are times where the data has to be entered and is allocated at the time of execution.
// For example, a list of employees increases as the new employees are hired in the organization and similarly reduces when a person leaves the organization. 
//This is called managing the memory. 

//---------------------------------------------------------------Memory Allocation-------------------------------------------------------------

//When we are reserving or providing space to a variable is called memory allocation. Memory allocation can be done in two ways -

/*
1. Static Allocation -  Static memory allocation means providing space for the variable.
                        The size and data type of the variable is known, and it remains constant throughout the program.
*/

/*
2. Dynamic allocation (Run time)  - The allocation in which memory is allocated dynamically. 
                                    In this type of allocation, the exact size of the variable is not known in advance. Pointers plays a major role in dynamic memory allocation.
*/

/*then why allocation of dynamic memory only - we are having 2 criterias
- A dynamic space in the memory is needed. So, we can allocate the memory even in runtime
- Storing the address to access the variable from the memory
Similarly, We can deallocate the memory.
In C++, memory is divided into two parts: 1. Stack, 2. Heap
*/

/*-----------------------------------------------------------------New------------------------------------------------------------------------*/

/*
Syntax of `new` Operator:
--------------------------
 pointer_var = new data_type;
 */

/*
Example:
int *m=NULL;
m=new int;
    OR
int *m = new int(20); //Initalize the memory
int *arr = new int[10]; //Allocate the block of memory
*/

/*-----------------------------------------------------------------Delete------------------------------------------------------------------------*/

/*
Syntax of `delete` Operator:
------------------------------
To deallocate memory for a single variable:
    delete pointer_variable;

To deallocate memory for an array:
    delete[] pointer_variable;
*/

/*-----------------------------------------------------------------Example Codes-----------------------------------------------------------------*/

//Code 1 - single Variable
#include <iostream>
using namespace std;

int main() {
    // memory allocation process..
    int* p = new int;

    // value assigned to p
    *p = 10;
    cout << "Value: " << *p << endl;

    // memory ko deallocate krna
    delete p;

    return 0;
}
/**
Output:
Value: 10
*/

//Code 2: Using an array
#include <iostream>
using namespace std;

int main() {
    // memory allocation process..
    int* arr = new int[5];

    // Initializing the array
    for (int i = 0; i < 5; i++) {
        arr[i] = i + 1;
    }

    cout << "Array values: ";
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // memory ko deallocate krna
    delete[] arr;

    return 0;
}
/*
Output:
Array values: 1 2 3 4 5
*/

// Code 3 Usign an Object
#include <iostream>
using namespace std;

class Student {
    string name;

public:
    Student(string n) : name(n) {
        cout << "Constructor called for " << name << endl;
    }

    void display() {
        cout << "Student Name: " << name << endl;
    }

    ~Student() {
        cout << "Destructor called for " << name << endl;
    }
};

int main() {
    // Dynamically allocate memory for an object
    Student* s = new Student("Alice");

    // Display object information
    s->display();

    // Deallocate memory for the object
    delete s;

    return 0;
}
/*
Output:
Constructor called for Alice
Student Name: Alice
Destructor called for Alice
*/
