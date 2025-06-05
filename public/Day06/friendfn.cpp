//--------------------------------------------------------------------Friend Function & Class------------------------------------------------------------
// 30 Days of C++ - By bhanu partap - learn more about me at https://github.com/Bhanu-partap-13
// Data Hiding is a fundamental concept of Object-Oriented Programming. It is the ability of an object to hide its data from the outside world.
//Similarly, Protected Members are accessible within the class and its derived classes. They are not accessible outside the class.

//Example Code
#include <iostream>
using namespace std;

class A
{
private:
    int a = 10; //Private Member
protected:
    int b = 20;     //Protected Member
public:
  friend void display(A obj);
};

void display(A obj)
{
    cout << "Value of a is: " << obj.a << endl;
    cout << "Value of b is: " << obj.b << endl;
}

int main()
{
    A obj;
    display(obj);
    return 0;
}
//Output: Value of a is: 10
//        Value of b is: 20

//Syntax for Friend Function
/*
class ClassName
{
    private:
        int a;
    protected:
        int b;
    public:
        friend returnType FriendFunctionName(arguments);
};
*/


//Example Code
#include <iostream>
using namespace std;

class Distance{
    private:
    int meter;
        friend int addFive(Distance); 
    public:
        Distance(): meter(0){}
};
//friend function definition
int addFive(Distance d){ //accessing private data from the friend function
    d.meter += 5;
    return d.meter;
}

int main(){
    Distance D;
    cout << "Distance: " << addFive(D);
    return 0;
}

//Output: Distance: 5

//We can also use friend Class to access the private and protected members of a class.
//Example Code
#include <iostream>
using namespace std;

class A
{
private:
    int a = 10; //Private Member
protected:
    int b = 20; //Protected Member
public:
    friend class B;
};

class B //Friend Class
{
public:
    void display(A obj)
    {
        cout << "Value of a is: " << obj.a << endl;
        cout << "Value of b is: " << obj.b << endl;
    }
};

int main()
{
    A obj;
    B obj1;
    obj1.display(obj);
    return 0;
}

//Output: Value of a is: 10
//        Value of b is: 20

