# Day 26: Early and Late Binding in C++

## Beginner-Friendly Questions

1. **What is early binding in C++?**
    - [ ] A runtime decision
    - [x] A compile-time decision
    - [ ] A type of polymorphism
    - [ ] None of the above

2. **Which keyword is used for late binding in C++?**
    - [ ] static
    - [ ] inline
    - [x] virtual
    - [ ] const

3. **Early binding is also known as:**
    - [x] Static binding
    - [ ] Dynamic binding
    - [ ] Late binding
    - [ ] None of the above

4. **Late binding is also known as:**
    - [ ] Static binding
    - [x] Dynamic binding
    - [ ] Compile-time binding
    - [ ] None of the above

5. **Which type of binding is used for function overloading?**
    - [x] Early binding
    - [ ] Late binding
    - [ ] Both
    - [ ] None

6. **Which type of binding is used for virtual functions?**
    - [ ] Early binding
    - [x] Late binding
    - [ ] Both
    - [ ] None

7. **Which of the following is true about early binding?**
    - [x] It is faster than late binding
    - [ ] It is slower than late binding
    - [ ] It is used for virtual functions
    - [ ] None of the above

## Questions Based on Code

1. **What will be the output of the following code?**
    ```cpp
    class Base {
    public:
         void show() { cout << "Base" << endl; }
    };
    class Derived : public Base {
    public:
         void show() { cout << "Derived" << endl; }
    };
    int main() {
         Base *b;
         Derived d;
         b = &d;
         b->show();
         return 0;
    }
    ```
    - [x] Base
    - [ ] Derived
    - [ ] Compilation error
    - [ ] Runtime error

2. **What will be the output of the following code?**
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
         Base *b;
         Derived d;
         b = &d;
         b->show();
         return 0;
    }
    ```
    - [ ] Base
    - [x] Derived
    - [ ] Compilation error
    - [ ] Runtime error

3. **What will be the output of the following code?**
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
         Base b;
         Derived d;
         b.show();
         d.show();
         return 0;
    }
    ```
    - [x] Base
    - [x] Derived
    - [ ] Compilation error
    - [ ] Runtime error

4. **What will be the output of the following code?**
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
         Base *b = new Derived();
         b->show();
         delete b;
         return 0;
    }
    ```
    - [ ] Base
    - [x] Derived
    - [ ] Compilation error
    - [ ] Runtime error

5. **What will be the output of the following code?**
    ```cpp
    class Base {
    public:
         void show() { cout << "Base" << endl; }
    };
    class Derived : public Base {
    public:
         void show() { cout << "Derived" << endl; }
    };
    int main() {
         Base b;
         Derived d;
         Base *ptr = &d;
         ptr->show();
         return 0;
    }
    ```
    - [x] Base
    - [ ] Derived
    - [ ] Compilation error
    - [ ] Runtime error

6. **What will be the output of the following code?**
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
         Base b;
         Derived d;
         Base *ptr = &d;
         ptr->show();
         return 0;
    }
    ```
    - [ ] Base
    - [x] Derived
    - [ ] Compilation error
    - [ ] Runtime error

7. **What will be the output of the following code?**
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
         Base *b = new Base();
         b->show();
         delete b;
         return 0;
    }
    ```
    - [x] Base
    - [ ] Derived
    - [ ] Compilation error
    - [ ] Runtime error

    <br></br>   

    **Problems Statements**

    ### Problem 1: Early Binding with Function Overloading

    **Explain what you have to do in the question .**
    - Implement a program that demonstrates early binding using function overloading.

    **Input format:**
    - No input required.

    **Output format:**
    - The output of the overloaded functions.

    **Example:**

    | Input 1: | Output 1: |
    | -------- | --------- |
    | None | Function with int argument |
    | None | Function with double argument |

    ```cpp
    #include <iostream>
    using namespace std;

    class Example {
    public:
        void show(int a) {
            cout << "Function with int argument" << endl;
        }
        void show(double a) {
            cout << "Function with double argument" << endl;
        }
    };

    int main() {
        Example ex;
        ex.show(5);
        ex.show(5.5);
        return 0;
    }
    ```

    ---

    ### Problem 2: Late Binding with Virtual Functions

    **Explain what you have to do in the question .**
    - Implement a program that demonstrates late binding using virtual functions.

    **Input format:**
    - No input required.

    **Output format:**
    - The output of the virtual functions.

    **Example:**

    | Input 1: | Output 1: |
    | -------- | --------- |
    | None | Base class function |
    | None | Derived class function |

    ```cpp
    #include <iostream>
    using namespace std;

    class Base {
    public:
        virtual void show() {
            cout << "Base class function" << endl;
        }
    };

    class Derived : public Base {
    public:
        void show() override {
            cout << "Derived class function" << endl;
        }
    };

    int main() {
        Base *b;
        Derived d;
        b = &d;
        b->show();
        return 0;
    }
    ```

    ---

    ### Problem 3: Early vs Late Binding

    **Explain what you have to do in the question .**
    - Implement a program that compares early and late binding.

    **Input format:**
    - No input required.

    **Output format:**
    - The output of the functions demonstrating early and late binding.

    **Example:**

    | Input 1: | Output 1: |
    | -------- | --------- |
    | None | Early Binding: Base class function |
    | None | Late Binding: Derived class function |

    ```cpp
    #include <iostream>
    using namespace std;

    class Base {
    public:
        void show() {
            cout << "Early Binding: Base class function" << endl;
        }
        virtual void display() {
            cout << "Late Binding: Base class function" << endl;
        }
    };

    class Derived : public Base {
    public:
        void show() {
            cout << "Early Binding: Derived class function" << endl;
        }
        void display() override {
            cout << "Late Binding: Derived class function" << endl;
        }
    };

    int main() {
        Base *b;
        Derived d;
        b = &d;
        b->show();
        b->display();
        return 0;
    }
    ```