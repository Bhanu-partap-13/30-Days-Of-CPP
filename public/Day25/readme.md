# Day 25: Abstract, Concrete, and Self-Referential Classes in C++

## Beginner-Friendly Questions

1. **What is an abstract class in C++?**
    - [ ] A class that cannot have any members
    - [x] A class that cannot be instantiated
    - [ ] A class that has only private members
    - [ ] A class that is used to create objects

2. **Which of the following is true about concrete classes?**
    - [ ] They cannot have member functions
    - [ ] They cannot be inherited
    - [x] They can be instantiated
    - [ ] They must have at least one pure virtual function

3. **What is a pure virtual function?**
    - [ ] A function that has no return type
    - [ ] A function that is defined in the base class
    - [x] A function that has no implementation in the base class
    - [ ] A function that cannot be overridden

4. **How do you declare a pure virtual function in C++?**
    - [ ] `virtual void func() = 0;`
    - [x] `virtual void func() = 0;`
    - [ ] `void func() = 0;`
    - [ ] `virtual void func();`

5. **What is a self-referential class?**
    - [ ] A class that refers to itself in its member functions
    - [x] A class that has a pointer to an instance of the same class
    - [ ] A class that cannot be instantiated
    - [ ] A class that has only static members

6. **Which of the following is an example of a self-referential class?**
    - [ ] `class Node { int data; };`
    - [ ] `class Node { Node next; };`
    - [x] `class Node { Node* next; };`
    - [ ] `class Node { int* data; };`

7. **What is the purpose of an abstract class?**
    - [ ] To create objects directly
    - [ ] To prevent inheritance
    - [x] To provide a base class for other classes to inherit from
    - [ ] To define concrete implementations

## Questions Based on Code

1. **Given the following code, which line declares an abstract class?**
    ```cpp
    class Shape {
         virtual void draw() = 0;
    };
    ```
    - [x] `class Shape {`
    - [ ] `virtual void draw() = 0;`
    - [ ] `};`
    - [ ] None of the above

2. **Which of the following classes is concrete?**
    ```cpp
    class Circle : public Shape {
         void draw() override {
              // implementation
         }
    };
    ```
    - [ ] `class Shape`
    - [x] `class Circle`
    - [ ] Both `class Shape` and `class Circle`
    - [ ] None of the above

3. **What will happen if you try to instantiate an abstract class?**
    - [ ] The object will be created successfully
    - [ ] The program will run without any issues
    - [x] A compilation error will occur
    - [ ] A runtime error will occur

4. **Which of the following is a correct way to declare a self-referential class?**
    ```cpp
    class Node {
         Node* next;
    };
    ```
    - [x] `Node* next;`
    - [ ] `Node next;`
    - [ ] `Node next();`
    - [ ] `Node* next();`

5. **In the following code, what is `Shape`?**
    ```cpp
    class Shape {
         virtual void draw() = 0;
    };
    class Circle : public Shape {
         void draw() override {
              // implementation
         }
    };
    ```
    - [ ] A concrete class
    - [x] An abstract class
    - [ ] A self-referential class
    - [ ] None of the above

6. **Which of the following statements is true about pure virtual functions?**
    - [ ] They must be defined in the derived class
    - [x] They must be overridden in the derived class
    - [ ] They cannot be overridden
    - [ ] They can have an implementation in the base class

7. **What is the output of the following code?**
    ```cpp
    class Node {
         Node* next;
    public:
         Node() : next(nullptr) {}
    };
    int main() {
         Node node;
         return 0;
    }
    ```
    - [ ] Compilation error
    - [ ] Runtime error
    - [x] Program runs successfully
    - [ ] None of the above

    **Problem 1: Implementing an Abstract Class**

    **Explain what you have to do in the question:**
    Create an abstract class `Shape` with a pure virtual function `draw()`. Then, derive a concrete class `Circle` from `Shape` and implement the `draw()` function.

    **Topic name:**
    Abstract Class

    **Input format:**
    - No input required

    **Output format:**
    - Output a message indicating the `draw()` function is called

    **Example:**

    | Input 1: | Output 1: |
    | -------- | --------- |
    | None | Drawing Circle |

    ```cpp
    #include <iostream>
    using namespace std;

    class Shape {
    public:
        virtual void draw() = 0; // Pure virtual function
    };

    class Circle : public Shape {
    public:
        void draw() override {
            cout << "Drawing Circle" << endl;
        }
    };

    int main() {
        Circle circle;
        circle.draw();
        return 0;
    }
    ```

    **Problem 2: Creating a Concrete Class**

    **Explain what you have to do in the question:**
    Define a concrete class `Rectangle` that inherits from an abstract class `Shape` and implements the pure virtual function `draw()`.

    **Topic name:**
    Concrete Class

    **Input format:**
    - No input required

    **Output format:**
    - Output a message indicating the `draw()` function is called

    **Example:**

    | Input 1: | Output 1: |
    | -------- | --------- |
    | None | Drawing Rectangle |

    ```cpp
    #include <iostream>
    using namespace std;

    class Shape {
    public:
        virtual void draw() = 0; // Pure virtual function
    };

    class Rectangle : public Shape {
    public:
        void draw() override {
            cout << "Drawing Rectangle" << endl;
        }
    };

    int main() {
        Rectangle rectangle;
        rectangle.draw();
        return 0;
    }
    ```

    **Problem 3: Implementing a Self-Referential Class**

    **Explain what you have to do in the question:**
    Create a self-referential class `Node` that has a pointer to another instance of the same class. Implement a constructor to initialize the pointer to `nullptr`.

    **Topic name:**
    Self-Referential Class

    **Input format:**
    - No input required

    **Output format:**
    - Output a message indicating the program runs successfully

    **Example:**

    | Input 1: | Output 1: |
    | -------- | --------- |
    | None | Program runs successfully |

    ```cpp
    #include <iostream>
    using namespace std;

    class Node {
        Node* next;
    public:
        Node() : next(nullptr) {
            cout << "Program runs successfully" << endl;
        }
    };

    int main() {
        Node node;
        return 0;
    }
    ```