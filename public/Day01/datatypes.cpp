// C++ have Different Types Of DataTypes
/*
Primary Built-In - Integer, character, boolean, Void, Floating Point 
Derived Dataypes - Function, Array,  POinter, Reference
User-defined data types - Class, Structure, Union
*/
/*que1: 
    int *arr = new int[5];
    delete []arr;
    why we havenot written '*' while deleting the array? (metadata, explain about bins, chunks)
    =>This is because the arr is stored in stack, new int in heap. while deleting we have to delete the heap memory. 
    there is some metadata stored before the starting address of the heap, so while deleting we donot specify the *.
*/
// long is platform dependent, usually 4 bytes on 32-bit systems and 8 bytes on 64-bit systems.
// long long is at least 8 bytes on all platforms.
//signed and unsigned modifiers can be applied to char, short, int, and long data types.
// unsigned types can only represent non-negative values.
// signed types can represent both negative and positive values.
// we are using the word time complexity beaucse we got to knwo about the limits of the code
// The size of the poitner is 4 bytes in 32-bit system, 8 bytes in a 64-bit system.
// Agar character bytes to 1 se increment krwayenge, toh wo next character pe chala jayega //+1
// Agar integer bytes to 4 se increment krwayenge, toh wo next integer pe chala jayega //+4


// #include <iostream>
// using namespace std;

// int main() {
// cout << "Size of char : " << sizeof(char) << endl;
// cout << "Size of int : " << sizeof(int) << endl;
// cout << "Size of long : " << sizeof(long) << endl;
// cout << "Size of float : " << sizeof(float) << endl;
// cout << "Size of double : " << sizeof(double) << endl;
// return 0;
// }
//Run the code on your compiler and check the output

/*
DataTypes Modifiers
Signed - int, char, long-prefix
UnSigned - int, char, short-prefix
Long - int, double
Short - int
*/

#include<iostream>
using namespace std;

int main() {
cout << "unsigned int : " << sizeof(unsigned int) << endl;
cout << "short int : " << sizeof(short int) << endl;
cout << "long int : " << sizeof(long int) << endl;
cout << "unsigned short int : " << sizeof(unsigned short int) << endl;
cout << "unsigned long int : " << sizeof(unsigned long int) << endl;
cout << "long long int : " << sizeof(long long int) << endl;
cout << "unsigned long long int : " << sizeof(unsigned long long int) << endl;
cout << "signed char : " << sizeof(signed char) << endl;
cout << "unsigned char : " << sizeof(unsigned char) << endl;
return 0;
}
//Run the code on your compiler and check the output
// 30 Days of C++ - By bhanu partap - learn more about me at https://github.com/Bhanu-partap-13