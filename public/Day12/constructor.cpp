//What is Constructor in C++? 
//A constructor is a special member function of a class and shares the same name as of class, which means the constructor and class have the same name.
// Constructor is called by the compiler whenever the object of the class is created
// It can be defined manually with arguments or without arguments. 
// 30 Days of C++ - By bhanu partap - learn more about me at https://github.com/Bhanu-partap-13
/*
Syntax:
ClassName() 
{
    // Constructor Body
}
*/

/*
Example Code :
*/
#include <iostream>
using namespace std;

class Z
{
public:
	// constructor
	Z()
	{
		cout<<"Constructor called"<<endl;
	}

};

int main()
{
	Z z1; // Constructor Called
	int a = 1;
	if(a==1)
	{
		Z z2; // Constructor Called
	} 
}

//Why we use Contructors?
/*
1. It is declared as className( arguments if any ){Constructor’s Body }.	
2. A constructor is called when an instance or object of a class is created.	
3. Constructor is used to allocate the memory to an instance or object.	
4. The constructor’s name is same as the class name.
5. In a class, there can be multiple constructors.
6. Constructor helps to initialize the object of a class.	
*/

