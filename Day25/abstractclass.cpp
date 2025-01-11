//-----------------------------------------------------------------Abstract Class---------------------------------------------------------------
//What is Abstract Class?
/*
-An abstract class is a class that is designed to be specifically used as a base class.
-An abstract class contains at least one pure virtual function.
-You can declare a pure virtual function by using a pure specifier (= 0) in the declaration of a virtual member function in the class declaration.
*/

/*
Syntax: Class classname // abstract class  
        {  
        //data members                                                          
        public:  
        //pure virtual function  
        // Other members  
        };  
*/

/*
Example Code of Syntax:     class Shape {  
                            public:  
                                // All the functions of both square and rectangle are clubbed together in a single class.  
                            void width(int w) {  
                                shape_width = w;  
                            }  
                            void height(int h) {  
                                shape_height = h;  
                            }  
                            int areaOfSquare(int s) {  
                                return 4 * s;  
                            }  
                            int areaOfRectange(int l, int b) {  
                                return (l * b);  
                            }  
                            protected:  
                                int shape_width;  
                                int shape_height;  
                            }; 
*/

//What is an Interface?
// - An interface can only inherit from another interface.

//-------------------------------------------------------------Example Codes----------------------------------------------------------------------

/*
Example 1: Basic Abstract Class
*/
#include <iostream>
using namespace std;

class Animal {
public:
    virtual void makeSound() = 0; // Pure virtual function
};

class Dog : public Animal {
public:
    void makeSound() override {
        cout << "Dog barks." << endl;
    }
};

class Cat : public Animal {
public:
    void makeSound() override {
        cout << "Cat meows." << endl;
    }
};

int main() {
    Animal* animal;

    Dog dog;
    Cat cat;

    animal = &dog;
    animal->makeSound(); // Calls Dog's makeSound()

    animal = &cat;
    animal->makeSound(); // Calls Cat's makeSound()

    return 0;
} 
/*
Output:
Dog barks.
Cat meows.
*/

/*
Example 2: Abstract Class with Additional Member Functions
*/
#include <iostream>
using namespace std;

class Shape {
public:
    virtual void draw() = 0; // Pure virtual function

    void description() {
        cout << "This is a shape." << endl;
    }
};
class Circle : public Shape {
public:
    void draw() override {
        cout << "Drawing a circle." << endl;
    }
};
class Rectangle : public Shape {
public:
    void draw() override {
        cout << "Drawing a rectangle." << endl;
    }
};

int main() {
    Circle circle;
    Rectangle rectangle;
    circle.description(); // Calls Shape's description()
    circle.draw();        // Calls Circle's draw()

    rectangle.description(); // Calls Shape's description()
    rectangle.draw();        // Calls Rectangle's draw()
    return 0;
}
/*
Output:
This is a shape.
Drawing a circle.
This is a shape.
Drawing a rectangle.
*/

