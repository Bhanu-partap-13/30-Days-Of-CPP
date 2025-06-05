# Day 24: Virtual Functions and Polymorphism in C++

## Beginner-Friendly Questions

1. What is a virtual function in C++?
    - [ ] A function that is only declared but not defined
    - [x] A function that can be overridden in a derived class
    - [ ] A function that is always inline
    - [ ] A function that cannot be inherited

2. What is polymorphism in C++?
    - [ ] The ability of a function to have multiple names
    - [ ] The ability of a class to have multiple constructors
    - [x] The ability of a function to behave differently based on the object that calls it
    - [ ] The ability of a variable to change its type at runtime

3. Which keyword is used to declare a virtual function?
    - [ ] override
    - [ ] final
    - [x] virtual
    - [ ] static

4. What is the purpose of the `virtual` keyword in C++?
    - [ ] To make a function static
    - [ ] To make a function inline
    - [x] To allow a function to be overridden in a derived class
    - [ ] To prevent a function from being inherited

5. What is the output of the following code?
    ```cpp
    class Base {
    public:
         virtual void show() { cout << "Base" << endl; }
    };
    class Derived : public Base {
    public:
         void show() { cout << "Derived" << endl; }
    };
    int main() {
         Base* b = new Derived();
         b->show();
         return 0;
    }
    ```
    - [ ] Base
    - [x] Derived
    - [ ] BaseDerived
    - [ ] Compilation error

6. Can a destructor be virtual in C++?
    - [x] Yes
    - [ ] No

7. What is the main advantage of using virtual functions?
    - [ ] To increase the execution speed of the program
    - [ ] To reduce the size of the executable
    - [x] To achieve runtime polymorphism
    - [ ] To make the code more readable

## Code-Based Questions

1. Given the following code, what will be the output?
    ```cpp
    class Animal {
    public:
         virtual void sound() { cout << "Animal Sound" << endl; }
    };
    class Dog : public Animal {
    public:
         void sound() { cout << "Bark" << endl; }
    };
    int main() {
         Animal* a = new Dog();
         a->sound();
         return 0;
    }
    ```
    - [ ] Animal Sound
    - [x] Bark
    - [ ] Animal SoundBark
    - [ ] Compilation error

2. What will be the output of the following code?
    ```cpp
    class Shape {
    public:
         virtual void draw() { cout << "Drawing Shape" << endl; }
    };
    class Circle : public Shape {
    public:
         void draw() { cout << "Drawing Circle" << endl; }
    };
    int main() {
         Shape* s = new Circle();
         s->draw();
         return 0;
    }
    ```
    - [ ] Drawing Shape
    - [x] Drawing Circle
    - [ ] Drawing ShapeDrawing Circle
    - [ ] Compilation error

3. What will be the output of the following code?
    ```cpp
    class Base {
    public:
         virtual void display() { cout << "Base Display" << endl; }
    };
    class Derived : public Base {
    public:
         void display() { cout << "Derived Display" << endl; }
    };
    int main() {
         Base b;
         b.display();
         return 0;
    }
    ```
    - [x] Base Display
    - [ ] Derived Display
    - [ ] Base DisplayDerived Display
    - [ ] Compilation error

4. What will be the output of the following code?
    ```cpp
    class A {
    public:
         virtual void show() { cout << "A" << endl; }
    };
    class B : public A {
    public:
         void show() { cout << "B" << endl; }
    };
    class C : public B {
    public:
         void show() { cout << "C" << endl; }
    };
    int main() {
         A* a = new C();
         a->show();
         return 0;
    }
    ```
    - [ ] A
    - [ ] B
    - [x] C
    - [ ] Compilation error

5. What will be the output of the following code?
    ```cpp
    class X {
    public:
         virtual void print() { cout << "X" << endl; }
    };
    class Y : public X {
    public:
         void print() { cout << "Y" << endl; }
    };
    int main() {
         X* x = new Y();
         x->print();
         return 0;
    }
    ```
    - [ ] X
    - [x] Y
    - [ ] XY
    - [ ] Compilation error

6. What will be the output of the following code?
    ```cpp
    class Parent {
    public:
         virtual void message() { cout << "Parent" << endl; }
    };
    class Child : public Parent {
    public:
         void message() { cout << "Child" << endl; }
    };
    int main() {
         Parent* p = new Child();
         p->message();
         return 0;
    }
    ```
    - [ ] Parent
    - [x] Child
    - [ ] ParentChild
    - [ ] Compilation error

7. What will be the output of the following code?
    ```cpp
    class Vehicle {
    public:
         virtual void type() { cout << "Vehicle" << endl; }
    };
    class Car : public Vehicle {
    public:
         void type() { cout << "Car" << endl; }
    };
    int main() {
         Vehicle* v = new Car();
         v->type();
         return 0;
    }
    ```
    - [ ] Vehicle
    - [x] Car
    - [ ] VehicleCar
    - [ ] Compilation error


## Very Advanced Problems

