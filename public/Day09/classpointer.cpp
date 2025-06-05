//-----------------------------------------------------------------Class containing pointers------------------------------------------------------------
// 30 Days of C++ - By bhanu partap - learn more about me at https://github.com/Bhanu-partap-13
/*
A class can contain pointers as its members.

Syntax for declaring a pointer in a class is:

data_type *pointer_name;

         or

data_type *pointer_name = NULL;

*/

/*
Example Code:
*/
#include <iostream>
using namespace std;

class Box
{
public:
    int length;
    int breadth;
    int height;
    int *ptr;

    Box(int l, int b, int h)
    {
        this->length = l;
        this->breadth = b;
        this->height = h;
        this->ptr = NULL;
    }

    void display()
    {
        cout << "Length: " << this->length << endl;
        cout << "Breadth: " << this->breadth << endl;
        cout << "Height: " << this->height << endl;
    }
};

int main()
{
    Box b(10, 20, 30);
    b.display();
    return 0;
}
// Output: Length: 10
//         Breadth: 20
//         Height: 30
