//--------------------------------------------------------Type Conversion in C++-------------------------------------------------------------------

//What is Type Conversion?
//Type conversion, also known as type casting, refers to converting a variable from one data type to another.
//In C++, type conversion can be performed automatically by the compiler (implicit conversion) or explicitly by the programmer (explicit conversion).

/*
In simple words:
Type conversion allows you to change the data type of a variable or object.
For example, you can convert an integer to a float, or even an object of one class to another class.
*/

/*
Syntax:
1. Implicit Type Conversion:
   - Automatically performed by the compiler.
   - For example, converting an integer to a float in mathematical operations.
   - No explicit syntax required.

2. Explicit Type Conversion (Type Casting):
    - Done manually by the programmer using casting operators.
    - Syntax: (type) value
    - For example, `float f = (float)intVar;`

3. User-Defined Type Conversion:
    - Allows conversion between objects of different user-defined classes using special functions like constructors or operator overloading.
    - Syntax: `operator type() const { }`
*/

/*
Example Codes:
*/

//Easy Code
//Code 1: Implicit Type Conversion

#include <iostream>
using namespace std;

int main()
{
    int num = 10;
    float f = num; // Implicit conversion from int to float
    cout << "Value of f: " << f << endl;
    return 0;
}
//Output: Value of f: 10

//Code 2: Explicit Type Conversion

#include <iostream>
using namespace std;

int main()
{
    int num = 10;
    float f = (float)num; // Explicit conversion from int to float
    cout << "Value of f: " << f << endl;
    return 0;
}
//Output: Value of f: 10

/*Important Question (Practice this code at least 2-3 times)*/
//Code 3: User-Defined Type Conversion using Constructor
#include <iostream>
using namespace std;

class Distance
{
private:
    int meters;

public:
    Distance(int m = 0) : meters(m) { } // Constructor

    // Conversion from Distance to int
    operator int() const
    {
        return meters;
    }

    void display() { cout << meters << " meters" << endl; }
};

int main()
{
    Distance d1(15);

    // Implicit conversion from Distance to int
    int meters = d1;

    cout << "Distance in meters: " << meters << endl;
    return 0;
}
//Output: Distance in meters: 15


//Can we perform conversion between user-defined classes?
/*
Yes, conversion between user-defined classes can be achieved using:
1. Conversion constructors: A constructor in one class that takes an object of another class as an argument.
2. Overloading the type conversion operator.
*/
/*
Example: Conversion Between Two Classes
//Code 2: Type Conversion Between Two Classes
*/
#include <iostream>
using namespace std;

class DistanceInMeters; // Forward declaration

class DistanceInKilometers
{
private:
    float kilometers;

public:
    DistanceInKilometers(float km = 0) : kilometers(km) { }

    // Conversion constructor: Kilometers to Meters
    DistanceInKilometers(const DistanceInMeters &dm);

    float getKilometers() const { return kilometers; }

    void display() { cout << kilometers << " kilometers" << endl; }
};

class DistanceInMeters
{
private:
    int meters;

public:
    DistanceInMeters(int m = 0) : meters(m) { }

    // Conversion constructor: Meters to Kilometers
    DistanceInMeters(const DistanceInKilometers &dk)
    {
        meters = dk.getKilometers() * 1000; // Convert km to m
    }

    int getMeters() const { return meters; }

    void display() { cout << meters << " meters" << endl; }
};

// Conversion constructor definition (Kilometers to Meters)
DistanceInKilometers::DistanceInKilometers(const DistanceInMeters &dm)
{
    kilometers = dm.getMeters() / 1000.0; // Convert m to km
}

int main()
{
    DistanceInMeters dm(1500);
    DistanceInKilometers dk = dm; // Convert meters to kilometers
    dk.display();

    DistanceInKilometers dk2(2.5);
    DistanceInMeters dm2 = dk2; // Convert kilometers to meters
    dm2.display();

    return 0;
}
//Output:
//1.5 kilometers
//2500 meters

/*
Key Takeaways:
1. User-defined type conversions allow seamless operations between classes.
2. Conversion constructors and type conversion operators are powerful tools for flexibility in class design.
3. Always ensure conversions are meaningful and logical.
*/

/*
Rules for Type Conversion:
1. Type conversions should not lead to data loss or unexpected behavior.
2. Use explicit conversions when dealing with potentially lossy operations.
3. For user-defined conversions, ensure constructors or operators are well-documented.
4. Avoid ambiguous conversions that might confuse the compiler.
*/

/*Operators for Explicit Casting:
1. C-Style Cast: (type)value
2. static_cast: static_cast<type>(value)
3. dynamic_cast, const_cast, reinterpret_cast: Advanced casting operators for special cases.
*/

//----------------------------------------------------------------------------Implicit vs. Explicit Type Conversion---------------------------------------------------------------------
/*
Cases of Implicit Type Conversion:
1. Converting integers to floating-point numbers in arithmetic operations.
2. Converting smaller data types to larger data types (e.g., char to int).
3. Converting derived class objects to base class objects.
*/
/*
Example code for implicit type conversion:
*/
#include <iostream>
using namespace std;

int main()
{
    int num = 10;
    float f = num; // Implicit conversion from int to float
    cout << "Value of f: " << f << endl;
    return 0;
}
//Output: Value of f: 10

/*
Cases of Explicit Type Conversion:
1. Converting floating-point numbers to integers (possible data loss).
2. Converting base class objects to derived class objects.
3. Converting between user-defined classes using conversion constructors or type conversion operators.
*/
/*
Example code for explicit type conversion:
*/
#include <iostream>
using namespace std;

int main()
{
    int num = 10;
    float f = (float)num; // Explicit conversion from int to float
    cout << "Value of f: " << f << endl;
    return 0;
}
//Output: Value of f: 10