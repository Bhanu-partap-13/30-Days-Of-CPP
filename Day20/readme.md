# Day 20: Types of Inheritance, Constructor, Destructor, and Polymorphism in Inheritance

## Beginner-Friendly Questions

1. **What is inheritance in C++?**
    - [ ] A way to create new classes from existing classes
    - [ ] A way to define functions
    - [x] A way to reuse code
    - [ ] A way to create variables

2. **Which type of inheritance allows a class to inherit from multiple base classes?**
    - [ ] Single inheritance
    - [x] Multiple inheritance
    - [ ] Multilevel inheritance
    - [ ] Hierarchical inheritance

3. **What is a constructor in C++?**
    - [ ] A function that is called when an object is destroyed
    - [ ] A function that is called to perform an operation
    - [x] A function that is called when an object is created
    - [ ] A function that is called to initialize a variable

4. **What is a destructor in C++?**
    - [ ] A function that is called when an object is created
    - [ ] A function that is called to perform an operation
    - [x] A function that is called when an object is destroyed
    - [ ] A function that is called to initialize a variable

5. **Which access specifier is used to inherit a class in C++?**
    - [ ] inherit
    - [ ] extends
    - [x] public
    - [ ] class

6. **What is polymorphism in C++?**
    - [ ] The ability to create multiple objects
    - [ ] The ability to define multiple variables
    - [x] The ability to call the same function in different ways
    - [ ] The ability to inherit from multiple classes

7. **Which type of inheritance involves a class inheriting from a single base class?**
    - [x] Single inheritance
    - [ ] Multiple inheritance
    - [ ] Multilevel inheritance
    - [ ] Hierarchical inheritance

## Code-Based Questions

1. **What will be the output of the following code?**
    ```cpp
    class Base {
    public:
         Base() { cout << "Base Constructor"; }
         ~Base() { cout << "Base Destructor"; }
    };

    class Derived : public Base {
    public:
         Derived() { cout << "Derived Constructor"; }
         ~Derived() { cout << "Derived Destructor"; }
    };

    int main() {
         Derived obj;
         return 0;
    }
    ```
    - [x] Base Constructor Derived Constructor Derived Destructor Base Destructor
    - [ ] Derived Constructor Base Constructor Base Destructor Derived Destructor
    - [ ] Base Constructor Derived Constructor Base Destructor Derived Destructor
    - [ ] Derived Constructor Base Constructor Derived Destructor Base Destructor

2. **Which of the following is true about constructors in inheritance?**
    - [ ] Constructors are inherited
    - [x] Constructors are not inherited
    - [ ] Constructors cannot be overloaded
    - [ ] Constructors are called in random order

3. **What will be the output of the following code?**
    ```cpp
    class A {
    public:
         A() { cout << "A"; }
    };

    class B : public A {
    public:
         B() { cout << "B"; }
    };

    class C : public B {
    public:
         C() { cout << "C"; }
    };

    int main() {
         C obj;
         return 0;
    }
    ```
    - [x] ABC
    - [ ] CBA
    - [ ] BAC
    - [ ] CAB

4. **What is the correct way to call a base class constructor in a derived class?**
    - [ ] Base();
    - [ ] base();
    - [x] Derived() : Base();
    - [ ] base::base();

5. **What will be the output of the following code?**
    ```cpp
    class Base {
    public:
         virtual void show() { cout << "Base"; }
    };

    class Derived : public Base {
    public:
         void show() { cout << "Derived"; }
    };

    int main() {
         Base *b;
         Derived d;
         b = &d;
         b->show();
         return 0;
    }
    ```
    - [x] Derived
    - [ ] Base
    - [ ] Base Derived
    - [ ] Derived Base

6. **Which of the following is true about destructors in inheritance?**
    - [ ] Destructors are inherited
    - [x] Destructors are not inherited
    - [ ] Destructors cannot be overloaded
    - [ ] Destructors are called in random order

