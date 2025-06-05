//--------------------------------------------------Class to Basic--------------------------------------------------

// In this type of conversion we convert a class object(source) to a basic data type(destination).
// This is done by defining a conversion function in the class. The conversion function must be a member function of the class. 
//For example, we have a class named Distance that has two data members feet and inches. We can convert this class object to an integer by defining a conversion function in the class.

/*
Syntax:
operator type()
{
    //conversion code
}
Here, type is the basic data type to which the class object is to be converted. The operator keyword is followed by the type to be converted.
*/

/*
Example Code
*/
#include <iostream>
using namespace std;

class Distance
{
private:
    int feet;
    int inches;
public:
    Distance()
    {
        feet = 0;
        inches = 0;
    }
    Distance(int f, int i)
    {
        feet = f;
        inches = i;
    }
    operator int()
    {
        return (feet * 12 + inches);
    }
};

int main()
{
    Distance d1(2, 3);
    int i = d1;
    cout << "Total inches: " << i << endl;
    return 0;
}
// Output Total inches: 27
