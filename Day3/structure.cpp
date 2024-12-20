//----------------------------------------------------------------------------------STRUCUTRE-----------------------------------------------------------------------------------
/*
The Structure is a user defined data type in C++ which allows you to combine different data types to store a particular type of record.
Structure helps to construct a complex data type which is more meaningful.
Structure is used to represent a record.
Structure is a collection of variables of different data types under a single name.*/


/*
                                              Syntax:
struct structure_name
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

struct student //structure definition
{
    int roll_no;
    char name[50];
    int age;
    char branch[50];
};

int main()
{
    student s1; //structure variable declaration

    cout << "Enter Roll No: ";
    cin >> s1.roll_no; // to access the members of the structure we use the dot(.) operator
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
//In the above code we have declared struct named student which contains four members roll_no, name, age, and branch.

//Run the code and enter the details of the student.
