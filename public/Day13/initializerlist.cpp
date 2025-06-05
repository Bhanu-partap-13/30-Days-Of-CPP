//------------------------------------------------------------Initializer List----------------------------------------------------------    

//Initializer List is used in initializing the data members of a class.
// The list of members to be initialized is indicated with constructor as a comma-separated list followed by a colon. 

/*
Syntax:
class ClassName {
private:
    int a;
    float b;
public:
    // Constructor with initializer list
    ClassName(int x, float y) : a(x), b(y) { 
        // constructor body (optional)
    }
};
*/

//1. Non Static Data Members
#include<iostream>
using namespace std;

class Test {
    const int t;
public:
  //Initializer list must be used
    Test(int t):t(t) {}
    int getT() { return t; }
};

int main() {
    Test t1(10);
    cout<<t1.getT();
    return 0;
}

//1. Reference Members
#include<iostream>
using namespace std;

class Test {
    int &t;
public:
    Test(int &t):t(t) {}  //Initializer list must be used
    int getT() { return t; }
};

int main() {
    int x = 20;
    Test t1(x);
    cout<<t1.getT()<<endl;
    x = 30;
    cout<<t1.getT()<<endl;
    return 0;
}

//3. Member objects without Default Constructor
#include <iostream>
using namespace std;

class A {
    int i;

public:
    A(int);
};

A::A(int arg)
{
    i = arg;
    cout << "A's Constructor called: Value of i: " << i
         << endl;
}
class B {
    A a;

public:
    B(int);
};

B::B(int x) : a(x)
{ 
    cout << "B's Constructor called";
}

int main()
{
    B obj(10);
    return 0;
}

//4. For Base Class
#include <iostream>  
using namespace std;  
  
class A {  
    int i;  
public:  
    A(int );  
};  
  
A::A(int arg) {  
    i = arg;  
    cout << "Constructor A is called: Value of i: " << i << endl;  
}  
  
// Class B is derived from A  
class B: A {  
public:  
    B(int );  
};  
  
B::B(int x):A(x) { //Initializer list must be used  
    cout << "Constructor B is called";  
}  
  
int main() {  
    B obj(46);  
    return 0;  
}  

//5. Same Name of Constructor and Data Member
#include <iostream>  
using namespace std;  
  
class A {  
    int i;  
public:  
    A(int );  
};  
  
A::A(int arg) {  
    i = arg;  
    cout << "Constructor A is called: Value of i: " << i << endl;  
}  
  
// Class B is derived from A  
class B: A {  
public:  
    B(int );  
};  
  
B::B(int x):A(x) { //Initializer list must be used  
    cout << "Constructor B is called";  
}  
  
int main() {  
    B obj(46);  
    return 0;  
}  
