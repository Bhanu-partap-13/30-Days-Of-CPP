//----------------------------------------------------Types Of Inheritance-----------------------------------------------------------
// 30 Days of C++ - By bhanu partap - learn more about me at https://github.com/Bhanu-partap-13
/*
- The inheritance can be classified on the basis of the relationship between the derived class and the base class. 
- In C++, we have 5 types of inheritances:

1. Single inheritance - a class is allowed to inherit from only one class. i.e. one base class is inherited by one derived class only.
2. Multilevel inheritance - where a class can inherit from more than one class. i.e one subclass is inherited from more than one base class.
3. Multiple inheritance -  a derived class is created from another derived class and that derived class can be derived from a base class or any other derived class.
4. Hierarchical inheritance - more than one subclass or derived class is inherited from a single base class.
5. Hybrid inheritance - combining more than one type of inheritance. For eg - Combining Hierarchical inheritance and Multiple Inheritance will create hybrid inheritance.
*/

/*
Syntax:
1. Single Inheritance -                     class subclass_name : access_mode base_class
   ------------------                       {
                                              //  body of subclass
                                            };
For Eg:
        class A
        { 
        ... .. ... 
        };
        class B: public A
        {
        ... .. ...
        };                                    
*/

/*
Syntax:
2. Multiple   Inheritance -                 class subclass_name : access_mode base_class1, access_mode base_class2, ....
   ---------------------                    {
                                              //  body of subclass
                                            };
For Eg:
        class B
        { 
        ... .. ... 
        };
        class C
        { 
        ... .. ... 
        };
        class A: public B, public C
        {
        ... .. ...
        };                                    
*/

/*
Syntax:
3. Multilevel Inheritance -                class derived_class1: access_specifier base_class
    ---------------------                  {
                                            ... .. ...
                                           }
                                            class derived_class2: access_specifier derived_class1
                                            {
                                            ... .. ...
                                            }
                                            .....
For Eg:
        class C
        { 
        ... .. ... 
        };
        class B : public C
        {
        ... .. ...
        };
        class A: public B
        {
        ... ... ...
        };                                    
*/

/*
Syntax:
4. Hierarichial Inheritance -               class derived_class1: access_specifier base_class
    ---------------------                   {
                                            ... .. ...
                                            }
                                            class derived_class2: access_specifier base_class
                                            {
                                            ... .. ...
                                            }
For Eg:
        class A 
        {  
            // body of the class A.
        }
        class B : public A  
        {  
            // body of class B.
        }
        class C : public A  
        {  
            // body of class C.
        }
        class D : public A  
        {  
            // body of class D.
        }                                  
*/

/*
Syntax:
4. Hybrid Inheritance -             class F
   ------------------               {
                                    ... .. ...
                                    }
                                    class G
                                    {
                                    ... .. ...
                                    }
                                    class B : public F
                                    {
                                    ... .. ...
                                    }
                                    class E : public F, public G
                                    {
                                    ... .. ...
                                    }
                                    class A : public B {
                                    ... .. ...
                                    }
                                    class C : public B {
                                    ... .. ...
                                    }
*/

/*
Example Codes: 
*/

//Code 1 - Signle Inheritance 

#include <iostream>  
using namespace std; 

 class Account {  
   public:  
   float salary = 60000;   
 };  
   class Programmer: public Account {  
   public:  
   float bonus = 5000;    
   };       

int main(void) {  
     Programmer p1;  
     cout<<"Salary: "<<p1.salary<<endl;    
     cout<<"Bonus: "<<p1.bonus<<endl;    
    return 0;  
}  
//Output: Salary: 60000
//        Bonus: 5000

//Code 2 - Multiple Inheritance
#include <iostream>
using namespace std;

class Vehicle {
public:
    Vehicle() { cout << "This is a Vehicle\n"; }
};

class FourWheeler {
public:
    FourWheeler() { cout << "This is a 4 Wheeler\n"; }
};

class Car : public Vehicle, public FourWheeler {
  public:
    Car() { cout << "This 4 Wheeler Vehical is a Car\n"; }
};

int main()
{
    Car obj;
    return 0;
}
//Output: This is a Vehicle
//        This is a 4 Wheeler
//        This 4 Wheeler Vehical is a Car

//Code 3 - Multilevel Inheritance
#include <iostream>  
using namespace std; 

 class Animal {  
   public:  
 void eat() {   
    cout<<"Eating..."<<endl;   
 }    
   };  

   class Dog: public Animal   
   {    
       public:  
     void bark(){  
    cout<<"Barking..."<<endl;   
     }    
   };   

   class BabyDog: public Dog   
   {    
       public:  
     void weep() {  
    cout<<"Weeping...";   
     }    
   };   

int main(void) {  
    BabyDog d1;  
    d1.eat();  
    d1.bark();  
     d1.weep();  
     return 0;  
}  
// Output: Eating...
//         Barking...
//         Weeping...

//Code 4 - Hierarchical Inheritance
#include <iostream>
using namespace std;

class Vehicle {
public:
    Vehicle() { cout << "This is a Vehicle\n"; }
};

class Car : public Vehicle {
public:
    Car() { cout << "This Vehicle is Car\n"; }
};

class Bus : public Vehicle {
public:
    Bus() { cout << "This Vehicle is Bus\n"; }
};

int main()
{
    Car obj1;
    Bus obj2;
    return 0;
}
/*
Output: This is a Vehicle
        This Vehicle is Car
        This is a Vehicle
        This Vehicle is Bus
*/

//Code 5 - Hybrid Inheritance
#include <iostream>
using namespace std;

class Vehicle {
public:
    Vehicle() { cout << "This is a Vehicle\n"; }
};

class Fare {
public:
    Fare() { cout << "Fare of Vehicle\n"; }
};

class Car : public Vehicle {
  public:
  Car() { cout << "This Vehical is a Car\n"; }
};

class Bus : public Vehicle, public Fare {
  public:
  Bus() { cout << "This Vehicle is a Bus with Fare\n"; }
};

int main()
{
    Bus obj2;
    return 0;
}
/*
Output: This is a Vehicle
        Fare of Vehicle
        This Vehicle is a Bus with Fare
*/
