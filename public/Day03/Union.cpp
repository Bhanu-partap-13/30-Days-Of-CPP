//------------------------------------------------------------------------------------UNION------------------------------------------------------------------------------------

/*
U Union is a user-defined data type that allows you to store different data types in the same memory location. 
You can define a union with many members, but only one member can contain a value at any given time.
 Unions provide an efficient way of using the same memory location for multiple-purpose.
*/

// 30 Days of C++ - By bhanu partap - learn more about me at https://github.com/Bhanu-partap-13
//MAIN Difference between Structure and Union 
// In structure, each member has its own memory location, whereas, in union, all members share the same memory location.
// In structure, the size of the structure is the sum of the size of all its members, whereas, in union, the size of the union is the size of the largest member.
// In structure, we can access all the members at the same time, whereas, in union, only one member can be accessed at a time.


/*
Syntax:
union union_name
{
    data_type member1;
    data_type member2;
    .
    .
    .
    data_type memberN;
};
*/

//There are two methods in which we can define a union:
/*
Method 1:  
union union_name
{
    data_type member1;
    data_type member2;
    .
    .
    .
    data_type memberN;
} u1, u2, ..., un;

Method 2:
union union_name
{
    data_type member1;
    data_type member2;
    .
    .
    .
    data_type memberN;
};
*/

#include <iostream>
using namespace std;

union student //union definition
{
    int roll_no;
    char name[50];
    int age;
    char branch[50];
}; //do not forget to put semicolon at the end of the union definition

int main()
{
    student s1; //union variable declaration

    cout << "Enter Roll No: ";
    cin >> s1.roll_no; // to access the members of the union we use the dot(.) operator
    cout << "Enter Name: ";
    cin >> s1.name;
    cout << "Enter Age: ";
    cin >> s1.age;
    cout << "Enter Branch: ";
    cin >> s1.branch;

    cout << "\nStudent Details\n";
    cout << "Roll No: " << s1.roll_no << endl;
    cout << "Name: " << s1.name << endl;
    cout << "Age: " << s1.age << endl;
    cout << "Branch: " << s1.branch << endl;

    return 0;
}
//Run the code and enter the details of the student.
