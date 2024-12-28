//-------------------------------------------------------Member Function-------------------------------------------------------------------

//What are member functions? 
//Member functions are like special tools inside a class that help you do things with the class's data.
//For example:  Think of a class as a blueprint for an object (like a car), and member functions are the actions the car can perform (like start, stop, or honk).

//Why Use Member Functions?
/*
We use member functions to:
1.Organize code: Keep related data and actions together.
2.Encapsulate data: Protect data from being changed directly by others.
3.Provide functionality: Define what actions can be performed with the data.
*/

/*
Syntax:
1.Declare a Function Inside a Class:
    class ClassName {
     public: void FunctionName(); // This declares a function 
     };

2.Declare a Function Outside a Class:
    void ClassName::FunctionName()
     { // Code for the function goes here 
     }
*/

/*
Example Code: 1
*/
#include <iostream> 
using namespace std; 
class Rectangle {
private: 
    int width; 
    int height; 
public:
    // Constructor: we will study in next lesson
    Rectangle(int w, int h) : width(w), height(h) {} 
    
    // Member function to calculate area 
    int getArea() { 
        return width * height; 
    } 
        
    // Member function to display dimensions 
    void display() { 
        cout << "Width: " << width << ", Height: " << height << endl; 
    }  
};

int main() { 
    // Create an object of Rectangle 
    Rectangle rect(10, 5); // Call member functions 
    rect.display(); // Prints: Width: 10, Height: 5 
    cout << "Area: " << rect.getArea() << endl; // Prints: Area: 50 
    return 0; 
}


/*
Example Code: 2
*/
#include <iostream>
using namespace std;

class Rectangle {
private:
    int width;
    int height;

public:
    Rectangle(int w, int h);
    int getArea();
    void display();
};

// Constructor definition outside the class
Rectangle::Rectangle(int w, int h) : width(w), height(h) {}

// Member function definitions outside the class
int Rectangle::getArea() {
    return width * height;
}

void Rectangle::display() {
    cout << "Width: " << width << ", Height: " << height << endl;
}

int main() {
    Rectangle rect(10, 5);

    rect.display(); 
    cout << "Area: " << rect.getArea() << endl; 

    return 0;
}
