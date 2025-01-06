# Day 21: Resolving Ambiguity in Inheritance

## Beginner-Friendly Questions

1. What is the purpose of the scope resolution operator in C++?
    - [ ] To define a new class
    - [ ] To create an object
    - [x] To specify which class member to access
    - [ ] To declare a variable

2. How do you resolve ambiguity when two base classes have a function with the same name?
    - [ ] By using the `this` pointer
    - [x] By using the scope resolution operator
    - [ ] By using the `super` keyword
    - [ ] By using the `new` keyword

3. What keyword is used to declare a virtual base class in C++?
    - [ ] `abstract`
    - [ ] `override`
    - [x] `virtual`
    - [ ] `base`

4. Which of the following is true about virtual base classes?
    - [ ] They cannot be inherited
    - [ ] They can only be used with single inheritance
    - [x] They help to avoid multiple copies of a base class
    - [ ] They are not supported in C++

5. How do you declare a virtual base class in C++?
    - [ ] `class Base : public Derived`
    - [ ] `class Derived : public Base`
    - [x] `class Derived : virtual public Base`
    - [ ] `class Base : virtual public Derived`

6. What is the main advantage of using virtual base classes?
    - [ ] They make the code run faster
    - [ ] They simplify the syntax
    - [x] They prevent multiple instances of a base class
    - [ ] They allow private inheritance

7. Which operator is used to access a member of a base class in case of ambiguity?
    - [ ] `->`
    - [ ] `.`
    - [x] `::`
    - [ ] `*`

## Code-Based Questions

1. Given the following code, how do you call `Base::display()` from `Derived`?
    ```cpp
    class Base {
    public:
         void display() { }
    };

    class Derived : public Base {
    public:
         void display() { }
    };
    ```
    - [ ] `display();`
    - [ ] `Base.display();`
    - [x] `Base::display();`
    - [ ] `Derived::display();`

2. In the following code, which keyword resolves the ambiguity?
    ```cpp
    class A {
    public:
         void show() { }
    };

    class B : public A {
    public:
         void show() { }
    };

    class C : public A, public B {
    public:
         void display() {
              // Call A's show()
         }
    };
    ```
    - [ ] `this->show();`
    - [ ] `A.show();`
    - [x] `A::show();`
    - [ ] `B::show();`

3. How do you declare a virtual base class in the following code?
    ```cpp
    class A { };

    class B : public A { };

    class C : public A { };

    class D : public B, public C { };
    ```
    - [ ] `class B : public A { };`
    - [ ] `class C : public A { };`
    - [x] `class B : virtual public A { };`
    - [ ] `class D : virtual public B, virtual public C { };`

4. What is the output of the following code?
    ```cpp
    class A {
    public:
         void show() { std::cout << "A"; }
    };

    class B : virtual public A {
    public:
         void show() { std::cout << "B"; }
    };

    class C : virtual public A {
    public:
         void show() { std::cout << "C"; }
    };

    class D : public B, public C {
    };

    int main() {
         D obj;
         obj.show();
         return 0;
    }
    ```
    - [ ] A
    - [ ] B
    - [ ] C
    - [x] Compilation error

5. How do you call `A::show()` from `D` in the following code?
    ```cpp
    class A {
    public:
         void show() { std::cout << "A"; }
    };

    class B : virtual public A {
    public:
         void show() { std::cout << "B"; }
    };

    class C : virtual public A {
    public:
         void show() { std::cout << "C"; }
    };

    class D : public B, public C {
    public:
         void display() {
              // Call A's show()
         }
    };
    ```
    - [ ] `show();`
    - [ ] `B::show();`
    - [ ] `C::show();`
    - [x] `A::show();`

6. In the following code, which class is a virtual base class?
    ```cpp
    class A { };

    class B : virtual public A { };

    class C : public A { };

    class D : public B, public C { };
    ```
    - [ ] A
    - [x] B
    - [ ] C
    - [ ] D

7. What is the main purpose of using virtual inheritance in the following code?
    ```cpp
    class A { };

    class B : virtual public A { };

    class C : virtual public A { };

    class D : public B, public C { };
    ```
    - [ ] To increase performance
    - [ ] To simplify the code
    - [x] To avoid multiple copies of A
    - [ ] To allow private inheritance

    ## Homework Problem: Resolving Ambiguity in Inheritance

    ### Problem 1: Calling Base Class Function

    **Explain what to do in the question:**
    Write a C++ program where you have two base classes with a function of the same name. Create a derived class that inherits from both base classes. Demonstrate how to call the function from each base class using the scope resolution operator.

    **Topic Name:**
    Resolving Ambiguity Using Scope Resolution

    **Input format:**
    - No input required

    **Output format:**
    - The output should display the result of calling the function from each base class.

    **Example:**

    | Input 1: | Output 1: |
    | -------- | --------- |
    | No input | Base1::show() called |
    |          | Base2::show() called |

    ```cpp
    class Base1 {
    public:
        void show() { std::cout << "Base1::show() called\n"; }
    };

    class Base2 {
    public:
        void show() { std::cout << "Base2::show() called\n"; }
    };

    class Derived : public Base1, public Base2 {
    public:
        void display() {
            Base1::show();
            Base2::show();
        }
    };

    int main() {
        Derived obj;
        obj.display();
        return 0;
    }
    ```

    ### Problem 2: Virtual Base Class

    **Explain what to do in the question:**
    Write a C++ program to demonstrate the use of a virtual base class. Create a class hierarchy where a base class is inherited virtually by two intermediate classes, which are then inherited by a derived class. Show how to call a function from the virtual base class.

    **Topic Name:**
    Using Virtual Base Class

    **Input format:**
    - No input required

    **Output format:**
    - The output should display the result of calling the function from the virtual base class.

    **Example:**

    | Input 1: | Output 1: |
    | -------- | --------- |
    | No input | A::show() called |

    ```cpp
    class A {
    public:
        void show() { std::cout << "A::show() called\n"; }
    };

    class B : virtual public A { };

    class C : virtual public A { };

    class D : public B, public C {
    public:
        void display() {
            A::show();
        }
    };

    int main() {
        D obj;
        obj.display();
        return 0;
    }
    ```

    ### Problem 3: Resolving Ambiguity with Virtual Inheritance

    **Explain what to do in the question:**
    Write a C++ program to demonstrate resolving ambiguity in a class hierarchy using virtual inheritance. Create a base class and two derived classes that inherit virtually from the base class. Then create a class that inherits from both derived classes and call a function from the base class.

    **Topic Name:**
    Resolving Ambiguity with Virtual Inheritance

    **Input format:**
    - No input required

    **Output format:**
    - The output should display the result of calling the function from the base class.

    **Example:**

    | Input 1: | Output 1: |
    | -------- | --------- |
    | No input | A::show() called |

    ```cpp
    class A {
    public:
        void show() { std::cout << "A::show() called\n"; }
    };

    class B : virtual public A { };

    class C : virtual public A { };

    class D : public B, public C {
    public:
        void display() {
            A::show();
        }
    };

    int main() {
        D obj;
        obj.display();
        return 0;
    }
    ```
