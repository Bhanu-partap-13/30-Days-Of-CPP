//----------------------------------------------------------------------Array Of Objects-----------------------------------------------------------------------------------------

// Array of Objects is an array in which each element is an object of a class.

/*
Syntax for declaring an array of objects:
ClassName object_name[size];

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
    Box boxes[5];
    return 0;
}
// Output: Constructor called!
//         Constructor called!
//         Constructor called!
//         Constructor called!
//         Constructor called!
//         Destructor called!
//         Destructor called!
//         Destructor called!
//         Destructor called!
//         Destructor called!

/*
In the above code, we have created an array of 5 objects of the Box class. 
When the array is created, the constructor of the Box class is called 5 times, and when the array goes out of scope, the destructor of the Box class is called 5 times.
*/

/*
Why do we need an array of objects?
1. To create multiple objects of a class.
2. To store multiple objects of a class.
3. To pass multiple objects to a function.
*/

/*
Time Complexity:
1. Declaration of an array of objects: O(1)
2. Initialization of an array of objects: O(n)
3. Accessing elements of an array of objects: O(1)
4. Modifying elements of an array of objects: O(1)
5. Inserting elements in an array of objects: O(n)
6. Deleting elements in an array of objects: O(n)
*/

/*
Space Complexity:
1. Declaration of an array of objects: O(n)
2. Initialization of an array of objects: O(n)
3. Accessing elements of an array of objects: O(1)
4. Modifying elements of an array of objects: O(1)
5. Inserting elements in an array of objects: O(1)
6. Deleting elements in an array of objects: O(1)
*/

// Example code demonstrating array of objects with parameterized constructors

#include <iostream>
using namespace std;

class Student {
    string name;
    int age;

public:
    Student(string n, int a) : name(n), age(a) {
        cout << "Student " << name << " created." << endl;
    }

    void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main() {
    Student students[3] = { Student("Alice", 20), Student("Bob", 21), Student("Charlie", 22) };

    for (int i = 0; i < 3; ++i) {
        students[i].display();
    }

    return 0;
}

// Output:
// Student Alice created.
// Student Bob created.
// Student Charlie created.
// Name: Alice, Age: 20
// Name: Bob, Age: 21
// Name: Charlie, Age: 22
/*
In the above code, we have created an array of 3 objects of the Student class with parameterized constructors.
When the array is created, the constructor of the Student class is called 3 times with the specified parameters.
When the array goes out of scope, the destructor of the Student class is called 3 times.
*/


// Example code demonstrating array of objects with default constructors
#include <iostream>
using namespace std;

class Student {
    string name;
    int age;

public:
    Student() {
        cout << "Student created." << endl;
    }

    void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main() {
    Student students[3];

    for (int i = 0; i < 3; ++i) {
        students[i].display();
    }

    return 0;
}

// Output:
// Student Alice created.
// Student Bob created.
// Student Charlie created.
// Name: Alice, Age: 20
// Name: Bob, Age: 21
// Name: Charlie, Age: 22
