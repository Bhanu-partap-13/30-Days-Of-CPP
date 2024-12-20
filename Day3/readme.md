# Day 3: Structures and Unions
## Key Concepts

- **Structures**: A user-defined data type that allows grouping variables of different types under a single name. Structures can have member functions and constructors. The default access specifier for members is public.<br>
- **Unions**: Similar to structures but with a key difference: all members share the same memory location. This means only one member can hold a value at any given time. Unions are useful for memory-efficient storage.<br>
- **Accessing Members**: Use the dot operator (`.`) to access members of a structure or union.<br>
- **Memory Size**: The size of a union is determined by the size of its largest member.<br>
- **Nested Structures**: Structures can contain other structures as members.<br>
- **`sizeof` Operator**: Returns the size of a variable or data type in bytes.<br>

## Multiple Choice Questions

1. **Which of the following is true about structures in C++?**<br>
    - [ ] Structures cannot have member functions.<br>
    - [x] Structures can have member functions.<br>
    - [ ] Structures cannot have constructors.<br>
    - [ ] Structures are the same as classes.<br>

2. **What is the default access specifier for members of a structure in C++?**<br>
    - [x] Public<br>
    - [ ] Private<br>
    - [ ] Protected<br>
    - [ ] Internal<br>

3. **Which of the following is a correct way to define a structure in C++?**<br>
    - [ ] `struct { int x; float y; };`<br>
    - [ ] `structure MyStruct { int x; float y; };`<br>
    - [x] `struct MyStruct { int x; float y; };`<br>
    - [ ] `MyStruct { int x; float y; };`<br>

4. **What is the main difference between a structure and a union in C++?**<br>
    - [ ] Structures can only hold one data type.<br>
    - [ ] Unions can have member functions.<br>
    - [x] Unions share the same memory location for all their members.<br>
    - [ ] Structures are more memory efficient than unions.<br>

5. **How do you access a member of a structure in C++?**<br>
    - [ ] `structure.member`<br>
    - [ ] `structure->member`<br>
    - [x] `structure.member`<br>
    - [ ] `structure:member`<br>

6. **Which of the following is true about unions in C++?**<br>
    - [ ] Unions can have multiple active members at the same time.<br>
    - [x] Unions can only have one active member at a time.<br>
    - [ ] Unions cannot have member functions.<br>
    - [ ] Unions are the same as structures.<br>

7. **What is the size of a union in C++?**<br>
    - [ ] The sum of the sizes of all its members.<br>
    - [ ] The size of the first member.<br>
    - [x] The size of the largest member.<br>
    - [ ] The size of the smallest member.<br>

8. **Which keyword is used to define a union in C++?**<br>
    - [ ] `struct`<br>
    - [ ] `class`<br>
    - [x] `union`<br>
    - [ ] `enum`<br>

9. **Can a structure in C++ contain another structure as a member?**<br>
    - [x] Yes<br>
    - [ ] No<br>
    - [ ] Only if the nested structure is defined globally.<br>
    - [ ] Only if the nested structure is defined privately.<br>

10. **Which of the following is true about the `sizeof` operator in C++?**<br>
    - [x] It returns the size of a variable or data type in bytes.<br>
    - [ ] It returns the number of elements in an array.<br>
    - [ ] It can only be used with primitive data types.<br>
    - [ ] It cannot be used with structures or unions.<br>

11. **What is the output of the following code?**<br>
    ```cpp
    struct MyStruct {
        int x;
        float y;
    };
    MyStruct s = {10, 20.5};
    std::cout << s.x << ", " << s.y;
    ```
    - [x] `10, 20.5` <br>
    - [ ] `10 20.5`<br>
    - [ ] `10.0, 20.5`<br>
    - [ ] `10.0 20.5`<br>

12. **What is the output of the following code?**<br>
    ```cpp
    union MyUnion {
        int x;
        float y;
    };
    MyUnion u;
    u.x = 10;
    std::cout << u.y;
    ```
    - [ ] `10`<br>
    - [ ] `0`<br>
    - [ ] `10.0`<br>
    - [x] Undefined behavior<br>

## Coding Problems
Problem Statement
Farhana is fond of coding and she is learning structure and union concepts. While practicing questions she came across a question that used the union concept. Since she is only familiar with structures, she is unable to solve this. 

Help her solve the question. 

The question is given below:
Write a C++ program to store information about an employee using a union. The program should prompt the user to enter the employee ID, name, date of birth (DOB), date of joining (DOJ), and salary. The program should then display the entered information.


