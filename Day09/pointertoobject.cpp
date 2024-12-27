//-----------------------------------------------------------------------------Pointers to objects-----------------------------------------------------------------------------

/*
we can also create pointers to objects of a class. 
This is particularly useful when we want to pass an object to a function by reference, or when we don't want to pass a large object to a function, but we want to avoid copying it.
*/


/*
Syntax for creating a pointer to an object of a class is:
ClassName *ptr = new ClassName;
*/


/*
Example Code:
*/
#include <iostream>
using namespace std;

class Box
{
public:
    Box()
    {
        cout << "Constructor called!" << endl;
    }
    ~Box()
    {
        cout << "Destructor called!" << endl;
    }
};

int main()
{
    Box *ptr = new Box;
    delete ptr;
    return 0;
}
// Output: Constructor called!
//         Destructor called!


/*
Why do we need pointers to objects?
1. To pass an object to a function by reference.
2. To avoid copying an object when passing it to a function.
*/

