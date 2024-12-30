//------------------------------------------------------------- Copy Constructors ----------------------------------------------------------

    
//What are copy constructors?
/*
A copy constructor is a constructor that is called when a new object is created by copying an existing object.
The copy constructor is called automatically when an object is created by copying another object using the = operator.  

The Process of initializing a new object with the values of an existing object is called copying or cloning.
*/

/*
Syntax of Copy Constructor:

class ClassName {
public:
    ClassName(const ClassName& obj) {
        // Copy constructor implementation
    }
};
*/

/*
Example Code:
*/#include <iostream>
using namespace std;

class MyClass {
public:
    // Default constructor
    MyClass() {
        cout << "Default constructor called" << endl;
    }

    // Copy constructor
    MyClass(const MyClass& obj) {
        cout << "Copy constructor called" << endl;
    }
};

int main() {
    MyClass obj1;          // Calls the default constructor
    MyClass obj2(obj1);     // Calls the copy constructor
    return 0;
}

//Output:
/*
Copy constructor called
*/


/*
Example Code:
*/
// C++ program to illustrate the use of copy constructors
#include <iostream>
using namespace std;

class student {
    int rno;

public:
    student(int n) { rno = n; }
    student(student& t) { rno = t.rno; }
    void display() { cout << rno << endl; }
};

int main()
{
    student s(1001);
    s.display();

    student bhanu(s);
    bhanu.display();

    return 0;
}

//Ouput: 1001
//       1001

/*
Why we use copy constructor?
*/
// The copy constructor is used to create a duplicate object of an existing object.
// It is used to create a temporary object of the same class as an argument to a function.
// It is used to return an object of the same class from a function.