7. **What will be the output of the following code?**
    ```cpp
    class A {
    public:
         A() { cout << "A"; }
         ~A() { cout << "a"; }
    };

    class B : public A {
    public:
         B() { cout << "B"; }
         ~B() { cout << "b"; }
    };

    int main() {
         B obj;
         return 0;
    }
    ```
    - [x] ABba
    - [ ] ABab
    - [ ] BAab
    - [ ] BAba

    ## Homework: Types of Inheritance

    ### Problem 1: Single Inheritance

    **Explain what to do in the question:**
    Implement a simple program demonstrating single inheritance where a derived class inherits from a base class and displays a message.

    **Topic Name:**
    Single Inheritance

    **Input format:**
    - No input required

    **Output format:**
    - Display messages from the base and derived class constructors

    **Example:**

    | Input 1: | Output 1: |
    | -------- | --------- |
    | - | Base Constructor Derived Constructor |

    ```cpp
    #include <iostream>
    using namespace std;

    class Base {
    public:
        Base() { cout << "Base Constructor "; }
    };

    class Derived : public Base {
    public:
        Derived() { cout << "Derived Constructor"; }
    };

    int main() {
        Derived obj;
        return 0;
    }
    ```

    ### Problem 2: Multiple Inheritance

    **Explain what to do in the question:**
    Implement a program demonstrating multiple inheritance where a derived class inherits from two base classes and displays messages from all constructors.

    **Topic Name:**
    Multiple Inheritance

    **Input format:**
    - No input required

    **Output format:**
    - Display messages from all constructors

    **Example:**

    | Input 1: | Output 1: |
    | -------- | --------- |
    | - | Base1 Constructor Base2 Constructor Derived Constructor |

    ```cpp
    #include <iostream>
    using namespace std;

    class Base1 {
    public:
        Base1() { cout << "Base1 Constructor "; }
    };

    class Base2 {
    public:
        Base2() { cout << "Base2 Constructor "; }
    };

    class Derived : public Base1, public Base2 {
    public:
        Derived() { cout << "Derived Constructor"; }
    };

    int main() {
        Derived obj;
        return 0;
    }
    ```

    ### Problem 3: Multilevel Inheritance

    **Explain what to do in the question:**
    Implement a program demonstrating multilevel inheritance where a class is derived from another derived class and displays messages from all constructors.

    **Topic Name:**
    Multilevel Inheritance

    **Input format:**
    - No input required

    **Output format:**
    - Display messages from all constructors

    **Example:**

    | Input 1: | Output 1: |
    | -------- | --------- |
    | - | Base Constructor Derived1 Constructor Derived2 Constructor |

    ```cpp
    #include <iostream>
    using namespace std;

    class Base {
    public:
        Base() { cout << "Base Constructor "; }
    };

    class Derived1 : public Base {
    public:
        Derived1() { cout << "Derived1 Constructor "; }
    };

    class Derived2 : public Derived1 {
    public:
        Derived2() { cout << "Derived2 Constructor"; }
    };

    int main() {
        Derived2 obj;
        return 0;
    }
    ```

    ### Problem 4: Hierarchical Inheritance

    **Explain what to do in the question:**
    Implement a program demonstrating hierarchical inheritance where multiple derived classes inherit from a single base class and display messages from all constructors.

    **Topic Name:**
    Hierarchical Inheritance

    **Input format:**
    - No input required

    **Output format:**
    - Display messages from all constructors

    **Example:**

    | Input 1: | Output 1: |
    | -------- | --------- |
    | - | Base Constructor Derived1 Constructor |
    | - | Base Constructor Derived2 Constructor |

    ```cpp
    #include <iostream>
    using namespace std;

    class Base {
    public:
        Base() { cout << "Base Constructor "; }
    };

    class Derived1 : public Base {
    public:
        Derived1() { cout << "Derived1 Constructor"; }
    };

    class Derived2 : public Base {
    public:
        Derived2() { cout << "Derived2 Constructor"; }
    };

    int main() {
        Derived1 obj1;
        cout << endl;
        Derived2 obj2;
        return 0;
    }
    ```