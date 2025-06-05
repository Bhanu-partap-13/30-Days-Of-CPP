//-------------------------------------------------------------------------------This Pointer-------------------------------------------------------------------------------

/*
The this pointer is a pointer that points to the object for which the member function is called.
It is a keyword in C++.
It is a constant pointer that holds the memory address of the current object.
It is used to access the members of the current object.
*/

/*
Syntax for using the this pointer:
this->member_name;
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

    Box(int l, int b, int h)
    {
        this->length = l;
        this->breadth = b;
        this->height = h;
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


/*
Why do we need the this pointer?
1. To differentiate between the class members and the function parameters with the same name.
2. To access the members of the current object.
*/


/*
Roadmap to learn the 'this' pointer in C++:

1. Understand the basics of pointers in C++:
    - Learn what pointers are and how they work.
    - Understand pointer syntax and operations (dereferencing, address-of operator).

2. Learn about classes and objects in C++:
    - Understand the concept of classes and objects.
    - Learn how to define and use classes and objects.

3. Study member functions in C++:
    - Learn how to define and use member functions.
    - Understand the difference between member functions and non-member functions.

4. Introduction to the 'this' pointer:
    - Learn what the 'this' pointer is and its purpose.
    - Understand that 'this' is a constant pointer that holds the address of the current object.

5. Using the 'this' pointer:
    - Learn how to use the 'this' pointer to access members of the current object.
    - Understand how the 'this' pointer helps to differentiate between member variables and function parameters with the same name.

6. Practical examples:
    - Write simple programs to practice using the 'this' pointer.
    - Experiment with different scenarios to see how the 'this' pointer works.

7. Advanced usage:
    - Learn about chaining member function calls using the 'this' pointer.
    - Understand how the 'this' pointer is used in operator overloading.

8. Review and practice:
    - Review all the concepts learned.
    - Practice by writing more complex programs that utilize the 'this' pointer.

~ Bhanu Partap
*/