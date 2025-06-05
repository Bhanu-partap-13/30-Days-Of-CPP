//--------------------------------------------------Class to Class--------------------------------------------------

// What is Class to Class Type Conversion?
// Class to Class Type Conversion refers to converting an object of one class (source) into an object of another class (destination).
// This is done by either using a conversion operator in the source class or a constructor in the destination class.

/*
Methods for Class to Class Conversion:
1. **Using a Conversion Constructor in the Destination Class:**  
   - The constructor of the destination class takes an object of the source class as its argument and converts it.

2. **Using a Conversion Function in the Source Class:**  
   - A member function is defined in the source class that returns an object of the destination class.
*/

/*
Example Code:
*/

// Using a Conversion Constructor in the Destination Class
#include <iostream>
using namespace std;

class Distance
{
private:
    int feet, inches;
public:
    Distance(int f, int i) : feet(f), inches(i) { }
    int getFeet() const { return feet; }
    int getInches() const { return inches; }
};

class Metric
{
private:
    float meters;
public:
    // Conversion constructor
    Metric(const Distance& d)
    {
        // 1 foot = 0.3048 meters, 1 inch = 0.0254 meters
        meters = d.getFeet() * 0.3048 + d.getInches() * 0.0254;
    }

    void display()
    {
        cout << meters << " meters" << endl;
    }
};

int main()
{
    Distance d(3, 4); // feet and inches main distance
    Metric m = d;    // *Class to Class ka conversion*
    m.display();
    return 0;
}

// Output:
// 1.016 meters
