
# 30 Days of C++ :shipit:

## **MCQs**

`Que 1`What happens when we try to compile the following program?<br>
#include <iostream> <br>
using namespace std;<br>

class Number {<br>
public:<br>
    int num;<br>
    void setNum(int n) {<br>
        num = n;<br>
    }<br>
};<br>
<br>
int main() {<br>
    Number n1;<br>
    n1.setNum(5);<br>
    Number n2 = n1;<br>
    n2.num = 10;<br>
    cout << n1.num << " " << n2.num;<br>
    return 0;<br>
}
<br>

   - [ ] 5 5<br>
   - [x] 5 10<br>
   - [ ] 10 10<br>
   - [ ] None of the mentioned options<br>

`Que 2`What will be the output of the following program?<br>
#include <iostream><br>
using namespace std;<br>

class Sample {<br>
    public:<br>
        int x;<br>
};<br>

int main() {<br>
    Sample obj;<br>
    obj.x = 100;<br>
    cout << "x = " << obj.x;<br>
    return 0;<br>
}
<br>

   - [ ] x=10<br>
   - [x] x=100<br>
   - [ ] Compile time error<br>
   - [ ] None of the Above<br>

`Que 3`What will be the output of the following program?<br>
#include <iostream><br>
using namespace std;<br>

class Test {<br>
  int x; <br>
};<br>

int main(){<br>
  Test t;<br>
  cout << t.x;<br>
  return 0;<br>
}<br>
   - [ ] 0<br>
   - [ ] Garbage Value<br>
   - [ ] Run Time Error<br>
   - [x] Compile Time Error<br>

`Que 4` What is output of following Code<br>
#include <iostream><br>
using namespace std;<br>

class Time {<br>
public:<br>
    int hours;<br>
    int minutes;<br>
};<br>
<br>
int main() {<br>
    Time t;<br>
    t.hours = 10;<br>
    t.minutes = 30;<br>
    cout << "Time: " << t.hours << ":" << t.minutes << endl; <br>
    return 0; <br>
}<br>

   - [ ] It displays the current time.<br>
   - [ ] It sets the time to the current system time.<br>
   - [x] It displays the Time: 10:30<br>
   - [ ] Compile Time Error<br>

`Que 5` What is the output for the following code?<br>
#include <iostream><br>
using namespace std;<br>

class BankAccount {<br>
public:<br>
    int balance;<br>
};<br>

int main() {<br>
    BankAccount account;<br>
    account.balance =500;<br>
    int depositAmount = 1000;<br>
    account.balance += depositAmount;<br>
    int balance = account.balance;<br>
    cout<<balance;<br>
    return 0;<br>
}<br>

   - [ ] 1000<br>
   - [ ] 500<br>
   - [x] 1500<br>
   - [ ] Compile Time Error<br>

`Que 6` What is the output for the following code?<br>
#include <iostream><br>
using namespace std;<br>

class Book {<br>
public:<br>
    string title;<br>
    string author;<br>
};<br>

int main() {<br>
    Book book;<br>
    book.title = "The Great Gatsby";<br>
    book.author = "F. Scott Fitzgerald";<br>
    cout << "Title: " << book.title << endl;<br>
    cout << "Author: " << book.author;<br>
    return 0;<br>
}

   - [x] Title: The Great Gatsby
        <br>Author: F. Scott Fitzgerald<br>
   - [ ] Author: F. Scott Fitzgerald<br>
         Title: The Great Gatsby<br>
   - [ ] Compile time error<br>
   - [ ] Run Time Error<br>

`Que 7` What will be output of following code?<br>
#include <iostream><br>
using namespace std;<br>

class Rectangle {<br>
public:<br>
    int length;<br>
    int width;<br>

};<br>

int main() {<br>
    Rectangle rect;<br>
    rect.length = 15;<br>
    rect.width = 13;<br>
    int area = rect.length * rect.width;<br>
    cout<<area;<br>
    return 0;<br>
}

   -  [ ] 200<br>
   -  [x] 195<br>
   -  [ ] Compile Time Error<br>
   -  [ ] 15<br>13<br>

`Que 8` What will the output of the below code be?<br>
#include <iostream><br>
#include <string><br>
using namespace std;<br>

class Student {<br>
public:<br>
    string name;<br>
    int age;<br>
};<br>
int main() {<br>
    Student students[3];<br>
    students[0].name = "John";  <br>  
    students[0].age = 20;<br>
    students[1].name = "Alice";<br>
    students[1].age = 19;<br>
    students[2].name = "Bob";<br>
    students[2].age = 22;<br>
    cout << "Name: " << students[1].name << ", Age: " << students[1].age;<br>
    return 0;<br>
}<br>

   - [ ] Name: John, Age: 20<br>
   - [x] Name: Alice, Age: 19<br>
   - [ ] Name: Bob, Age: 22<br>
   - [ ] Error: Array index out of bounds.<br>

`Que 9` What is the output of the following code?<br>
#include <iostream><br>
using namespace std;<br>

class Car {<br>
public:<br>
    string make;<br>
    string model;<br>
};<br>
int main() {<br>
    Car myCar;<br>
    myCar.make = "Toyota";<br>
    myCar.model = "Camry";<br>
    cout << "Make: " << myCar.make << ", Model: " << myCar.model << endl;<br>
    return 0;<br>
}<br>

   - [ ] Toyota Camry<br>
   - [ ] Make: Toyota, Model:<br>
   - [ ] Error: Missing library declaration<br>
   - [x] Make: Toyota, Model: Camry<br>

## Coding Questions

`Que 1`
Problem Statement<br>
Nial is developing a student information system. Create a class Input to store a student's name and roll number. In the main() function, read the student's details and display them.<br>

Input format :<br>
The first line of the input consists of a string, which represents the student's name.<br>

The second line of the input consists of an integer, which represents the roll number.<br>

Output format :<br>
The output prints "X: Y" where X is the student's name and Y is the roll number.<br><br>
Sample test cases :<br>
Input 1 :<br>
Jane<br>
158<br>
Output 1 :<br>
158: Jane<br>
Input 2 :<br>
John<br>
8486<br>
Output 2 :<br>
8486: John<br>

`SOLUTION:`

```
#include <iostream>
#include <string>
using namespace std;

class Input {
public:
    string name;
    int rollNumber;

    void readInput() {
        getline(cin, name);
        cin >> rollNumber;
    }

    void display() {
        cout << rollNumber << ": " << name;
    }
};

int main() {
    Input student;
    student.readInput();
    student.display();
    return 0;
}
```

<!--Homework Questions-->
`que2`
Problem Statement<br>
Nial is developing a student information system. Create a class Input to store a student's name and roll number. In the main() function, read the student's details and display them.
<br>
Input format :<br>
The first line of the input consists of a string, which represents the student's name.<br>

The second line of the input consists of an integer, which represents the roll number.<br>

Output format :<br>
The output prints "X: Y" where X is the student's name and Y is the roll number.<br>



Refer to the sample output for formatting specifications.<br>

Code constraints :<br>
The student name should be a non-empty string.<br>

The student roll number should be a non-negative integer.<br>

Sample test cases :<br>
Input 1 :<br>
Jane<br>
158<br>
Output 1 :<br>
158: Jane<br>
Input 2 :<br>
John<br>
8486<br>
Output 2 :<br>
8486: John<br>