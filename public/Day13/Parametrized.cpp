//-------------------------------------------------Parametrized constructor--------------------------------------------------------------------

//What are parametrize Constructor
/*
1. Parametrize Constructor is a constructor which takes parameters.
2. Parametrize Constructor is a special type of constrcutor used to initialize the object by passing parameters.
*/

/*
Syntax:
class ClassName
{
public:
    ClassName(parameters)
    {
        // constructor body
    }
};
*/

/*
Example Code:
*/
#include <iostream>
using namespace std;
class Test
{
    int a, b;
public:
    Test(int x, int y)
    {
        a = x;
        b = y;
    }
    void display()
    {
        cout << "a = " << a << endl;
        cout << "b = " << b << endl;
    }
};

int main()
{
    Test t(10, 20);
    t.display();
    return 0;
}

//Output: a = 10
//       b = 20


//Question From GFG
#include <iostream>
#include <string.h>
using namespace std;

class Student {
    int rno;
    string name;
    double fee;

public:
  
  	// Declaration of parameterized constructor
    Student(int, string, double);
    void display();
};

// Parameterized constructor outside class
Student::Student(int no, string n, double f) {
    rno = no;
    name = n;
    fee = f;
}

void Student::display() {
    cout << rno << "\t" << name << "\t" << fee << endl;
}

int main() {
  
  	// Creating object with members initialized to
  	// given values
    Student s(1001, "Ram", 10000);
    s.display();
    return 0;
}

//Output : 1001   Ram   10000