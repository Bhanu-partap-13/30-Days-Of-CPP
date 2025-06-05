//What is Destructor?
//Like a constructor, Destructor is also a member function of a class that has the same name as the class name preceded by a (~) operator. 
// (~) operator is called tilde operator.
//In a class, there is always a single destructor without any parameters so it can’t be overloaded.
// It is always called in the reverse order of the constructor.

/*
Syntax :
~ClassName()
{ 
    //Destructor's Body
}
*/

/*
Example Code:
*/
#include <iostream>
using namespace std;

class Z
{
public:
	// destructor
	~Z()
	{
		cout<<"Destructor called"<<endl;
	}
};

int main()
{
	Z z1; 
	int a = 1;
	if(a==1)
	{
		Z z2;
	} // Destructor Called for z2
} // Destructor called for z1


// why we use Destructors?
/*
1. Destructor is used to destroy the instances.
2. It is called while object of the class is freed or deleted.
3. While it is used to deallocate the memory of an object of a class.
4. Here, its name is also same as the class name preceded by the tiled (~) operator.
5. While in a class, there is always a single destructor.
6. Whereas it is declared as ~ className( no arguments ){ } .
*/