### Problem 1: Polymorphic Behavior with Multiple Inheritance

**Explain what to do in the question:**
Create two base classes `Engine` and `Wheels` each with a virtual function `specs()`. Derive a class `Car` from both `Engine` and `Wheels`, and override the `specs()` function in `Car` to print "Car Engine Specs" and "Car Wheels Specs" respectively. Write a main function to demonstrate polymorphism by creating pointers of type `Engine` and `Wheels` and assigning them to an object of `Car`.

**Topic name:**
Polymorphism with Multiple Inheritance

**Input format:**
- No input required

**Output format:**
- The output should display the specifications of the car's engine and wheels.

**Example:**

| Input 1: | Output 1: |
| -------- | --------- |
| - | Car Engine Specs |
| - | Car Wheels Specs |

**Solution:**
```cpp
#include <iostream>
using namespace std;

class Engine {
public:
    virtual void specs() { cout << "Engine Specs" << endl; }
};

class Wheels {
public:
    virtual void specs() { cout << "Wheels Specs" << endl; }
};

class Car : public Engine, public Wheels {
public:
    void specs() override { 
        cout << "Car Engine Specs" << endl; 
        cout << "Car Wheels Specs" << endl; 
    }
};

int main() {
    Car* car = new Car();
    Engine* engine = car;
    Wheels* wheels = car;
    
    engine->specs();
    wheels->specs();
    
    delete car;
    
    return 0;
}
```

### Problem 2: Virtual Functions in a Hierarchical Inheritance

**Explain what to do in the question:**
Create a base class `Device` with a virtual function `info()`. Derive two classes `Computer` and `Smartphone` from `Device`, and override the `info()` function in each derived class to print "Computer Info" and "Smartphone Info" respectively. Further derive classes `Laptop` and `Desktop` from `Computer`, and override the `info()` function to print "Laptop Info" and "Desktop Info" respectively. Write a main function to demonstrate polymorphism by creating a pointer of type `Device` and assigning it to objects of `Laptop` and `Desktop`.

**Topic name:**
Hierarchical Inheritance with Virtual Functions

**Input format:**
- No input required

**Output format:**
- The output should display the information of the devices.

**Example:**

| Input 1: | Output 1: |
| -------- | --------- |
| - | Laptop Info |
| - | Desktop Info |

**Solution:**
```cpp
#include <iostream>
using namespace std;

class Device {
public:
    virtual void info() { cout << "Device Info" << endl; }
};

class Computer : public Device {
public:
    void info() override { cout << "Computer Info" << endl; }
};

class Smartphone : public Device {
public:
    void info() override { cout << "Smartphone Info" << endl; }
};

class Laptop : public Computer {
public:
    void info() override { cout << "Laptop Info" << endl; }
};

class Desktop : public Computer {
public:
    void info() override { cout << "Desktop Info" << endl; }
};

int main() {
    Device* device1 = new Laptop();
    Device* device2 = new Desktop();
    
    device1->info();
    device2->info();
    
    delete device1;
    delete device2;
    
    return 0;
}
```

### Problem 3: Pure Virtual Functions in a Complex Inheritance Hierarchy

**Explain what to do in the question:**
Create an abstract base class `Appliance` with a pure virtual function `operate()`. Derive two classes `KitchenAppliance` and `HomeAppliance` from `Appliance`, and implement the `operate()` function in each derived class to print "Operating Kitchen Appliance" and "Operating Home Appliance" respectively. Further derive classes `Microwave` and `Refrigerator` from `KitchenAppliance`, and override the `operate()` function to print "Operating Microwave" and "Operating Refrigerator" respectively. Write a main function to demonstrate polymorphism by creating a pointer of type `Appliance` and assigning it to objects of `Microwave` and `Refrigerator`.

**Topic name:**
Complex Inheritance with Pure Virtual Functions

**Input format:**
- No input required

**Output format:**
- The output should display the operation of the appliances.

**Example:**

| Input 1: | Output 1: |
| -------- | --------- |
| - | Operating Microwave |
| - | Operating Refrigerator |

**Solution:**
```cpp
#include <iostream>
using namespace std;

class Appliance {
public:
    virtual void operate() = 0; // Pure virtual function
};

class KitchenAppliance : public Appliance {
public:
    void operate() override { cout << "Operating Kitchen Appliance" << endl; }
};

class HomeAppliance : public Appliance {
public:
    void operate() override { cout << "Operating Home Appliance" << endl; }
};

class Microwave : public KitchenAppliance {
public:
    void operate() override { cout << "Operating Microwave" << endl; }
};

class Refrigerator : public KitchenAppliance {
public:
    void operate() override { cout << "Operating Refrigerator" << endl; }
};

int main() {
    Appliance* appliance1 = new Microwave();
    Appliance* appliance2 = new Refrigerator();
    
    appliance1->operate();
    appliance2->operate();
    
    delete appliance1;
    delete appliance2;
    
    return 0;
}
```