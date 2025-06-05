//An Enumeration is a user-defined data type that consists of integral constants. To define an enumeration, keyword enum is used.
// The enum keyword is also used to define the variables of enumerated data type.

//enum season { spring, summer, autumn, winter }; (By default, spring = 0, summer = 1, autumn = 2, winter = 3)
// 30 Days of C++ - By bhanu partap - learn more about me at https://github.com/Bhanu-partap-13
//Enumerated Type Declaration
/*
enum enum_name
{
    enumeration_constants
} variable_list;
*/

#include<iostream>
using namespace std;

enum week { Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday };

int main()
{
    week today;
    today = Wednesday;
    cout << "Day " << today + 1;
    return 0;
}

//Run the code and check the output. The output will be Day 4.  
//In the above code, we have declared an enumeration named week which contains seven constants Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, and Saturday.

//Declaration
//enum class EnumName{ Value1, Value2, Value3, ... ValueN };

//Initialization
//EnumName variable = EnumName::Value1;