Union Name: Employee

Input format :
The first line contains an integer representing the employee ID.

The second line contains a string representing the employee's name.

The third line contains a string representing the date of birth in the format "dd/mm/yyyy".

The fourth line contains a string representing the date of joining in the format "dd/mm/yyyy".

The fifth line contains a floating-point number representing the salary.

Output format :
The first line displays the employee ID of the employee.

The second line displays the employee's name.

The third line displays the date of birth of the employee.

The fourth line displays the employee's date of joining.

The fifth line displays the salary of the employee, rounded off to one decimal place.

>[!NOTE]
> The maximum length of the employee's name is 20 characters. 
> The maximum length of the date of birth and date of joining is 10 characters.





| Input 1 : | Output 1 : |
| ----------- | ----------- |
| 200 | ID : 200 |
| Karthick | Name : Karthick |
| 22/03/1988 | DOB : 22/03/1988 |
| 09/10/2018 | DOJ : 09/10/2018 |
| 57899.75 | Salary : 57899.8 |


| Input 2 : | Output 2 : |
| ----------- | ----------- |
| 202 | ID : 202 |
| Jessi | Name : Jessi |
| 02/12/2000 | DOB : 02/12/2000 |
| 15/10/2018 | DOJ : 15/10/2018 |
| 28085.31 | Salary : 28085.3 |

`solution`

```
\\cpp
#include <iostream>
#include <iomanip>
#include <cstring>
using namespace std;

union Employee {
    int empID;
    char name[21];
    char dob[11];
    char doj[11];
    float salary;
};

int main() {
    Employee emp;

    cout << "Enter Employee ID: ";
    cin >> emp.empID;
    int tempID = emp.empID;

    cout << "Enter Employee Name: ";
    cin.ignore();
    cin.getline(emp.name, 21);
    char tempName[21];
    strcpy(tempName, emp.name);

    cout << "Enter Date of Birth (dd/mm/yyyy): ";
    cin.getline(emp.dob, 11);
    char tempDOB[11];
    strcpy(tempDOB, emp.dob);

    cout << "Enter Date of Joining (dd/mm/yyyy): ";
    cin.getline(emp.doj, 11);
    char tempDOJ[11];
    strcpy(tempDOJ, emp.doj);

    cout << "Enter Salary: ";
    cin >> emp.salary;
    float tempSalary = emp.salary;

    cout << "ID : " << tempID << endl;
    cout << "Name : " << tempName << endl;
    cout << "DOB : " << tempDOB << endl;
    cout << "DOJ : " << tempDOJ << endl;
    cout << "Salary : " << fixed << setprecision(1) << tempSalary << endl;

    return 0;
}

```

### Homework Question

**Problem Statement:**

Write a C++ program to create a union that can store information about a book. The program should prompt the user to enter the book's ISBN, title, author, publication year, and price. The program should then display the entered information.

**Union Name:** Book

**Input format:**
- The first line contains a string representing the ISBN (maximum length 13 characters).
- The second line contains a string representing the book's title (maximum length 30 characters).
- The third line contains a string representing the author's name (maximum length 30 characters).
- The fourth line contains an integer representing the publication year.
- The fifth line contains a floating-point number representing the price.

**Output format:**
- The first line displays the ISBN of the book.
- The second line displays the book's title.
- The third line displays the author's name.
- The fourth line displays the publication year.
- The fifth line displays the price of the book, rounded off to two decimal places.

**Example:**

| Input 1: | Output 1: |
| -------- | --------- |
| 9780131103627 | ISBN: 9780131103627 |
| The C++ Programming Language | Title: The C++ Programming Language |
| Bjarne Stroustrup | Author: Bjarne Stroustrup |
| 2013 | Publication Year: 2013 |
| 59.99 | Price: 59.99 |

| Input 2: | Output 2: |
| -------- | --------- |
| 9780321563842 | ISBN: 9780321563842 |
| Effective C++ | Title: Effective C++ |
| Scott Meyers | Author: Scott Meyers |
| 2005 | Publication Year: 2005 |
| 45.50 | Price: 45.50 |

**Note:**
- Ensure that the input strings do not exceed their maximum lengths.
- Use appropriate data types for each member of the union.

<!--Solve The code -->



## Contributions

This content was created by [Bhanu Partap](https://github.com/Bhanu-partap-13). If you have any questions or suggestions, feel free to reach out or contribute to the repository.