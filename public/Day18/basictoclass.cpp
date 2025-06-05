//--------------------------------------------------Basic to Class--------------------------------------------------
// 30 Days of C++ - By bhanu partap - learn more about me at https://github.com/Bhanu-partap-13
// What is Basic to Class Type Conversion?
// Basic to Class Type Conversion refers to converting a basic data type (source) to an object of a class (destination).
// This is done by defining a constructor in the class, which takes the basic data type as an argument and initializes the class object accordingly.

/*
Syntax:
ClassName(type value)
{
    // Conversion code
}
Here, `ClassName` is the name of the class, and `type` is the basic data type to be converted into a class object.
The constructor is responsible for converting the basic type into the class type.
*/

/*
Example Code:
*/

#include <iostream>
using namespace std;

class Distance
{
private:
    int feet, inches;
public:
    // according to syntax, we have to define a constructor that takes a basic data type as an argument
    Distance(int totalInches)
    {
        feet = totalInches / 12;       // inches to feet ka conversion
        inches = totalInches % 12;    // ***Remaining inches
    }

    void display()
    {
        cout << feet << " feet " << inches << " inches" << endl;
    }
};

int main()
{
    int totalInches = 40;
    Distance d1 = totalInches; // basic type to class object ka conversion
    d1.display();
    return 0;
}

// Output:
// 3 feet 4 inches
