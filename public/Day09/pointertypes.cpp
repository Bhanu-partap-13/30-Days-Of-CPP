//----------------------------------------------------------------------------Types of the Pointer----------------------------------------------------------------------------

// 30 Days of C++ - By bhanu partap - learn more about me at https://github.com/Bhanu-partap-13
/*
How to use a pointer?
1. Declare a pointer
2. Assign the address of a variable to a pointer
3. Access the value and address at the address available in the pointer variable.
*/

/*
1. Null Pointer - A pointer that is not assigned any memory address is called a null pointer. It is declared by assigning 0 to it.
2. Wild Pointer - A pointer that is not initialized is called a wild pointer.
3. Dangling Pointer - A pointer that is pointing to a memory location that has been deleted is called a dangling pointer.
*/

/*
1. Null Pointer
syntax: int *ptr = 0;

2. Wild Pointergit 
syntax: int *ptr;

3. Dangling Pointer
syntax: int *ptr = new int;
        delete ptr;
*/

/*
 1. Null Pointer
Example Code:
 */
#include <iostream>
using namespace std;

int main()
{
    int *ptr = 0;
    cout << ptr << endl;
    return 0;
}
// Output: 0

/*
2. Wild Pointer
Example Code:
*/
#include <iostream>
using namespace std;

int main()
{
    int *ptr;
    cout << ptr << endl;
    return 0;
}
// Output: 0

/*
3. Dangling Pointer
Example Code:
*/
#include <iostream>
using namespace std;

int main()
{
    int *ptr = new int;
    delete ptr;
    cout << ptr << endl;
    return 0;
}
// Output: 0x7ff0005b1a10  (it may vary from system to system)


