//Classes in C++ - building blockas lead to object oriented programming language
/*
User defined datatype, holds its own data members and member functions, which can be accessed by create a instance of a class
Data members aer the data variables and member functions are the functions that can be used to manipulate these variables together
*/

/*
Class is like the blueprint of the Object.
For eg i am having the class Animal - Loin,Dog,Elephant  are the objects of the class and legs, tail, breed are the common properties*/

/*
Object - Instance of the class. 
1. When a class is defined no memory is allocated but when an object is created memory is allocated.
2. Consider class as a blueprint and object as the building made from the blueprint.
*/

//-----------------------------------------------------Defining class and declaring object-----------------------------------------------------

class ClassName{ //class is a keyword & ClassName is the user-defined name of the class
    //Access Specifier: Public, Private, Protected
    //Data members; Variables to be used in the class
    //Member functions {}; Functions to be used in the class
};  //Don't forget to put semicolon at the end of the class

ClassName objectName; //objectName is the object of the class ClassName

class Box{
    private:
        // data members
    public:
        // member functions
}; //Don't forget to put semicolon at the end of the class 
//------------------This is the class-------------

// And Box b1, Box b2, Box b3; are the objects of the class Box

//Accessing Data Members and Member Functions
/*
the data members and member functions of a class can be accessed using the dot operator (.) with the object of the class.
For eg. objectName.dataMemberName;
        objectName.memberFunctionName();
*/
//using only public access specifier
#include<iostream>
using namespace std;    

class Circle{
    public:
        double radius;
        double area(){
            return 3.14*radius*radius;
        }
};

int main(){
    Circle obj;
    obj.radius = 5.5;
    cout<<"Radius of the circle: "<<obj.radius<<endl; //we can also write ("/n") instead of endl   
    cout<<"Area of the circle: "<<obj.area()<<endl;
    return 0;
}
//Run the code in your compiler and see the output

//using private access specifier
#include<iostream>
using namespace std;

class Circle{
    private:
        double rad;
    public:
        double area(){
            return 3.14*rad*rad;
        }
        void setRadius(double r){
            rad = r;
        }
};

int main(){
    Circle obj;
    obj.setRadius(5.5);
    cout<<"Radius of the circle: "<<obj.area()<<endl;
    return 0;
}
//Run the code in your compiler and see the output

//using protected access specifier
#include<iostream>  
using namespace std;

class Circle{
    protected:
        double rad;
    public:
        double area(){
            return 3.14*rad*rad;
        }
        void setRadius(double r){
            rad = r;
        }
};
int main(){
    Circle obj;
    obj.setRadius(5.5);
    cout<<"Radius of the circle: "<<obj.area()<<endl;
    return 0;
}
//Run the code in your compiler and see the output