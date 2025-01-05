# Day 19: Basics of Inheritance in C++

## Beginner-Friendly Questions

1. **What is inheritance in C++?**
    - [x] A way to create new classes from existing classes
    - [ ] A way to create functions
    - [ ] A way to create variables
    - [ ] A way to create objects

2. **Which Access Specifier is used to inherit a class in C++?**
    - [ ] `inherit`
    - [ ] `extends`
    - [ ] `base`
    - [x] `public`

3. **What is the base class in inheritance?**
    - [x] The class that is inherited
    - [ ] The class that inherits
    - [ ] The class that is created
    - [ ] The class that is destroyed

4. **Which type of inheritance allows a class to inherit from multiple classes?**
    - [ ] Single inheritance
    - [x] Multiple inheritance
    - [ ] Multilevel inheritance
    - [ ] Hierarchical inheritance

5. **What is the derived class in inheritance?**
    - [ ] The class that is inherited
    - [x] The class that inherits
    - [ ] The class that is created
    - [ ] The class that is destroyed

6. **Which access specifier allows members to be inherited but not accessible outside the class?**
    - [ ] `public`
    - [ ] `private`
    - [x] `protected`
    - [ ] `default`

7. **Which of the following is a correct syntax for inheritance in C++?**
    - [x] `class Derived : public Base {}`
    - [ ] `class Derived extends Base {}`
    - [ ] `class Derived inherits Base {}`
    - [ ] `class Derived : Base {}`

## Code-Based Questions

1. **Given the following code, which class is the base class?**
    ```cpp
    class Animal {};
    class Dog : public Animal {};
    ```
    - [x] `Animal`
    - [ ] `Dog`
    - [ ] `public`
    - [ ] `class`

2. **What will be the output of the following code?**
    ```cpp
    class Base {
    public:
         void show() { cout << "Base"; }
    };
    class Derived : public Base {
    public:
         void show() { cout << "Derived"; }
    };
    int main() {
         Derived d;
         d.show();
         return 0;
    }
    ```
    - [ ] `Base`
    - [x] `Derived`
    - [ ] `BaseDerived`
    - [ ] `DerivedBase`

3. **Which of the following is true about constructors in inheritance?**
    - [x] Base class constructor is called first
    - [ ] Derived class constructor is called first
    - [ ] Constructors are not called
    - [ ] Only derived class constructor is called

4. **What is the correct way to call a base class constructor in a derived class?**
    - [ ] `Base()`
    - [ ] `Base::Base()`
    - [x] `Derived :: Base()`
    - [ ] `Derived()`

5. **What will be the output of the following code?**
    ```cpp
    class A {
    public:
         A() { cout << "A"; }
    };
    class B : public A {
    public:
         B() { cout << "B"; }
    };
    int main() {
         B b;
         return 0;
    }
    ```
    - [ ] `A`
    - [ ] `B`
    - [x] `AB`
    - [ ] `BA`

6. **Which of the following is not a type of inheritance in C++?**
    - [ ] Single inheritance
    - [ ] Multiple inheritance
    - [ ] Multilevel inheritance
    - [x] Double inheritance

7. **What is the correct way to access a base class member in a derived class?**
    - [x] `Base::member`
    - [ ] `Derived::member`
    - [ ] `member`
    - [ ] `Base.member`

    ## Homework Problems

    ### Problem 1: Inheritance and Method Overriding

    **Explain what to do in the question:**
    Create a base class `Shape` with a method `area()`. Derive two classes `Rectangle` and `Circle` from `Shape`. Override the `area()` method in both derived classes to calculate the area of a rectangle and a circle respectively.

    **Topic Name:**
    Inheritance and Method Overriding

    **Input format:**
    - For `Rectangle`: Two integers representing the length and width.
    - For `Circle`: One integer representing the radius.

    **Output format:**
    - The area of the rectangle or circle.

    **Example:**

    | Input 1: | Output 1: |
    | -------- | --------- |
    | 5 10     | 50        |
    | 7        | 153.938   |

    | Input 2: | Output 2: |
    | -------- | --------- |
    | 3 4      | 12        |
    | 10       | 314.159   |

    **Solution:**
    ```cpp
    #include <iostream>
    #include <cmath>
    using namespace std;

    class Shape {
    public:
        virtual double area() = 0; // Pure virtual function
    };

    class Rectangle : public Shape {
        int length, width;
    public:
        Rectangle(int l, int w) : length(l), width(w) {}
        double area() override {
            return length * width;
        }
    };

    class Circle : public Shape {
        int radius;
    public:
        Circle(int r) : radius(r) {}
        double area() override {
            return M_PI * radius * radius;
        }
    };

    int main() {
        Rectangle rect(5, 10);
        Circle circ(7);
        cout << "Rectangle Area: " << rect.area() << endl;
        cout << "Circle Area: " << circ.area() << endl;
        return 0;
    }
    ```

    ### Problem 2: Inheritance and Constructor Initialization

    **Explain what to do in the question:**
    Create a base class `Person` with a constructor that initializes the name and age. Derive a class `Student` from `Person` that also initializes the grade. Print the details of the student.

    **Topic Name:**
    Inheritance and Constructor Initialization

    **Input format:**
    - A string for the name, an integer for the age, and a character for the grade.

    **Output format:**
    - The details of the student in the format: "Name: [name], Age: [age], Grade: [grade]".

    **Example:**

    | Input 1: | Output 1: |
    | -------- | --------- |
    | John 20 A | Name: John, Age: 20, Grade: A |

    | Input 2: | Output 2: |
    | -------- | --------- |
    | Alice 22 B | Name: Alice, Age: 22, Grade: B |

    **Solution:**
    ```cpp
    #include <iostream>
    using namespace std;

    class Person {
    protected:
        string name;
        int age;
    public:
        Person(string n, int a) : name(n), age(a) {}
    };

    class Student : public Person {
        char grade;
    public:
        Student(string n, int a, char g) : Person(n, a), grade(g) {}
        void printDetails() {
            cout << "Name: " << name << ", Age: " << age << ", Grade: " << grade << endl;
        }
    };

    int main() {
        Student student1("John", 20, 'A');
        student1.printDetails();
        Student student2("Alice", 22, 'B');
        student2.printDetails();
        return 0;
    }
    ```