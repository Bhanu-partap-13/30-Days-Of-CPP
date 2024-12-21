//---------------------------------------------------------------------Static Member Function--------------------------------------------------------------

//static member function is a function that belongs to the class rather than the object of a class.
// It does not have access to 'this' pointer. It can only access static data members and static member functions.

/*
Syntax:
class class_name
{
    public:
        static return_type function_name(parameters);
};
*/

//Why we Use Static Member Function? Ans: To access the static data members of the class. For eg: To count the number of objects of a class.

//Example Code

#include<iostream>
using namespace std;

class App {

    static int num; //static data member

public:
    static int fn() //static member function
    {
        cout<<"The Value of num is: "<<num<<endl;
    }
};

int App::num = 10; //initializing the static data member

int main()
{
    App n; //create object of class
    n.fn(); //calling the static member function
    return 0;
}


//Static Data Members: A static data member is a class variable that is shared among all the objects of the class. It is declared with the 'static' keyword.

/*
Syntax:
class class_name
{
    public:
        static data_type variable_name;
};
*/
//Example Code

#include<iostream>
using namespace std;

class Car{
    public:
        static int count;
        Car(){
            count++;
        }
        static void display(){
            cout<<"Total Cars: "<<count<<endl;
        }
};

int Car::count = 0;

int main(){
    Car c1, c2, c3;
    Car::display();
    return 0;
}