//---------------------------------------------------------------------------Pointers--------------------------------------------------------------------------------------------
// 30 Days of C++ - By bhanu partap - learn more about me at https://github.com/Bhanu-partap-13
// Pointers are variables that store the memory address of another variable. They are used to store the address of a variable.

/*
Syntax of pointer:
data_type *pointer_name;
*/

// Example: Call By reference using Pointers
#include<iostream>
using namespace std;

int main() {
   int var = 20;   // actual variable declaration.
   int *ip;        // pointer variable

   ip = &var;      // store the address of var in pointer variable

   cout << "Value of var variable: ";
   cout << var << endl;

   // print the address stored in ip pointer variable
   cout << "Address stored in ip variable: ";
   cout << ip << endl;

   // access the value at the address available in pointer
   cout << "Value of *ip variable: ";
   cout << *ip << endl;

   return 0;
}
// Output: Value of var variable: 20
//         Address stored in ip variable: 0x7fffbf7b3bfc
//         Value of *ip variable: 20

